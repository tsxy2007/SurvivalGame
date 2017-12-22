// Fill out your copyright notice in the Description page of Project Settings.

#include "SCharacter.h"
#include "SCharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "SUsableActor.h"
#include "SurvivalGame.h"
#include "SWeapon.h"

// Sets default values
ASCharacter::ASCharacter(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))

{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    UCharacterMovementComponent* MoveComp = GetCharacterMovement();
    // 设置 跳这个动作
    MoveComp->GravityScale = 1.5f;
    MoveComp->JumpZVelocity = 620;
    MoveComp->bCanWalkOffLedgesWhenCrouching = true;
    MoveComp->MaxWalkSpeedCrouched = 200;
    
    MoveComp->GetNavAgentPropertiesRef().bCanCrouch = true;
    
    //
    CameraBoomComp = ObjectInitializer.CreateDefaultSubobject<USpringArmComponent>(this,TEXT("CameraBoom"));
    CameraBoomComp->SocketOffset = FVector(0,35,0);
    CameraBoomComp->TargetOffset = FVector(0,0,55);
    CameraBoomComp->bUsePawnControlRotation = true;
    CameraBoomComp->SetupAttachment(GetRootComponent());
    
    CameraComp = ObjectInitializer.CreateDefaultSubobject<UCameraComponent>(this,TEXT("Camera"));
    CameraComp->SetupAttachment( CameraBoomComp );
    
    TargetingSpeedModifier = 0.5f;
    SprintingSpeedModifier = 2.5f;
    
    Health = 100;
    IncrementHungerAmount = 1.0f;
    IncrementHungerInterval = 5.0f;
    CriticalHungerThreshold = 90;
    MaxHunger = 100;
    Hunger = 0 ;
    bHasNewFocus = true;
    
    
    WeaponAttachPoint = TEXT("WeaponSocket");
    SpineAttachPoint = TEXT("SpineSocket");
}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
    
    if (Role == ROLE_Authority)
    {
        FTimerHandle Handle;
        GetWorldTimerManager().SetTimer(Handle,this,&ASCharacter::IncrementHunger,IncrementHungerInterval,true);
    }
	
}

// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (bWantsToRun && !IsSprinting())
        SetSprinting(true);
    
    if (Controller)
    {
        ASUsableActor* Usable = GetUsableInView();
        
        if ( FocusedUsableActor != Usable)
        {
            if (FocusedUsableActor)
            {
                FocusedUsableActor->OnEndFocus();
            }
            bHasNewFocus = true;
        }
        
        FocusedUsableActor = Usable;
        
        if (Usable)
        {
            if (bHasNewFocus)
            {
               Usable->OnBeginFocus();
                bHasNewFocus = false;
            }
            
        }
        
       
    }
    
}

// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward",this , &ASCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight",this,&ASCharacter::MoveRight);
    PlayerInputComponent->BindAxis("Turn",this,&APawn::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LookUp",this,&APawn::AddControllerPitchInput);
    
    PlayerInputComponent->BindAction("SprintHold", IE_Pressed,this,&ASCharacter::OnStartSprinting);
    PlayerInputComponent->BindAction("SprintHold", IE_Released,this,&ASCharacter::OnStopSprinting);
    
    PlayerInputComponent->BindAction("Jump",IE_Pressed,this,&ASCharacter::OnJump);
    
    PlayerInputComponent->BindAction("CrouchToggle",IE_Pressed,this,&ASCharacter::OnCrouchToggle);
    
    
    // Weapons
    PlayerInputComponent->BindAction("Targeting",IE_Pressed,this,&ASCharacter::OnStartTargeting);
    PlayerInputComponent->BindAction("Targeting",IE_Released,this,&ASCharacter::OnEndTargeting);
    
    // Interaction
    PlayerInputComponent->BindAction("Use",IE_Pressed,this,&ASCharacter::Use);
    
    
    //Equip
    PlayerInputComponent->BindAction("NextWeapon",IE_Pressed , this,&ASCharacter::OnNextWeapon);
    PlayerInputComponent->BindAction("PrevWeapon",IE_Pressed , this,&ASCharacter::OnPrevWeapon);
}

void ASCharacter::PostInitializeComponents()
{
    Super::PostInitializeComponents();
}

void ASCharacter::MoveForward(float Val)
{
    if (Controller && Val != 0.f)
    {
        const bool bLimitRotation = (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling());
        const FRotator Rotation = bLimitRotation ? GetActorRotation() : Controller->GetControlRotation();
        const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis( EAxis::X );
        AddMovementInput(Direction,Val);
    }
}

void ASCharacter::MoveRight(float Val)
{
    if ( Val != 0.f )
    {
        const FRotator Rotation = GetActorRotation();
        const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
        AddMovementInput(Direction,Val);
    }
}

// Client mapped to Input
void ASCharacter::OnCrouchToggle()
{
    if ( IsSprinting() )
    {
        SetSprinting(false);
    }
    if (CanCrouch())
    {
        Crouch();
    }
    else
    {
        UnCrouch();
    }
}

void ASCharacter::OnStartTargeting()
{
    SetTargeting(true);
}

void ASCharacter::OnEndTargeting()
{
    SetTargeting(false);
}

void ASCharacter::SetTargeting(bool NewTargeting)
{
    bIsTargeting = NewTargeting;
    if (Role < ROLE_Authority)
    {
        ServerSetTargeting(NewTargeting);
    }
}

void ASCharacter::ServerSetTargeting_Implementation(bool NewTargeting)
{
    SetTargeting(NewTargeting);
}

bool ASCharacter::ServerSetTargeting_Validate(bool NewTargeting)
{
    return true;
}

bool ASCharacter::IsTargeting()const
{
    return bIsTargeting;
}

float ASCharacter::GetTargetingSpeedModifier()const
{
    return TargetingSpeedModifier;
}

void ASCharacter::OnJump()
{
    SetIsJumping(true);
}

void ASCharacter::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
    Super::OnMovementModeChanged( PrevMovementMode,  PreviousCustomMode);
    
    if (PrevMovementMode == EMovementMode::MOVE_Falling &&
        GetCharacterMovement()->MovementMode != EMovementMode::MOVE_Falling)
    {
        SetIsJumping(false);
    }
}

void ASCharacter::Use()
{
    if (Role == ROLE_Authority)
    {
        ASUsableActor* Usable = GetUsableInView();
        if (Usable)
        {
            Usable->OnUsed(this);
        }
    }
    else
    {
        ServerUse();
    }
}

void ASCharacter::ServerUse_Implementation()
{
    Use();
}

bool ASCharacter::ServerUse_Validate()
{
    return true;
}

ASUsableActor* ASCharacter::GetUsableInView()
{
    FVector CamLoc;
    FRotator CamRot;
    
    if (Controller == nullptr)
        return nullptr;
    Controller->GetPlayerViewPoint( CamLoc , CamRot );
    const FVector TraceStart = CamLoc;
    const FVector Direction = CamRot.Vector();
    const FVector TraceEnd = TraceStart + (Direction * 500);
    FCollisionQueryParams TraceParams( TEXT("TraceUsableActor"),true,this );
    TraceParams.bTraceAsyncScene = true;
    TraceParams.bReturnPhysicalMaterial = false;
    TraceParams.bTraceComplex = false;
    
    FHitResult Hit(ForceInit);
    GetWorld()->LineTraceSingleByChannel( Hit , TraceStart, TraceEnd , ECC_Visibility ,TraceParams );
    
   // DrawDebugLine( GetWorld() , TraceStart , TraceEnd , FColor::Red , false , 1.0f );
    
    return Cast<ASUsableActor>( Hit.GetActor() );
}

bool ASCharacter::IsInitiatedJump() const
{
    return bIsJumping;
}

void ASCharacter::SetIsJumping(bool NewJumping)
{
    if (bIsCrouched && NewJumping)
    {
        UnCrouch();
    }
    else if( NewJumping != bIsJumping )
    {
        bIsJumping = NewJumping;
        if (bIsJumping)
        {
            Jump();
        }
    }
    
}

void ASCharacter::ServerSetIsJumping_Implementation(bool NewJumping)
{
    SetIsJumping(NewJumping);
}

bool ASCharacter::ServerSetIsJumping_Validate(bool NewJumping)
{
    return true;
}

void ASCharacter::SetSprinting(bool NewSprinting)
{
    bWantsToRun = NewSprinting;
    
    if (Role < ROLE_Authority)
    {
        ServerSetSprinting(NewSprinting);
    }
}

void ASCharacter::OnStartSprinting()
{
    SetSprinting(true);
}

void ASCharacter::OnStopSprinting()
{
    SetSprinting(false);
}

void ASCharacter::ServerSetSprinting_Implementation(bool NewSprinting)
{
    SetSprinting(NewSprinting);
}

bool ASCharacter::ServerSetSprinting_Validate(bool NewSprinting)
{
    return true;
}

bool ASCharacter::IsSprinting()const
{
    if (!GetCharacterMovement())
    {
        return false;
    }
    
    return bWantsToRun && !IsTargeting() && !GetVelocity().IsZero()
    &&( GetVelocity().GetSafeNormal2D() | GetActorRotation().Vector() ) > 0.8;
}


FRotator ASCharacter::GetAimOffsets()const
{
    const FVector AimDirWS = GetBaseAimRotation().Vector();
    const FVector AimDirLS = ActorToWorld().InverseTransformVectorNoScale(AimDirWS);
    const FRotator AimRotLS = AimDirLS.Rotation();
    
    return AimRotLS;
}

/*****************************/
/* Hitpoints & Hunger        */
/*****************************/
float ASCharacter::GetHealth()const
{
    return Health;
}

float ASCharacter::GetHunger()const
{
    return Hunger;
}

float ASCharacter::GetMaxHealth()const
{
    return GetClass()->GetDefaultObject<ASCharacter>()->Health;
}

float ASCharacter::GetMaxHunger()const
{
    return MaxHunger;
}

void ASCharacter::ConsumeFood( float AmountRestored )
{
    
}

bool ASCharacter::IsAlive()const
{
    return Health > 0;
}

// Increments hunger , used by trimer
void ASCharacter::IncrementHunger()
{
    Hunger = FMath::Clamp(Hunger + IncrementHungerAmount,0.0f,GetMaxHunger());
}



/************************************************************************/
/* Damage, Hit & Death                                                  */
/************************************************************************/

// take Damage & handle death

float ASCharacter::TakeDamage( float Damage , struct FDamageEvent const & DamageEvent , class AController* EventInstigator , class AActor* DamageCauser )
{
    float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
    if (Health <= 0.f)
    {
        ActualDamage = 0.f;
    }
    return ActualDamage;
}


void ASCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    
    // Value is already updated locally, skip in replication step
    DOREPLIFETIME_CONDITION(ASCharacter, bWantsToRun, COND_SkipOwner);
    DOREPLIFETIME_CONDITION(ASCharacter, bIsTargeting, COND_SkipOwner);
    DOREPLIFETIME_CONDITION(ASCharacter, bIsJumping, COND_SkipOwner);
    
    // Replicate to every client, no special condition required
    DOREPLIFETIME(ASCharacter, Health);
    DOREPLIFETIME(ASCharacter, Hunger);
    DOREPLIFETIME(ASCharacter,CurrentWeapon);
    DOREPLIFETIME(ASCharacter,Inventory);
}

FName ASCharacter::GetInventoryAttachPoint(EInventorySlot Slot) const
{
    switch (Slot)
    {
        case EInventorySlot::Hands:
            return WeaponAttachPoint;
        case EInventorySlot::Primary:
            return SpineAttachPoint;
        default:
            return "";
    }
}

void ASCharacter::SetCurrentWeapon(ASWeapon* NewWeapon , ASWeapon* LastWeapon)
{
    PreviousWeapon = LastWeapon;
    ASWeapon* LocalLastWeapon = nullptr;
    if (LastWeapon)
    {
        LocalLastWeapon = LastWeapon;
    }
    else if(NewWeapon != CurrentWeapon)
    {
        LocalLastWeapon = CurrentWeapon;
    }
    
    bool bHasPreviousWeapon = false;
    if (LastWeapon)
    {
        LocalLastWeapon->OnUnEquip();
        bHasPreviousWeapon = true;
    }
    CurrentWeapon = NewWeapon;
    if (NewWeapon)
    {
        NewWeapon->SetOwningPawn(this);
        NewWeapon->OnEquip(bHasPreviousWeapon);
    }
}

void ASCharacter::AddWeapon(ASWeapon *NewWeapon)
{
    if (NewWeapon && Role == ROLE_Authority)
    {
        NewWeapon->OnEnterInventory(this);
        Inventory.AddUnique(NewWeapon);
        if (Inventory.Num() > 0 && CurrentWeapon == nullptr)
        {
            EquipWeapon(Inventory[0]);
        }
    }
}

void ASCharacter::EquipWeapon(ASWeapon* Weapon)
{
    if (Weapon)
    {
        if (Weapon == CurrentWeapon)
            return;
        if (Role == ROLE_Authority)
        {
            SetCurrentWeapon(Weapon , CurrentWeapon);
        }
        else
        {
            ServerEquipWeapon(Weapon);
        }
    }
}

bool ASCharacter::ServerEquipWeapon_Validate(ASWeapon* Weapon)
{
    return true;
}

void ASCharacter::ServerEquipWeapon_Implementation(ASWeapon* Weapon)
{
    EquipWeapon(Weapon);
}

void ASCharacter::OnRep_CurrentWeapon(ASWeapon * LastWeapon)
{
    SetCurrentWeapon(CurrentWeapon, LastWeapon);
}

bool ASCharacter::WeaponSlotAvailable(EInventorySlot CheckSlot)
{
    for (int32 i = 0 ; i<Inventory.Num(); i++)
    {
        ASWeapon* Weapon = Inventory[i];
        if (Weapon)
        {
            if (Weapon->GetStorageSlot() == CheckSlot )
                return false;
        }
    }
    return true;
}

void ASCharacter::OnNextWeapon()
{
    
    if (Inventory.Num() >= 2)
    {
        const int32 CurrentWeaponIndex = Inventory.IndexOfByKey(CurrentWeapon);
        ASWeapon* NextWeapon = Inventory[(CurrentWeaponIndex + 1 ) % Inventory.Num()];
        EquipWeapon(NextWeapon);
    }
    
}

void ASCharacter::OnPrevWeapon()
{
    if (Inventory.Num() >= 2)
    {
        const int32 CurrentWeaponIndex = Inventory.IndexOfByKey(CurrentWeapon);
        ASWeapon* PrevWeapon = Inventory[(CurrentWeaponIndex - 1 + Inventory.Num() ) % Inventory.Num()];
        EquipWeapon(PrevWeapon);
    }
}

void ASCharacter::SwapToNewWeaponMesh()
{
    if (PreviousWeapon)
    {
        PreviousWeapon->AttachMeshToPawn(EInventorySlot::Primary);
    }
    
    if (CurrentWeapon)
    {
        CurrentWeapon->AttachMeshToPawn(EInventorySlot::Hands);
    }
}

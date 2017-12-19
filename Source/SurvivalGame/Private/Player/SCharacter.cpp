// Fill out your copyright notice in the Description page of Project Settings.

#include "SCharacter.h"
#include "SCharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "SUsableActor.h"
#include "SurvivalGame.h"

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
    
}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
	
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
        
        if (Usable)
        {
         //   Usable->OnBeginFocus();
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
    
    DrawDebugLine( GetWorld() , TraceStart , TraceEnd , FColor::Red , false , 1.0f );
    
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
}
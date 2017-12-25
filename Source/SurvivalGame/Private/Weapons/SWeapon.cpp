// Fill out your copyright notice in the Description page of Project Settings.

#include "SWeapon.h"
#include "SCharacter.h"
#include "SurvivalGame.h"


// Sets default values
ASWeapon::ASWeapon(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    
    Mesh = ObjectInitializer.CreateDefaultSubobject<USkeletalMeshComponent>(this,TEXT("WeaponMesh3P"));
    Mesh->MeshComponentUpdateFlag = EMeshComponentUpdateFlag::OnlyTickPoseWhenRendered;
    Mesh->bReceivesDecals = true;
    Mesh->CastShadow = true; // 是否应该投射阴影
    Mesh->SetCollisionObjectType(ECC_WorldDynamic);
    Mesh->SetCollisionEnabled( ECollisionEnabled::NoCollision );
    Mesh->SetCollisionResponseToAllChannels(ECR_Ignore);
    Mesh->SetCollisionResponseToChannel( ECC_Visibility , ECR_Block );
    RootComponent = Mesh;
    
    bIsEquipped = false;
    
    StorageSlot = EInventorySlot::Primary;
    
    SetReplicates(true);
    bNetUseOwnerRelevancy = true;
    
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.TickGroup = TG_PrePhysics;
    
    
    NoEquipAnimDuration = 0.5f;
    bWantsToFire = false;
    
    CurrentState = EWeaponState::Idle;
}

// Called when the game starts or when spawned
void ASWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASWeapon::PostInitializeComponents()
{
    Super::PostInitializeComponents();
    TimeBetweenShots = 60.0f / 700;
}

void ASWeapon::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    DetachMeshFromPawn();
}

void ASWeapon::SetOwningPawn(class ASCharacter *NewOwner)
{
    if (MyPawn != NewOwner)
    {
        MyPawn = NewOwner;
        SetOwner( NewOwner );
    }
}

void ASWeapon::OnRep_MyPawn()
{
    if (MyPawn)
    {
        OnEnterInventory(MyPawn);
    }
    else
    {
        
    }
}

void ASWeapon::AttachMeshToPawn(EInventorySlot Slot)
{
    if (MyPawn)
    {
        DetachMeshFromPawn();
        USkeletalMeshComponent* PawnMesh = MyPawn->GetMesh();
        FName AttachPoint = MyPawn->GetInventoryAttachPoint(Slot);
        Mesh->SetHiddenInGame(false);
        StorageSlot = Slot;
        Mesh->AttachToComponent( PawnMesh , FAttachmentTransformRules::SnapToTargetNotIncludingScale, AttachPoint );
    }
}

void ASWeapon::SetWeaponState(EWeaponState WeaponState)
{
    EWeaponState PreviosState = CurrentState;
    
    // 前个状态是开火当前状态不是 关闭开火
    if (PreviosState == EWeaponState::Firing && WeaponState != EWeaponState::Firing )
    {
        
    }
    CurrentState = WeaponState;
    //前个状态不是开火，当前状态开火。 启动开火流程
    if (PreviosState != EWeaponState::Firing && WeaponState == EWeaponState::Firing )
    {
        
    }
}

EWeaponState ASWeapon::GetCurrentState()const
{
    return CurrentState;
}

void ASWeapon::DetermineWeaponState()
{
    EWeaponState NewState = EWeaponState::Idle;
    
    if (bIsEquipped)
    {
        
        if ( bWantsToFire )
        {
            NewState = EWeaponState::Firing;
        }
        
    }
    else if( bPendingEquip )
    {
        NewState = EWeaponState::Equipping;
    }
    SetWeaponState( NewState );
}

void ASWeapon::DetachMeshFromPawn()
{
    Mesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
    Mesh->SetHiddenInGame(true);
}

USkeletalMeshComponent* ASWeapon::GetWeaponMesh()const
{
    return Mesh;
}

class ASCharacter* ASWeapon::GetPawnOwner() const
{
    return MyPawn;
}

void ASWeapon::OnEquip(bool bPlayAnimation)
{
    bPendingEquip = true;
    
    if (bPlayAnimation)
    {
        float Duration = PlayWeaponAnimation(EquipAnim);
        if (Duration <= 0.f)
        {
            Duration = NoEquipAnimDuration;
        }
        GetWorldTimerManager().SetTimer(EquipFinishedTimerHandle , this, &ASWeapon::OnEquipFinished , Duration , false);
    }
    else
    {
        OnEquipFinished();
    }
}

void ASWeapon::OnEquipFinished()
{
    AttachMeshToPawn();
    bIsEquipped = true;
    bPendingEquip = false;
    
    if (MyPawn)
    {
        
    }
}

void ASWeapon::OnUnEquip()
{
    bIsEquipped = false;
    
    if (bPendingEquip)
    {
        StopWeaponAnimation(EquipAnim);
        bPendingEquip = false;
        GetWorldTimerManager().ClearTimer(EquipFinishedTimerHandle);
    }
    
}

void ASWeapon::OnEnterInventory(ASCharacter* NewOwner)
{
    SetOwningPawn(NewOwner);
    AttachMeshToPawn(EInventorySlot::Primary);
    StorageSlot = EInventorySlot::Primary;
}

void ASWeapon::OnLeaveInventory()
{
    if (Role == ROLE_Authority)
    {
        SetOwningPawn(nullptr);
    }
    
    if( IsAttachedToPawn() )
    {
        OnUnEquip();
    }
    DetachMeshFromPawn();
}

bool ASWeapon::IsEquipped()const
{
    return bIsEquipped;
}

bool ASWeapon::IsAttachedToPawn()const
{
    return IsEquipped() || bPendingEquip;
}


void ASWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASWeapon, MyPawn);
}

float ASWeapon::PlayWeaponAnimation(UAnimMontage* Animation , float InPlayRate , FName StartSectionName)
{
    float Duration = 0.f;
    if (MyPawn)
    {
        if (Animation)
        {
            Duration = MyPawn->PlayAnimMontage( Animation , InPlayRate , StartSectionName );
        }
    }
    return Duration;
}

void ASWeapon::StopWeaponAnimation(UAnimMontage* Animation)
{
    if (MyPawn)
    {
        if (Animation)
        {
            MyPawn->StopAnimMontage(Animation);
        }
    }
}

void ASWeapon::StartFire()
{
    
    if ( !bWantsToFire )
    {
        bWantsToFire = true;
        DetermineWeaponState();
    }
}

void ASWeapon::HandleFiring()
{
    
}

void ASWeapon::OnBurstStarted()
{
    const float GameTime = GetWorld()->GetTimeSeconds();
    
    if (LastFireTime > 0 && TimeBetweenShots > 0 &&
        LastFireTime + TimeBetweenShots > GameTime)
    {
        
    }
    
    else
    {
        
    }
    HandleFiring();
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "SPickupActor.h"
#include "SurvivalGame.h"


ASPickupActor::ASPickupActor(const class FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
    MeshComp->SetCollisionResponseToChannel( ECollisionChannel::ECC_Pawn , ECollisionResponse::ECR_Ignore );
    
    bIsActive = false;
    bStartActive = true;
    bAllowRespawn = true;
    RespawnDelay = 5.0f;
    RespawnDelayRange = 5.0f;
    
    SetReplicates(true);
}

void ASPickupActor::BeginPlay()
{
    Super::BeginPlay();
    RespawnPickup();
}

void ASPickupActor::OnUsed(APawn* InstigatorPawn)
{
    Super::OnUsed(InstigatorPawn);
    UGameplayStatics::PlaySoundAtLocation(this,PickupSound,GetActorLocation());
    bIsActive = false;
    OnPickedUp();
    
    
    // 判断该物品是否是可以重生！！！！！！！
    if (bAllowRespawn)
    {
        FTimerHandle RespawnTimerHandle;
        GetWorld()->GetTimerManager().SetTimer( RespawnTimerHandle , this,&ASPickupActor::RespawnPickup ,RespawnDelay + FMath::RandHelper(RespawnDelayRange) ,false );
    }
    else
    {
        Destroy();
    }
}

void ASPickupActor::OnPickedUp()
{
    if (MeshComp)
    {
        MeshComp->SetVisibility(false);
        MeshComp->SetSimulatePhysics(false);
        MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }
}

void ASPickupActor::RespawnPickup()
{
    bIsActive = true;
    OnRespawned();
}

void ASPickupActor::OnRespawned()
{
    if (MeshComp)
    {
        MeshComp->SetVisibility(true);
        MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    }
}

void ASPickupActor::OnRep_IsActive()
{
    if (bIsActive)
    {
        RespawnPickup();
    }
    else
    {
        OnPickedUp();
    }
}

void ASPickupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASPickupActor, bIsActive);
}

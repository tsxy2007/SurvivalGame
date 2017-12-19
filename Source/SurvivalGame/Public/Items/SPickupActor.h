// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SUsableActor.h"
#include "SPickupActor.generated.h"

/**
 * 
 */
UCLASS(ABSTRACT)
class SURVIVALGAME_API ASPickupActor : public ASUsableActor
{
	GENERATED_UCLASS_BODY()
	
    void BeginPlay() override;
    
    UPROPERTY(EditDefaultsOnly,Category = "Sound")
    class USoundCue* PickupSound;
    
public:
    UFUNCTION()
    void OnRep_IsActive();
    
protected:
    
    UPROPERTY(Transient, ReplicatedUsing = OnRep_IsActive)
    bool bIsActive;
    
    virtual void RespawnPickup();
    
    virtual void OnPickedUp();
    
    virtual void OnRespawned();
    
public:
    
    virtual void OnUsed(APawn* InstigatorPawn) override;
	
	UPROPERTY(EditDefaultsOnly, Category = "Pickup")
    bool bStartActive;
    
    UPROPERTY(EditDefaultsOnly, Category = "Pickup")
    bool bAllowRespawn;
    
    UPROPERTY(EditDefaultsOnly, Category = "Pickup")
    float RespawnDelay;
    
    UPROPERTY(EditDefaultsOnly, Category = "Pickup")
    float RespawnDelayRange;
};

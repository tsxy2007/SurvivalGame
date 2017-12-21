// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SPickupActor.h"
#include "SWeaponPickup.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALGAME_API ASWeaponPickup : public ASPickupActor
{
	GENERATED_UCLASS_BODY()
	
    
public:
    void OnUsed(APawn* InstigatorPawn) override;
};
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SPickupActor.h"
#include "SConsumableActor.generated.h"

/**
 * 
 */
UCLASS(ABSTRACT)
class SURVIVALGAME_API ASConsumableActor : public ASPickupActor
{
	GENERATED_BODY()
	
    ASConsumableActor(const FObjectInitializer& ObjectInitializer);
	
protected:
    
    virtual void OnUsed( APawn* InstigatorPawn ) override;
    
    UPROPERTY(EditDefaultsOnly , Category = "Consumable")
    float Nutrition;
	
	
};

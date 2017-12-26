// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/SWeapon.h"
#include "SWeaponInstant.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALGAME_API ASWeaponInstant : public ASWeapon
{
	GENERATED_UCLASS_BODY()
	
private:
    void SimulateInstantHit(const FVector& ImpactPoint);
protected:
    virtual void FireWeapon() override;
	
    UPROPERTY(EditDefaultsOnly)
    float WeaponRange;
};

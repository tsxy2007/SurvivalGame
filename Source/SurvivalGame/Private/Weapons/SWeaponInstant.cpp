// Fill out your copyright notice in the Description page of Project Settings.

#include "SWeaponInstant.h"




ASWeaponInstant::ASWeaponInstant(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    WeaponRange = 15000;
}

void ASWeaponInstant::FireWeapon()
{
    GEngine->AddOnScreenDebugMessage(-1, 3.0, FColor::Black, TEXT("ASWeaponInstant::FireWeapon") , true);
    const FVector AimDir = GetAdjustedAim();
    const FVector CameraPos = GetCameraDamageStartLocation(AimDir);
    const FVector EndPos = CameraPos + (AimDir * WeaponRange);
    
    FHitResult Impact = WeaponTrace(CameraPos, EndPos);
    
    
}

void ASWeaponInstant::SimulateInstantHit(const FVector& ImpactPoint)
{
    
}

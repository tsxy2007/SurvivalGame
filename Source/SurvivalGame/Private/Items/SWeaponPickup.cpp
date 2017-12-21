// Fill out your copyright notice in the Description page of Project Settings.

#include "SWeaponPickup.h"
#include "Player/SCharacter.h"
#include "SurvivalGame.h"



ASWeaponPickup::ASWeaponPickup(const FObjectInitializer& ObjectInitializer)
:Super(ObjectInitializer)
{
    bAllowRespawn = false;
    
    bReplicateMovement = true;
}

void ASWeaponPickup::OnUsed(APawn* InstigatorPawn)
{
    ASCharacter* Pawn = Cast<ASCharacter>(InstigatorPawn);
    
    if (Pawn )
    {
        
        Super::OnUsed( InstigatorPawn );
    }
    else
    {
        
    }
}

// Fill out your copyright notice in the Description page of Project Settings.

#include "SWeaponPickup.h"
#include "Player/SCharacter.h"
#include "SurvivalGame.h"
#include "Weapons/SWeapon.h"



ASWeaponPickup::ASWeaponPickup(const FObjectInitializer& ObjectInitializer)
:Super(ObjectInitializer)
{
    bAllowRespawn = false;
    
    bReplicateMovement = true;
}

void ASWeaponPickup::OnUsed(APawn* InstigatorPawn)
{
    ASCharacter* Pawn = Cast<ASCharacter>(InstigatorPawn);
    
    if ( Pawn )
    {
     
        if ( Pawn->WeaponSlotAvailable( WeaponClass->GetDefaultObject<ASWeapon>()->GetStorageSlot()  )  )
        {
            FActorSpawnParameters SpawnInfo;
            SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
            ASWeapon* NewWeapon = GetWorld()->SpawnActor<ASWeapon>(WeaponClass , SpawnInfo);
            Pawn->AddWeapon(NewWeapon);
            Super::OnUsed( InstigatorPawn );
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Has Weapon!!!!!"));
        }
    }
    
}

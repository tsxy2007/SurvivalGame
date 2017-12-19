// Fill out your copyright notice in the Description page of Project Settings.

#include "SConsumableActor.h"




ASConsumableActor::ASConsumableActor(const FObjectInitializer& ObjectInitializer)
:Super(ObjectInitializer)
{
    Nutrition = 20 ;
    bAllowRespawn = true;
    RespawnDelay = 60.0f;
    RespawnDelayRange = 20.0f;
}

void ASConsumableActor::OnUsed(APawn* InstigatorPawn)
{
    Super::OnUsed(InstigatorPawn);
}

// Fill out your copyright notice in the Description page of Project Settings.

#include "SGameMode.h"
#include "SPlayerController.h"
#include "SHUD.h"




ASGameMode::ASGameMode(const FObjectInitializer& ObjectInitializer)
:Super(ObjectInitializer)
{
    PlayerControllerClass = ASPlayerController::StaticClass();
    HUDClass = ASHUD::StaticClass();
}

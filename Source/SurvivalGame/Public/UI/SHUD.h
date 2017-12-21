// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include "SHUD.generated.h"

UENUM(BlueprintType)
enum class EHUDState : uint8
{
    Playing,
    Spectating,
    MatchEnd,
} ;

/**
 * 
 */
UCLASS()
class SURVIVALGAME_API ASHUD : public AHUD
{
	GENERATED_BODY()
	
    ASHUD(const class FObjectInitializer& ObjectInitializer);
    
    FCanvasIcon CenterDotIcon;
    
    /* Current HUD state */
    EHUDState CurrentState;
	
    virtual void DrawHUD() override;
    
    void DrawCenterDot();
	
public:
    UFUNCTION(BlueprintCallable,Category = "HUD")
    EHUDState GetCurrentState();
    
    /* Event hook to update HUD state (eg. to determine visibility of widgets) */
    UFUNCTION(BlueprintNativeEvent, Category = "HUDEvents")
    void OnStateChanged(EHUDState NewState);
};

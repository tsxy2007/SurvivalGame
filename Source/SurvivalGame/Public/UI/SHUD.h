// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include "SHUD.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALGAME_API ASHUD : public AHUD
{
	GENERATED_BODY()
	
    ASHUD(const class FObjectInitializer& ObjectInitializer);
    
    FCanvasIcon CenterDotIcon;
	
    virtual void DrawHUD() override;
    
    void DrawCenterDot();
	
	
};

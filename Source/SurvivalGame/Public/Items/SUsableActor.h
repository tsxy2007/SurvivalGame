// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SUsableActor.generated.h"

UCLASS(ABSTRACT)
class SURVIVALGAME_API ASUsableActor : public AActor
{
	GENERATED_UCLASS_BODY()
	
    UPROPERTY(VisibleAnywhere , Category = "Mesh")
    UStaticMeshComponent* MeshComp;
public:
    virtual void OnBeginFocus();
    
    virtual void OnEndFocus();
    
    virtual void OnUsed( APawn* InstigatorPawn );

    FORCEINLINE UStaticMeshComponent* GetMeshComponent() const
    {
        return MeshComp;
    }
	
	
};

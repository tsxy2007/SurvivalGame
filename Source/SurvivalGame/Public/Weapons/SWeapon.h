// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWeapon.generated.h"

UENUM()
enum class EWeaponState
{
    Idle,
    Firing,
    Equipping,
    Reloading,
};

UCLASS(ABSTRACT,Blueprintable)
class SURVIVALGAME_API ASWeapon : public AActor
{
	GENERATED_UCLASS_BODY()
	
    virtual void PostInitialzeComponents() override;
    
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

protected:
    UPROPERTY(Transient,ReplicateUsing = OnRep_MyPawn)
    class ASCharacter* MyPawn;
    
    UPROPERTY(VisibleDefaultsOnly,Category = Mesh)
    USkeletalMeshComponent* Mesh;
    
    UFUNCTION()
    void OnRep_MyPawn();
    
    void DetachMeshFromPawn(); // 先把mesh从pawn删除
    
    
    
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

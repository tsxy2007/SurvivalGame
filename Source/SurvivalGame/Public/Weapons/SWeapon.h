// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STypes.h"
#include "SWeapon.generated.h"

UENUM()
enum class EWeaponState
{
    Idle,
    Firing,
    Equipping,
    Reloading,
};

UCLASS(ABSTRACT, Blueprintable)
class SURVIVALGAME_API ASWeapon : public AActor
{
	GENERATED_UCLASS_BODY()
    
    virtual void PostInitializeComponents() override;
    
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    FTimerHandle    EquipFinishedTimerHandle;
    
    bool            bIsEquipped;
    
    bool            bPendingEquip;
    
    /* Time to assign on equip when no animation is found */
    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    float NoEquipAnimDuration;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing = OnRep_MyPawn)
    class ASCharacter* MyPawn;
    
    UPROPERTY(VisibleDefaultsOnly,Category = Mesh)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(EditDefaultsOnly , Category = "Weapon")
    TSubclassOf<class ASWeaponPickup> WeaponPickupClass;
    
    UPROPERTY(EditDefaultsOnly , Category = "Weapon")
    EInventorySlot  StorageSlot;
    
    UFUNCTION()
    void OnRep_MyPawn();
    
    void DetachMeshFromPawn(); // 先把mesh从pawn删除
    
    virtual void OnEquipFinished();
    
    bool IsEquipped() const;
    
    bool IsAttachedToPawn() const;
    
public:
    UFUNCTION(BlueprintCallable,Category = "Weapon")
    class USkeletalMeshComponent* GetWeaponMesh() const;
    
    void OnUnEquip();
    
    void OnEquip(bool bPlayerAnimation);
    
    void SetOwningPawn(class ASCharacter* NewOwner);
    
    UFUNCTION(BlueprintCallable , Category = "Weapon")
    class ASCharacter* GetPawnOwner() const;
    
    virtual void    OnEnterInventory(ASCharacter* NewOwner);
    
    virtual void    OnLeaveInventory();
    
    FORCEINLINE EInventorySlot GetStorageSlot()
    {
        return StorageSlot;
    }
    
    FORCEINLINE void SetStorageSlot(EInventorySlot NewInventorySlot)
    {
        StorageSlot = NewInventorySlot;
    }
    
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    void AttachMeshToPawn( EInventorySlot Slot = EInventorySlot::Hands );
    
    void SetWeaponState(EWeaponState WeaponState);
    
    EWeaponState GetCurrentState() const;
    
    void DetermineWeaponState();
    
private:
    EWeaponState    CurrentState;
    
    /*
     Simulation & fx
     */
private:
	UPROPERTY(EditDefaultsOnly)
    UAnimMontage* EquipAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* FireAnim;
    
protected:
    float PlayWeaponAnimation(UAnimMontage* Animation , float InPlayRate = 1.f , FName StartSectionName = NAME_None);
    void StopWeaponAnimation(UAnimMontage* Animation);
    
    
    /*
     Fire & Damage Handling
     */
public:
    void StartFire();
    
    virtual void HandleFiring();
    
    void OnBurstStarted();
    
    virtual void SimulateWeaponFire();
    
    virtual void FireWeapon();
    
private:
    bool bWantsToFire;
    
    float LastFireTime;
    
    float TimeBetweenShots;
    
    FTimerHandle TimerHandle_HandleFiring;
    
    
};

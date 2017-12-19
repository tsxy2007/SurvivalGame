// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

UCLASS()
class SURVIVALGAME_API ASCharacter : public ACharacter
{
	GENERATED_UCLASS_BODY()

private:
    UPROPERTY(VisibleAnywhere , Category = "Camera")
    class USpringArmComponent* CameraBoomComp;
    
    UPROPERTY(VisibleAnywhere , Category = "Camera")
    class UCameraComponent* CameraComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    virtual void PostInitializeComponents()override;
    
    /*****************************/
    /* Movement                  */
    /*****************************/
	
    virtual void MoveForward( float Val );
    
    virtual void MoveRight(float Val);
    
    // Client mapped to Input
    void OnCrouchToggle();
    
    // clint mapped to input
    void OnJump();
    
    //client mapped to Input
    void OnStartSprinting();
    
    //client mapped to input
    void OnStopSprinting();
    
    // character wants to run , checked during Tick to see if allowed
    UPROPERTY(Transient,Replicated)
    bool bWantsToRun;
    
    // Is Character currently performing a jump action . Resets on landed;
    UPROPERTY(Transient,Replicated)
    bool bIsJumping;
    
    UFUNCTION(BlueprintCallable,Category = "Movement")
    bool IsInitiatedJump()const;
    
    void SetIsJumping(bool NewJumping);
    
    UFUNCTION(Reliable,Server,WithValidation)
    void ServerSetIsJumping(bool NewJumping);
    
    // Client/local call to update sprint state
    void SetSprinting(bool NewSprinting);
    
    //Server side call to uipdate actual sprint state
    UFUNCTION(Server,Reliable,WithValidation)
    void ServerSetSprinting(bool NewSprinting);
    
    UFUNCTION( BlueprintCallable,Category = Movement )
    bool IsSprinting()const;
    
    float GetSprintingSpeedModifier()const;
    
    UPROPERTY(EditDefaultsOnly,Category = "Movement")
    float SprintingSpeedModifier;
    
    virtual void OnMovementModeChanged( EMovementMode PrevMovementMode , uint8 PreviousCustomMode = 0 ) override;
    
    /*****************************/
    /* Object Interaction        */
    /*****************************/
    
    // Input mapped function for carray object component
    // void OnToggleCarryActor();
    
    // Use the usable actor currently in focus , if any
    virtual void Use();
    
    UFUNCTION(Server , Reliable , WithValidation)
    void ServerUse();

    class ASUsableActor* GetUsableInView();
    
    /*****************************/
    /* Targeting                 */
    /*****************************/
    void OnStartTargeting();
    
    void OnEndTargeting();
    
    void SetTargeting(bool NewTargeting);
    
    UFUNCTION(Server,Reliable,WithValidation)
    void ServerSetTargeting(bool NewTargeting);
    
    // is player aiming down sights
    UFUNCTION(BlueprintCallable,Category = "Targeting")
    bool IsTargeting()const;
    
    float GetTargetingSpeedModifier()const;
    
    // retrieve Ptich/Yaw from current camera
    UFUNCTION(BlueprintCallable,Category = "Targeting")
    FRotator GetAimOffsets()const;
    
    UPROPERTY(Transient ,Replicated)
    bool bIsTargeting;
    
    UPROPERTY(EditDefaultsOnly,Category = "Targeting")
    float TargetingSpeedModifier;
    
    /*****************************/
    /* Hitpoints & Hunger        */
    /*****************************/
    UFUNCTION(BlueprintCallable,Category = "PlayCondition")
    float GetHealth()const;
    
    UFUNCTION(BlueprintCallable,Category = "PlayCondition")
    float GetHunger()const;
    
    UFUNCTION(BlueprintCallable,Category = "PlayCondition")
    float GetMaxHealth()const;
    
    UFUNCTION(BlueprintCallable,Category = "PlayCondition")
    float GetMaxHunger()const;
    
    UFUNCTION(BlueprintCallable,Category = "PlayCondition")
    void ConsumeFood( float AmountRestored );
    
    UFUNCTION(BlueprintCallable,Category = "PlayCondition")
    bool IsAlive()const;
    
    // Increments hunger , used by trimer
    void IncrementHunger();
    
    UPROPERTY(EditDefaultsOnly, Category = "PlayerCondition")
    float IncrementHungerInterval;
    
    UPROPERTY(EditDefaultsOnly, Category = "PlayerCondition")
    float IncrementHungerAmount;
    
    UPROPERTY(EditDefaultsOnly, Category = "PlayerCondition")
    float CriticalHungerThreshold;
    
    UPROPERTY(EditDefaultsOnly, Category = "PlayerCondition", Replicated)
    float Health;
    
    UPROPERTY(EditDefaultsOnly,Category = "PlayCondition" , Replicated)
    float Hunger;
    
    UPROPERTY(EditDefaultsOnly,Category = "PlayCondition" )
    float MaxHunger;
    
    /************************************************************************/
    /* Damage, Hit & Death                                                  */
    /************************************************************************/
    
    // take Damage & handle death
    
    virtual float TakeDamage( float Damage , struct FDamageEvent const & DamageEvent , class AController* EventInstigator , class AActor* DamageCauser ) override;
};

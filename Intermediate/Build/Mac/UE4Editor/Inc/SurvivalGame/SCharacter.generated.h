// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef SURVIVALGAME_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define SURVIVALGAME_SCharacter_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_RPC_WRAPPERS \
	virtual bool ServerSetTargeting_Validate(bool ); \
	virtual void ServerSetTargeting_Implementation(bool NewTargeting); \
	virtual bool ServerSetSprinting_Validate(bool ); \
	virtual void ServerSetSprinting_Implementation(bool NewSprinting); \
	virtual bool ServerSetIsJumping_Validate(bool ); \
	virtual void ServerSetIsJumping_Implementation(bool NewJumping); \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeFood) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AmountRestored); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConsumeFood(Z_Param_AmountRestored); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHunger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxHunger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHunger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHunger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetAimOffsets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTargeting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsTargeting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetTargeting) \
	{ \
		P_GET_UBOOL(Z_Param_NewTargeting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerSetTargeting_Validate(Z_Param_NewTargeting)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetTargeting_Validate")); \
			return; \
		} \
		this->ServerSetTargeting_Implementation(Z_Param_NewTargeting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetSprinting) \
	{ \
		P_GET_UBOOL(Z_Param_NewSprinting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerSetSprinting_Validate(Z_Param_NewSprinting)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetSprinting_Validate")); \
			return; \
		} \
		this->ServerSetSprinting_Implementation(Z_Param_NewSprinting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetIsJumping) \
	{ \
		P_GET_UBOOL(Z_Param_NewJumping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerSetIsJumping_Validate(Z_Param_NewJumping)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetIsJumping_Validate")); \
			return; \
		} \
		this->ServerSetIsJumping_Implementation(Z_Param_NewJumping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInitiatedJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInitiatedJump(); \
		P_NATIVE_END; \
	}


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSetTargeting_Validate(bool ); \
	virtual void ServerSetTargeting_Implementation(bool NewTargeting); \
	virtual bool ServerSetSprinting_Validate(bool ); \
	virtual void ServerSetSprinting_Implementation(bool NewSprinting); \
	virtual bool ServerSetIsJumping_Validate(bool ); \
	virtual void ServerSetIsJumping_Implementation(bool NewJumping); \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeFood) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AmountRestored); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConsumeFood(Z_Param_AmountRestored); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHunger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxHunger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHunger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHunger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetAimOffsets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTargeting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsTargeting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetTargeting) \
	{ \
		P_GET_UBOOL(Z_Param_NewTargeting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerSetTargeting_Validate(Z_Param_NewTargeting)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetTargeting_Validate")); \
			return; \
		} \
		this->ServerSetTargeting_Implementation(Z_Param_NewTargeting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetSprinting) \
	{ \
		P_GET_UBOOL(Z_Param_NewSprinting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerSetSprinting_Validate(Z_Param_NewSprinting)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetSprinting_Validate")); \
			return; \
		} \
		this->ServerSetSprinting_Implementation(Z_Param_NewSprinting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetIsJumping) \
	{ \
		P_GET_UBOOL(Z_Param_NewJumping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerSetIsJumping_Validate(Z_Param_NewJumping)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetIsJumping_Validate")); \
			return; \
		} \
		this->ServerSetIsJumping_Implementation(Z_Param_NewJumping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInitiatedJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInitiatedJump(); \
		P_NATIVE_END; \
	}


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_EVENT_PARMS \
	struct SCharacter_eventServerSetIsJumping_Parms \
	{ \
		bool NewJumping; \
	}; \
	struct SCharacter_eventServerSetSprinting_Parms \
	{ \
		bool NewSprinting; \
	}; \
	struct SCharacter_eventServerSetTargeting_Parms \
	{ \
		bool NewTargeting; \
	};


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter)


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoomComp() { return STRUCT_OFFSET(ASCharacter, CameraBoomComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); }


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_9_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SCharacter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVALGAME_SPickupActor_generated_h
#error "SPickupActor.generated.h already included, missing '#pragma once' in SPickupActor.h"
#endif
#define SURVIVALGAME_SPickupActor_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_IsActive(); \
		P_NATIVE_END; \
	}


#define SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_IsActive(); \
		P_NATIVE_END; \
	}


#define SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPickupActor(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASPickupActor(); \
public: \
	DECLARE_CLASS(ASPickupActor, ASUsableActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASPickupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASPickupActor(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASPickupActor(); \
public: \
	DECLARE_CLASS(ASPickupActor, ASUsableActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASPickupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPickupActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPickupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPickupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPickupActor(ASPickupActor&&); \
	NO_API ASPickupActor(const ASPickupActor&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPickupActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPickupActor(ASPickupActor&&); \
	NO_API ASPickupActor(const ASPickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPickupActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPickupActor)


#define SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(ASPickupActor, bIsActive); }


#define SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_12_PROLOG
#define SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SPickupActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Items_SPickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVALGAME_SConsumableActor_generated_h
#error "SConsumableActor.generated.h already included, missing '#pragma once' in SConsumableActor.h"
#endif
#define SURVIVALGAME_SConsumableActor_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_RPC_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASConsumableActor(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASConsumableActor(); \
public: \
	DECLARE_CLASS(ASConsumableActor, ASPickupActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASConsumableActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASConsumableActor(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASConsumableActor(); \
public: \
	DECLARE_CLASS(ASConsumableActor, ASPickupActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASConsumableActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASConsumableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASConsumableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASConsumableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASConsumableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASConsumableActor(ASConsumableActor&&); \
	NO_API ASConsumableActor(const ASConsumableActor&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASConsumableActor(ASConsumableActor&&); \
	NO_API ASConsumableActor(const ASConsumableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASConsumableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASConsumableActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASConsumableActor)


#define SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Nutrition() { return STRUCT_OFFSET(ASConsumableActor, Nutrition); }


#define SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_12_PROLOG
#define SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Items_SConsumableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

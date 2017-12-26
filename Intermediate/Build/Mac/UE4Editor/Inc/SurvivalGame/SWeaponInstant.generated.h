// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVALGAME_SWeaponInstant_generated_h
#error "SWeaponInstant.generated.h already included, missing '#pragma once' in SWeaponInstant.h"
#endif
#define SURVIVALGAME_SWeaponInstant_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_RPC_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeaponInstant(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASWeaponInstant(); \
public: \
	DECLARE_CLASS(ASWeaponInstant, ASWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeaponInstant) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASWeaponInstant(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASWeaponInstant(); \
public: \
	DECLARE_CLASS(ASWeaponInstant, ASWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeaponInstant) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeaponInstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeaponInstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeaponInstant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeaponInstant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeaponInstant(ASWeaponInstant&&); \
	NO_API ASWeaponInstant(const ASWeaponInstant&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeaponInstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeaponInstant(ASWeaponInstant&&); \
	NO_API ASWeaponInstant(const ASWeaponInstant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeaponInstant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeaponInstant); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeaponInstant)


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponRange() { return STRUCT_OFFSET(ASWeaponInstant, WeaponRange); }


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_12_PROLOG
#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SWeaponInstant."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeaponInstant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASCharacter;
class USkeletalMeshComponent;
#ifdef SURVIVALGAME_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define SURVIVALGAME_SWeapon_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPawnOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASCharacter**)Z_Param__Result=this->GetPawnOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeaponMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=this->GetWeaponMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MyPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_MyPawn(); \
		P_NATIVE_END; \
	}


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPawnOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASCharacter**)Z_Param__Result=this->GetPawnOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeaponMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=this->GetWeaponMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MyPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_MyPawn(); \
		P_NATIVE_END; \
	}


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon)


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyPawn() { return STRUCT_OFFSET(ASWeapon, MyPawn); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ASWeapon, Mesh); } \
	FORCEINLINE static uint32 __PPO__WeaponPickupClass() { return STRUCT_OFFSET(ASWeapon, WeaponPickupClass); } \
	FORCEINLINE static uint32 __PPO__StorageSlot() { return STRUCT_OFFSET(ASWeapon, StorageSlot); } \
	FORCEINLINE static uint32 __PPO__EquipAnim() { return STRUCT_OFFSET(ASWeapon, EquipAnim); } \
	FORCEINLINE static uint32 __PPO__FireAnim() { return STRUCT_OFFSET(ASWeapon, FireAnim); }


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_19_PROLOG
#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SWeapon."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Weapons_SWeapon_h


#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::Idle) \
	op(EWeaponState::Firing) \
	op(EWeaponState::Equipping) \
	op(EWeaponState::Reloading) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

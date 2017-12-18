// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVALGAME_SPlayerController_generated_h
#error "SPlayerController.generated.h already included, missing '#pragma once' in SPlayerController.h"
#endif
#define SURVIVALGAME_SPlayerController_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_RPC_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPlayerController(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASPlayerController(); \
public: \
	DECLARE_CLASS(ASPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASPlayerController(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASPlayerController(); \
public: \
	DECLARE_CLASS(ASPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerController(ASPlayerController&&); \
	NO_API ASPlayerController(const ASPlayerController&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerController(ASPlayerController&&); \
	NO_API ASPlayerController(const ASPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerController)


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_12_PROLOG
#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

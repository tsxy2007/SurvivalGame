// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHUDState : uint8;
#ifdef SURVIVALGAME_SHUD_generated_h
#error "SHUD.generated.h already included, missing '#pragma once' in SHUD.h"
#endif
#define SURVIVALGAME_SHUD_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_RPC_WRAPPERS \
	virtual void OnStateChanged_Implementation(EHUDState NewState); \
 \
	DECLARE_FUNCTION(execOnStateChanged) \
	{ \
		P_GET_ENUM(EHUDState,Z_Param_NewState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnStateChanged_Implementation(EHUDState(Z_Param_NewState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EHUDState*)Z_Param__Result=this->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnStateChanged_Implementation(EHUDState NewState); \
 \
	DECLARE_FUNCTION(execOnStateChanged) \
	{ \
		P_GET_ENUM(EHUDState,Z_Param_NewState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnStateChanged_Implementation(EHUDState(Z_Param_NewState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EHUDState*)Z_Param__Result=this->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_EVENT_PARMS \
	struct SHUD_eventOnStateChanged_Parms \
	{ \
		EHUDState NewState; \
	};


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASHUD(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASHUD(); \
public: \
	DECLARE_CLASS(ASHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASHUD(); \
	friend SURVIVALGAME_API class UClass* Z_Construct_UClass_ASHUD(); \
public: \
	DECLARE_CLASS(ASHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHUD(ASHUD&&); \
	NO_API ASHUD(const ASHUD&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHUD(ASHUD&&); \
	NO_API ASHUD(const ASHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASHUD)


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_PRIVATE_PROPERTY_OFFSET
#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_21_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h


#define FOREACH_ENUM_EHUDSTATE(op) \
	op(EHUDState::Playing) \
	op(EHUDState::Spectating) \
	op(EHUDState::MatchEnd) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UI/SHUD.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHUD() {}
// Cross Module References
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EHUDState();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASHUD_GetCurrentState();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASHUD();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASHUD_OnStateChanged();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
// End Cross Module References
static UEnum* EHUDState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SurvivalGame_EHUDState, Z_Construct_UPackage__Script_SurvivalGame(), TEXT("EHUDState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHUDState(EHUDState_StaticEnum, TEXT("/Script/SurvivalGame"), TEXT("EHUDState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SurvivalGame_EHUDState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SurvivalGame();
		extern uint32 Get_Z_Construct_UEnum_SurvivalGame_EHUDState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHUDState"), 0, Get_Z_Construct_UEnum_SurvivalGame_EHUDState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EHUDState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EHUDState::Playing"), 0);
			EnumNames.Emplace(TEXT("EHUDState::Spectating"), 1);
			EnumNames.Emplace(TEXT("EHUDState::MatchEnd"), 2);
			EnumNames.Emplace(TEXT("EHUDState::EHUDState_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EHUDState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/UI/SHUD.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SurvivalGame_EHUDState_CRC() { return 728622858U; }
	static FName NAME_ASHUD_OnStateChanged = FName(TEXT("OnStateChanged"));
	void ASHUD::OnStateChanged(EHUDState NewState)
	{
		SHUD_eventOnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASHUD_OnStateChanged),&Parms);
	}
	void ASHUD::StaticRegisterNativesASHUD()
	{
		UClass* Class = ASHUD::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetCurrentState", (Native)&ASHUD::execGetCurrentState },
			{ "OnStateChanged", (Native)&ASHUD::execOnStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASHUD_GetCurrentState()
	{
		struct SHUD_eventGetCurrentState_Parms
		{
			EHUDState ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASHUD();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SHUD_eventGetCurrentState_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, SHUD_eventGetCurrentState_Parms), 0x0010000000000580, Z_Construct_UEnum_SurvivalGame_EHUDState());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("HUD"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UI/SHUD.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASHUD_OnStateChanged()
	{
		UObject* Outer = Z_Construct_UClass_ASHUD();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnStateChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020C00, 65535, sizeof(SHUD_eventOnStateChanged_Parms));
			UProperty* NewProp_NewState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(NewState, SHUD_eventOnStateChanged_Parms), 0x0010000000000080, Z_Construct_UEnum_SurvivalGame_EHUDState());
			UProperty* NewProp_NewState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_NewState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("HUDEvents"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UI/SHUD.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event hook to update HUD state (eg. to determine visibility of widgets)"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASHUD_NoRegister()
	{
		return ASHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ASHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_SurvivalGame();
			OuterClass = ASHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x2090028Cu;

				OuterClass->LinkChild(Z_Construct_UFunction_ASHUD_GetCurrentState());
				OuterClass->LinkChild(Z_Construct_UFunction_ASHUD_OnStateChanged());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASHUD_GetCurrentState(), "GetCurrentState"); // 3157274590
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASHUD_OnStateChanged(), "OnStateChanged"); // 2554496132
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ASHUD> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UI/SHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/UI/SHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASHUD, 2762358670);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASHUD(Z_Construct_UClass_ASHUD, &ASHUD::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

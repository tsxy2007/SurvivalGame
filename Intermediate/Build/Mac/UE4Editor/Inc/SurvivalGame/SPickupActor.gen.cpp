// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Items/SPickupActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPickupActor() {}
// Cross Module References
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASPickupActor_OnRep_IsActive();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPickupActor();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPickupActor_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASUsableActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void ASPickupActor::StaticRegisterNativesASPickupActor()
	{
		UClass* Class = ASPickupActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnRep_IsActive", (Native)&ASPickupActor::execOnRep_IsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASPickupActor_OnRep_IsActive()
	{
		UObject* Outer = Z_Construct_UClass_ASPickupActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnRep_IsActive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Items/SPickupActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPickupActor_NoRegister()
	{
		return ASPickupActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPickupActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ASUsableActor();
			Z_Construct_UPackage__Script_SurvivalGame();
			OuterClass = ASPickupActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900081u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASPickupActor_OnRep_IsActive());

				UProperty* NewProp_RespawnDelayRange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RespawnDelayRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RespawnDelayRange, ASPickupActor), 0x0010000000010001);
				UProperty* NewProp_RespawnDelay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RespawnDelay"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RespawnDelay, ASPickupActor), 0x0010000000010001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowRespawn, ASPickupActor);
				UProperty* NewProp_bAllowRespawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAllowRespawn"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowRespawn, ASPickupActor), 0x0010000000010001, CPP_BOOL_PROPERTY_BITMASK(bAllowRespawn, ASPickupActor), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStartActive, ASPickupActor);
				UProperty* NewProp_bStartActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bStartActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStartActive, ASPickupActor), 0x0010000000010001, CPP_BOOL_PROPERTY_BITMASK(bStartActive, ASPickupActor), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsActive, ASPickupActor);
				UProperty* NewProp_bIsActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsActive, ASPickupActor), 0x0020080100002020, CPP_BOOL_PROPERTY_BITMASK(bIsActive, ASPickupActor), sizeof(bool), true);
				NewProp_bIsActive->RepNotifyFunc = FName(TEXT("OnRep_IsActive"));
				UProperty* NewProp_PickupSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PickupSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PickupSound, ASPickupActor), 0x0010000000010001, Z_Construct_UClass_USoundCue_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASPickupActor_OnRep_IsActive(), "OnRep_IsActive"); // 854112216
				static TCppClassTypeInfo<TCppClassTypeTraits<ASPickupActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Items/SPickupActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Items/SPickupActor.h"));
				MetaData->SetValue(NewProp_RespawnDelayRange, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_RespawnDelayRange, TEXT("ModuleRelativePath"), TEXT("Public/Items/SPickupActor.h"));
				MetaData->SetValue(NewProp_RespawnDelay, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_RespawnDelay, TEXT("ModuleRelativePath"), TEXT("Public/Items/SPickupActor.h"));
				MetaData->SetValue(NewProp_bAllowRespawn, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_bAllowRespawn, TEXT("ModuleRelativePath"), TEXT("Public/Items/SPickupActor.h"));
				MetaData->SetValue(NewProp_bStartActive, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_bStartActive, TEXT("ModuleRelativePath"), TEXT("Public/Items/SPickupActor.h"));
				MetaData->SetValue(NewProp_bIsActive, TEXT("ModuleRelativePath"), TEXT("Public/Items/SPickupActor.h"));
				MetaData->SetValue(NewProp_PickupSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_PickupSound, TEXT("ModuleRelativePath"), TEXT("Public/Items/SPickupActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPickupActor, 1749840877);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPickupActor(Z_Construct_UClass_ASPickupActor, &ASPickupActor::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASPickupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPickupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Items/SConsumableActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSConsumableActor() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASConsumableActor_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASConsumableActor();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPickupActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void ASConsumableActor::StaticRegisterNativesASConsumableActor()
	{
	}
	UClass* Z_Construct_UClass_ASConsumableActor_NoRegister()
	{
		return ASConsumableActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASConsumableActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ASPickupActor();
			Z_Construct_UPackage__Script_SurvivalGame();
			OuterClass = ASConsumableActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900081u;


				UProperty* NewProp_Nutrition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Nutrition"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Nutrition, ASConsumableActor), 0x0020080000010001);
				static TCppClassTypeInfo<TCppClassTypeTraits<ASConsumableActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Items/SConsumableActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Items/SConsumableActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_Nutrition, TEXT("Category"), TEXT("Consumable"));
				MetaData->SetValue(NewProp_Nutrition, TEXT("ModuleRelativePath"), TEXT("Public/Items/SConsumableActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASConsumableActor, 1812022181);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASConsumableActor(Z_Construct_UClass_ASConsumableActor, &ASConsumableActor::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASConsumableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASConsumableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

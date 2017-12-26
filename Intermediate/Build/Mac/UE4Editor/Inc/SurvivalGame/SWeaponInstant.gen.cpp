// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapons/SWeaponInstant.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeaponInstant() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeaponInstant_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeaponInstant();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void ASWeaponInstant::StaticRegisterNativesASWeaponInstant()
	{
	}
	UClass* Z_Construct_UClass_ASWeaponInstant_NoRegister()
	{
		return ASWeaponInstant::StaticClass();
	}
	UClass* Z_Construct_UClass_ASWeaponInstant()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ASWeapon();
			Z_Construct_UPackage__Script_SurvivalGame();
			OuterClass = ASWeaponInstant::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_WeaponRange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WeaponRange, ASWeaponInstant), 0x0020080000010001);
				static TCppClassTypeInfo<TCppClassTypeTraits<ASWeaponInstant> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapons/SWeaponInstant.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeaponInstant.h"));
				MetaData->SetValue(NewProp_WeaponRange, TEXT("Category"), TEXT("SWeaponInstant"));
				MetaData->SetValue(NewProp_WeaponRange, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeaponInstant.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWeaponInstant, 2292683627);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeaponInstant(Z_Construct_UClass_ASWeaponInstant, &ASWeaponInstant::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASWeaponInstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeaponInstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

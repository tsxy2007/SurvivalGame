// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Items/SWeaponPickup.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeaponPickup() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeaponPickup_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeaponPickup();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPickupActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ASWeaponPickup::StaticRegisterNativesASWeaponPickup()
	{
	}
	UClass* Z_Construct_UClass_ASWeaponPickup_NoRegister()
	{
		return ASWeaponPickup::StaticClass();
	}
	UClass* Z_Construct_UClass_ASWeaponPickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ASPickupActor();
			Z_Construct_UPackage__Script_SurvivalGame();
			OuterClass = ASWeaponPickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_WeaponClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(WeaponClass, ASWeaponPickup), 0x0014000000010001, Z_Construct_UClass_ASWeapon_NoRegister(), Z_Construct_UClass_UClass());
				static TCppClassTypeInfo<TCppClassTypeTraits<ASWeaponPickup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Items/SWeaponPickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Items/SWeaponPickup.h"));
				MetaData->SetValue(NewProp_WeaponClass, TEXT("Category"), TEXT("WeaponClass"));
				MetaData->SetValue(NewProp_WeaponClass, TEXT("ModuleRelativePath"), TEXT("Public/Items/SWeaponPickup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWeaponPickup, 3317272619);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeaponPickup(Z_Construct_UClass_ASWeaponPickup, &ASWeaponPickup::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASWeaponPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeaponPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

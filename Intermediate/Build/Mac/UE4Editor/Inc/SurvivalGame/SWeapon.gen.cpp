// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapons/SWeapon.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeapon() {}
// Cross Module References
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EWeaponState();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASWeapon_GetPawnOwner();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASWeapon_GetWeaponMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASWeapon_OnRep_MyPawn();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EInventorySlot();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeaponPickup_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
static UEnum* EWeaponState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SurvivalGame_EWeaponState, Z_Construct_UPackage__Script_SurvivalGame(), TEXT("EWeaponState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponState(EWeaponState_StaticEnum, TEXT("/Script/SurvivalGame"), TEXT("EWeaponState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SurvivalGame_EWeaponState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SurvivalGame();
		extern uint32 Get_Z_Construct_UEnum_SurvivalGame_EWeaponState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponState"), 0, Get_Z_Construct_UEnum_SurvivalGame_EWeaponState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EWeaponState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EWeaponState::Idle"), 0);
			EnumNames.Emplace(TEXT("EWeaponState::Firing"), 1);
			EnumNames.Emplace(TEXT("EWeaponState::Equipping"), 2);
			EnumNames.Emplace(TEXT("EWeaponState::Reloading"), 3);
			EnumNames.Emplace(TEXT("EWeaponState::EWeaponState_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EWeaponState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SurvivalGame_EWeaponState_CRC() { return 729268067U; }
	void ASWeapon::StaticRegisterNativesASWeapon()
	{
		UClass* Class = ASWeapon::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetPawnOwner", (Native)&ASWeapon::execGetPawnOwner },
			{ "GetWeaponMesh", (Native)&ASWeapon::execGetWeaponMesh },
			{ "OnRep_MyPawn", (Native)&ASWeapon::execOnRep_MyPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASWeapon_GetPawnOwner()
	{
		struct SWeapon_eventGetPawnOwner_Parms
		{
			ASCharacter* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASWeapon();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPawnOwner"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(SWeapon_eventGetPawnOwner_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, SWeapon_eventGetPawnOwner_Parms), 0x0010000000000580, Z_Construct_UClass_ASCharacter_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Weapon"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASWeapon_GetWeaponMesh()
	{
		struct SWeapon_eventGetWeaponMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASWeapon();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetWeaponMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(SWeapon_eventGetWeaponMesh_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, SWeapon_eventGetWeaponMesh_Parms), 0x0010000000080588, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Weapon"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASWeapon_OnRep_MyPawn()
	{
		UObject* Outer = Z_Construct_UClass_ASWeapon();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnRep_MyPawn"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASWeapon_NoRegister()
	{
		return ASWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_ASWeapon()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SurvivalGame();
			OuterClass = ASWeapon::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900081u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASWeapon_GetPawnOwner());
				OuterClass->LinkChild(Z_Construct_UFunction_ASWeapon_GetWeaponMesh());
				OuterClass->LinkChild(Z_Construct_UFunction_ASWeapon_OnRep_MyPawn());

				UProperty* NewProp_MuzzleAttachPoint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MuzzleAttachPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(MuzzleAttachPoint, ASWeapon), 0x0040000000010001);
				UProperty* NewProp_FireAnim = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireAnim, ASWeapon), 0x0040000000010001, Z_Construct_UClass_UAnimMontage_NoRegister());
				UProperty* NewProp_EquipAnim = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EquipAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EquipAnim, ASWeapon), 0x0040000000010001, Z_Construct_UClass_UAnimMontage_NoRegister());
				UProperty* NewProp_StorageSlot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StorageSlot"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(StorageSlot, ASWeapon), 0x0020080000010001, Z_Construct_UEnum_SurvivalGame_EInventorySlot());
				UProperty* NewProp_StorageSlot_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_StorageSlot, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_WeaponPickupClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponPickupClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(WeaponPickupClass, ASWeapon), 0x0024080000010001, Z_Construct_UClass_ASWeaponPickup_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh, ASWeapon), 0x00200800000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_MyPawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyPawn"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyPawn, ASWeapon), 0x0020080100002020, Z_Construct_UClass_ASCharacter_NoRegister());
				NewProp_MyPawn->RepNotifyFunc = FName(TEXT("OnRep_MyPawn"));
				UProperty* NewProp_NoEquipAnimDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NoEquipAnimDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NoEquipAnimDuration, ASWeapon), 0x0010000000010001);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASWeapon_GetPawnOwner(), "GetPawnOwner"); // 1002707979
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASWeapon_GetWeaponMesh(), "GetWeaponMesh"); // 3443349918
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASWeapon_OnRep_MyPawn(), "OnRep_MyPawn"); // 1163291688
				static TCppClassTypeInfo<TCppClassTypeTraits<ASWeapon> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapons/SWeapon.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
				MetaData->SetValue(NewProp_MuzzleAttachPoint, TEXT("Category"), TEXT("SWeapon"));
				MetaData->SetValue(NewProp_MuzzleAttachPoint, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
				MetaData->SetValue(NewProp_FireAnim, TEXT("Category"), TEXT("SWeapon"));
				MetaData->SetValue(NewProp_FireAnim, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
				MetaData->SetValue(NewProp_EquipAnim, TEXT("Category"), TEXT("SWeapon"));
				MetaData->SetValue(NewProp_EquipAnim, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
				MetaData->SetValue(NewProp_StorageSlot, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_StorageSlot, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
				MetaData->SetValue(NewProp_WeaponPickupClass, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponPickupClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
				MetaData->SetValue(NewProp_Mesh, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
				MetaData->SetValue(NewProp_MyPawn, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
				MetaData->SetValue(NewProp_NoEquipAnimDuration, TEXT("Category"), TEXT("Animation"));
				MetaData->SetValue(NewProp_NoEquipAnimDuration, TEXT("ModuleRelativePath"), TEXT("Public/Weapons/SWeapon.h"));
				MetaData->SetValue(NewProp_NoEquipAnimDuration, TEXT("ToolTip"), TEXT("Time to assign on equip when no animation is found"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWeapon, 3464162924);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeapon(Z_Construct_UClass_ASWeapon, &ASWeapon::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

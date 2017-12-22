// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/STypes.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTypes() {}
// Cross Module References
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EInventorySlot();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
static UEnum* EInventorySlot_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SurvivalGame_EInventorySlot, Z_Construct_UPackage__Script_SurvivalGame(), TEXT("EInventorySlot"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInventorySlot(EInventorySlot_StaticEnum, TEXT("/Script/SurvivalGame"), TEXT("EInventorySlot"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SurvivalGame_EInventorySlot()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SurvivalGame();
		extern uint32 Get_Z_Construct_UEnum_SurvivalGame_EInventorySlot_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInventorySlot"), 0, Get_Z_Construct_UEnum_SurvivalGame_EInventorySlot_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EInventorySlot"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EInventorySlot::Hands"), 0);
			EnumNames.Emplace(TEXT("EInventorySlot::Primary"), 1);
			EnumNames.Emplace(TEXT("EInventorySlot::Secondary"), 2);
			EnumNames.Emplace(TEXT("EInventorySlot::EInventorySlot_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EInventorySlot");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/STypes.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SurvivalGame_EInventorySlot_CRC() { return 3693904167U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

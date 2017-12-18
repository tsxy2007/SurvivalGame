// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Player/SPlayerCameraManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerCameraManager() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPlayerCameraManager_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void ASPlayerCameraManager::StaticRegisterNativesASPlayerCameraManager()
	{
	}
	UClass* Z_Construct_UClass_ASPlayerCameraManager_NoRegister()
	{
		return ASPlayerCameraManager::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPlayerCameraManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerCameraManager();
			Z_Construct_UPackage__Script_SurvivalGame();
			OuterClass = ASPlayerCameraManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ASPlayerCameraManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Player/SPlayerCameraManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Player/SPlayerCameraManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPlayerCameraManager, 645590757);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPlayerCameraManager(Z_Construct_UClass_ASPlayerCameraManager, &ASPlayerCameraManager::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASPlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

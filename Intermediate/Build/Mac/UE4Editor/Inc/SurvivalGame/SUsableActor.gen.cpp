// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Items/SUsableActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUsableActor() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASUsableActor_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASUsableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASUsableActor::StaticRegisterNativesASUsableActor()
	{
	}
	UClass* Z_Construct_UClass_ASUsableActor_NoRegister()
	{
		return ASUsableActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASUsableActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SurvivalGame();
			OuterClass = ASUsableActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900081u;


				UProperty* NewProp_MeshComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComp, ASUsableActor), 0x00100000000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ASUsableActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Items/SUsableActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Items/SUsableActor.h"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("ModuleRelativePath"), TEXT("Public/Items/SUsableActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASUsableActor, 3827742048);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASUsableActor(Z_Construct_UClass_ASUsableActor, &ASUsableActor::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASUsableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASUsableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

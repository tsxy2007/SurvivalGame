// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Player/SCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}
// Cross Module References
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_ConsumeFood();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASCharacter();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_GetAimOffsets();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_GetHealth();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_GetHunger();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_GetMaxHealth();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_GetMaxHunger();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_IsAlive();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_IsInitiatedJump();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_IsSprinting();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_IsTargeting();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_ServerSetIsJumping();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_ServerSetSprinting();
	SURVIVALGAME_API UFunction* Z_Construct_UFunction_ASCharacter_ServerSetTargeting();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static FName NAME_ASCharacter_ServerSetIsJumping = FName(TEXT("ServerSetIsJumping"));
	void ASCharacter::ServerSetIsJumping(bool NewJumping)
	{
		SCharacter_eventServerSetIsJumping_Parms Parms;
		Parms.NewJumping=NewJumping ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASCharacter_ServerSetIsJumping),&Parms);
	}
	static FName NAME_ASCharacter_ServerSetSprinting = FName(TEXT("ServerSetSprinting"));
	void ASCharacter::ServerSetSprinting(bool NewSprinting)
	{
		SCharacter_eventServerSetSprinting_Parms Parms;
		Parms.NewSprinting=NewSprinting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASCharacter_ServerSetSprinting),&Parms);
	}
	static FName NAME_ASCharacter_ServerSetTargeting = FName(TEXT("ServerSetTargeting"));
	void ASCharacter::ServerSetTargeting(bool NewTargeting)
	{
		SCharacter_eventServerSetTargeting_Parms Parms;
		Parms.NewTargeting=NewTargeting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASCharacter_ServerSetTargeting),&Parms);
	}
	void ASCharacter::StaticRegisterNativesASCharacter()
	{
		UClass* Class = ASCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ConsumeFood", (Native)&ASCharacter::execConsumeFood },
			{ "GetAimOffsets", (Native)&ASCharacter::execGetAimOffsets },
			{ "GetHealth", (Native)&ASCharacter::execGetHealth },
			{ "GetHunger", (Native)&ASCharacter::execGetHunger },
			{ "GetMaxHealth", (Native)&ASCharacter::execGetMaxHealth },
			{ "GetMaxHunger", (Native)&ASCharacter::execGetMaxHunger },
			{ "IsAlive", (Native)&ASCharacter::execIsAlive },
			{ "IsInitiatedJump", (Native)&ASCharacter::execIsInitiatedJump },
			{ "IsSprinting", (Native)&ASCharacter::execIsSprinting },
			{ "IsTargeting", (Native)&ASCharacter::execIsTargeting },
			{ "ServerSetIsJumping", (Native)&ASCharacter::execServerSetIsJumping },
			{ "ServerSetSprinting", (Native)&ASCharacter::execServerSetSprinting },
			{ "ServerSetTargeting", (Native)&ASCharacter::execServerSetTargeting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASCharacter_ConsumeFood()
	{
		struct SCharacter_eventConsumeFood_Parms
		{
			float AmountRestored;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConsumeFood"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SCharacter_eventConsumeFood_Parms));
			UProperty* NewProp_AmountRestored = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AmountRestored"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AmountRestored, SCharacter_eventConsumeFood_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PlayCondition"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_GetAimOffsets()
	{
		struct SCharacter_eventGetAimOffsets_Parms
		{
			FRotator ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAimOffsets"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(SCharacter_eventGetAimOffsets_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, SCharacter_eventGetAimOffsets_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Targeting"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("retrieve Ptich/Yaw from current camera"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_GetHealth()
	{
		struct SCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(SCharacter_eventGetHealth_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, SCharacter_eventGetHealth_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PlayCondition"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_GetHunger()
	{
		struct SCharacter_eventGetHunger_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHunger"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(SCharacter_eventGetHunger_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, SCharacter_eventGetHunger_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PlayCondition"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_GetMaxHealth()
	{
		struct SCharacter_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMaxHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(SCharacter_eventGetMaxHealth_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, SCharacter_eventGetMaxHealth_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PlayCondition"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_GetMaxHunger()
	{
		struct SCharacter_eventGetMaxHunger_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMaxHunger"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(SCharacter_eventGetMaxHunger_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, SCharacter_eventGetMaxHunger_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PlayCondition"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_IsAlive()
	{
		struct SCharacter_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsAlive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(SCharacter_eventIsAlive_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, SCharacter_eventIsAlive_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, SCharacter_eventIsAlive_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, SCharacter_eventIsAlive_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PlayCondition"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_IsInitiatedJump()
	{
		struct SCharacter_eventIsInitiatedJump_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsInitiatedJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(SCharacter_eventIsInitiatedJump_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, SCharacter_eventIsInitiatedJump_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, SCharacter_eventIsInitiatedJump_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, SCharacter_eventIsInitiatedJump_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Movement"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_IsSprinting()
	{
		struct SCharacter_eventIsSprinting_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsSprinting"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(SCharacter_eventIsSprinting_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, SCharacter_eventIsSprinting_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, SCharacter_eventIsSprinting_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, SCharacter_eventIsSprinting_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Movement"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_IsTargeting()
	{
		struct SCharacter_eventIsTargeting_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsTargeting"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(SCharacter_eventIsTargeting_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, SCharacter_eventIsTargeting_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, SCharacter_eventIsTargeting_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, SCharacter_eventIsTargeting_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Targeting"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("is player aiming down sights"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_ServerSetIsJumping()
	{
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerSetIsJumping"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220CC0, 65535, sizeof(SCharacter_eventServerSetIsJumping_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(NewJumping, SCharacter_eventServerSetIsJumping_Parms);
			UProperty* NewProp_NewJumping = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewJumping"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(NewJumping, SCharacter_eventServerSetIsJumping_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(NewJumping, SCharacter_eventServerSetIsJumping_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_ServerSetSprinting()
	{
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerSetSprinting"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220CC0, 65535, sizeof(SCharacter_eventServerSetSprinting_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(NewSprinting, SCharacter_eventServerSetSprinting_Parms);
			UProperty* NewProp_NewSprinting = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewSprinting"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(NewSprinting, SCharacter_eventServerSetSprinting_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(NewSprinting, SCharacter_eventServerSetSprinting_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Server side call to uipdate actual sprint state"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_ServerSetTargeting()
	{
		UObject* Outer = Z_Construct_UClass_ASCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerSetTargeting"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220CC0, 65535, sizeof(SCharacter_eventServerSetTargeting_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(NewTargeting, SCharacter_eventServerSetTargeting_Parms);
			UProperty* NewProp_NewTargeting = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewTargeting"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(NewTargeting, SCharacter_eventServerSetTargeting_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(NewTargeting, SCharacter_eventServerSetTargeting_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASCharacter_NoRegister()
	{
		return ASCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ASCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_SurvivalGame();
			OuterClass = ASCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_ConsumeFood());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_GetAimOffsets());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_GetHealth());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_GetHunger());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_GetMaxHealth());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_GetMaxHunger());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_IsAlive());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_IsInitiatedJump());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_IsSprinting());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_IsTargeting());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_ServerSetIsJumping());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_ServerSetSprinting());
				OuterClass->LinkChild(Z_Construct_UFunction_ASCharacter_ServerSetTargeting());

				UProperty* NewProp_MaxHunger = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxHunger"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxHunger, ASCharacter), 0x0010000000010001);
				UProperty* NewProp_Hunger = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Hunger"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Hunger, ASCharacter), 0x0010000000010021);
				UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Health, ASCharacter), 0x0010000000010021);
				UProperty* NewProp_CriticalHungerThreshold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CriticalHungerThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CriticalHungerThreshold, ASCharacter), 0x0010000000010001);
				UProperty* NewProp_IncrementHungerAmount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IncrementHungerAmount"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(IncrementHungerAmount, ASCharacter), 0x0010000000010001);
				UProperty* NewProp_IncrementHungerInterval = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IncrementHungerInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(IncrementHungerInterval, ASCharacter), 0x0010000000010001);
				UProperty* NewProp_TargetingSpeedModifier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TargetingSpeedModifier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TargetingSpeedModifier, ASCharacter), 0x0010000000010001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsTargeting, ASCharacter);
				UProperty* NewProp_bIsTargeting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsTargeting"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsTargeting, ASCharacter), 0x0010000000002020, CPP_BOOL_PROPERTY_BITMASK(bIsTargeting, ASCharacter), sizeof(bool), true);
				UProperty* NewProp_SprintingSpeedModifier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SprintingSpeedModifier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SprintingSpeedModifier, ASCharacter), 0x0010000000010001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsJumping, ASCharacter);
				UProperty* NewProp_bIsJumping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsJumping"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsJumping, ASCharacter), 0x0010000000002020, CPP_BOOL_PROPERTY_BITMASK(bIsJumping, ASCharacter), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bWantsToRun, ASCharacter);
				UProperty* NewProp_bWantsToRun = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bWantsToRun"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bWantsToRun, ASCharacter), 0x0010000000002020, CPP_BOOL_PROPERTY_BITMASK(bWantsToRun, ASCharacter), sizeof(bool), true);
				UProperty* NewProp_CameraComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraComp, ASCharacter), 0x00400000000a0009, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoomComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoomComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoomComp, ASCharacter), 0x00400000000a0009, Z_Construct_UClass_USpringArmComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_ConsumeFood(), "ConsumeFood"); // 566506168
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_GetAimOffsets(), "GetAimOffsets"); // 1622877768
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_GetHealth(), "GetHealth"); // 3862222744
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_GetHunger(), "GetHunger"); // 3236560344
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_GetMaxHealth(), "GetMaxHealth"); // 146745502
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_GetMaxHunger(), "GetMaxHunger"); // 2917662844
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_IsAlive(), "IsAlive"); // 2259844117
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_IsInitiatedJump(), "IsInitiatedJump"); // 1674023119
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_IsSprinting(), "IsSprinting"); // 4120500687
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_IsTargeting(), "IsTargeting"); // 1037682351
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_ServerSetIsJumping(), "ServerSetIsJumping"); // 684641897
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_ServerSetSprinting(), "ServerSetSprinting"); // 1689812643
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASCharacter_ServerSetTargeting(), "ServerSetTargeting"); // 1976176071
				static TCppClassTypeInfo<TCppClassTypeTraits<ASCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Player/SCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_MaxHunger, TEXT("Category"), TEXT("PlayCondition"));
				MetaData->SetValue(NewProp_MaxHunger, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_Hunger, TEXT("Category"), TEXT("PlayCondition"));
				MetaData->SetValue(NewProp_Hunger, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_Health, TEXT("Category"), TEXT("PlayerCondition"));
				MetaData->SetValue(NewProp_Health, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_CriticalHungerThreshold, TEXT("Category"), TEXT("PlayerCondition"));
				MetaData->SetValue(NewProp_CriticalHungerThreshold, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_IncrementHungerAmount, TEXT("Category"), TEXT("PlayerCondition"));
				MetaData->SetValue(NewProp_IncrementHungerAmount, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_IncrementHungerInterval, TEXT("Category"), TEXT("PlayerCondition"));
				MetaData->SetValue(NewProp_IncrementHungerInterval, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_TargetingSpeedModifier, TEXT("Category"), TEXT("Targeting"));
				MetaData->SetValue(NewProp_TargetingSpeedModifier, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_bIsTargeting, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_SprintingSpeedModifier, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_SprintingSpeedModifier, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_bIsJumping, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_bIsJumping, TEXT("ToolTip"), TEXT("Is Character currently performing a jump action . Resets on landed;"));
				MetaData->SetValue(NewProp_bWantsToRun, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_bWantsToRun, TEXT("ToolTip"), TEXT("character wants to run , checked during Tick to see if allowed"));
				MetaData->SetValue(NewProp_CameraComp, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraComp, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoomComp, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoomComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoomComp, TEXT("ModuleRelativePath"), TEXT("Public/Player/SCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASCharacter, 1446826006);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASCharacter(Z_Construct_UClass_ASCharacter, &ASCharacter::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

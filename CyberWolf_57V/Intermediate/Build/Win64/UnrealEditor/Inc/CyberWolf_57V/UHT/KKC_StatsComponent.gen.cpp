// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_StatsComponent() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_CharacterStatsData_NoRegister();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_StatsComponent();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_StatsComponent_NoRegister();
CYBERWOLF_57V_API UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnDeath__DelegateSignature();
CYBERWOLF_57V_API UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature();
CYBERWOLF_57V_API UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature();
CYBERWOLF_57V_API UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaDepleted__DelegateSignature();
CYBERWOLF_57V_API UScriptStruct* Z_Construct_UScriptStruct_FEnergyStat();
CYBERWOLF_57V_API UScriptStruct* Z_Construct_UScriptStruct_FHealthStat();
CYBERWOLF_57V_API UScriptStruct* Z_Construct_UScriptStruct_FStaminaStat();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHealthChanged ******************************************************
struct Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics
{
	struct _Script_CyberWolf_57V_eventOnHealthChanged_Parms
	{
		float Current;
		float Max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnHealthChanged constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnHealthChanged constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnHealthChanged Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CyberWolf_57V_eventOnHealthChanged_Parms, Current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CyberWolf_57V_eventOnHealthChanged_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnHealthChanged Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CyberWolf_57V, nullptr, "OnHealthChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::_Script_CyberWolf_57V_eventOnHealthChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::_Script_CyberWolf_57V_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float Current, float Max)
{
	struct _Script_CyberWolf_57V_eventOnHealthChanged_Parms
	{
		float Current;
		float Max;
	};
	_Script_CyberWolf_57V_eventOnHealthChanged_Parms Parms;
	Parms.Current=Current;
	Parms.Max=Max;
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealthChanged ********************************************************

// ********** Begin Delegate FOnStaminaChanged *****************************************************
struct Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics
{
	struct _Script_CyberWolf_57V_eventOnStaminaChanged_Parms
	{
		float Current;
		float Max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStaminaChanged constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStaminaChanged constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStaminaChanged Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CyberWolf_57V_eventOnStaminaChanged_Parms, Current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CyberWolf_57V_eventOnStaminaChanged_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnStaminaChanged Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CyberWolf_57V, nullptr, "OnStaminaChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::_Script_CyberWolf_57V_eventOnStaminaChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::_Script_CyberWolf_57V_eventOnStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStaminaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChanged, float Current, float Max)
{
	struct _Script_CyberWolf_57V_eventOnStaminaChanged_Parms
	{
		float Current;
		float Max;
	};
	_Script_CyberWolf_57V_eventOnStaminaChanged_Parms Parms;
	Parms.Current=Current;
	Parms.Max=Max;
	OnStaminaChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStaminaChanged *******************************************************

// ********** Begin Delegate FOnDeath **************************************************************
struct Z_Construct_UDelegateFunction_CyberWolf_57V_OnDeath__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDeath constinit property declarations ******************************
// ********** End Delegate FOnDeath constinit property declarations ********************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnDeath__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CyberWolf_57V, nullptr, "OnDeath__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CyberWolf_57V_OnDeath__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CyberWolf_57V_OnDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath)
{
	OnDeath.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnDeath ****************************************************************

// ********** Begin Delegate FOnStaminaDepleted ****************************************************
struct Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaDepleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStaminaDepleted constinit property declarations ********************
// ********** End Delegate FOnStaminaDepleted constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaDepleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CyberWolf_57V, nullptr, "OnStaminaDepleted__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaDepleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaDepleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaDepleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaDepleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStaminaDepleted_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaDepleted)
{
	OnStaminaDepleted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnStaminaDepleted ******************************************************

// ********** Begin ScriptStruct FHealthStat *******************************************************
struct Z_Construct_UScriptStruct_FHealthStat_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FHealthStat); }
	static inline consteval int16 GetStructAlignment() { return alignof(FHealthStat); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "Category", "HealthStat" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "HealthStat" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "HealthStat" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FHealthStat constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FHealthStat constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHealthStat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FHealthStat_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHealthStat;
class UScriptStruct* FHealthStat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHealthStat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHealthStat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHealthStat, (UObject*)Z_Construct_UPackage__Script_CyberWolf_57V(), TEXT("HealthStat"));
	}
	return Z_Registration_Info_UScriptStruct_FHealthStat.OuterSingleton;
	}

// ********** Begin ScriptStruct FHealthStat Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthStat_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHealthStat, Current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealthStat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHealthStat, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
void Z_Construct_UScriptStruct_FHealthStat_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((FHealthStat*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHealthStat_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHealthStat), &Z_Construct_UScriptStruct_FHealthStat_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHealthStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthStat_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthStat_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealthStat_Statics::NewProp_bIsDead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthStat_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FHealthStat Property Definitions ************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHealthStat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
	nullptr,
	&NewStructOps,
	"HealthStat",
	Z_Construct_UScriptStruct_FHealthStat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthStat_Statics::PropPointers),
	sizeof(FHealthStat),
	alignof(FHealthStat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthStat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHealthStat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHealthStat()
{
	if (!Z_Registration_Info_UScriptStruct_FHealthStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHealthStat.InnerSingleton, Z_Construct_UScriptStruct_FHealthStat_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FHealthStat.InnerSingleton);
}
// ********** End ScriptStruct FHealthStat *********************************************************

// ********** Begin ScriptStruct FStaminaStat ******************************************************
struct Z_Construct_UScriptStruct_FStaminaStat_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStaminaStat); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStaminaStat); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "Category", "StaminaStat" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "StaminaStat" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDepleted_MetaData[] = {
		{ "Category", "StaminaStat" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStaminaStat constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static void NewProp_bDepleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDepleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStaminaStat constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaminaStat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStaminaStat_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStaminaStat;
class UScriptStruct* FStaminaStat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStaminaStat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStaminaStat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaminaStat, (UObject*)Z_Construct_UPackage__Script_CyberWolf_57V(), TEXT("StaminaStat"));
	}
	return Z_Registration_Info_UScriptStruct_FStaminaStat.OuterSingleton;
	}

// ********** Begin ScriptStruct FStaminaStat Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaminaStat_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaminaStat, Current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaminaStat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaminaStat, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
void Z_Construct_UScriptStruct_FStaminaStat_Statics::NewProp_bDepleted_SetBit(void* Obj)
{
	((FStaminaStat*)Obj)->bDepleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaminaStat_Statics::NewProp_bDepleted = { "bDepleted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaminaStat), &Z_Construct_UScriptStruct_FStaminaStat_Statics::NewProp_bDepleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDepleted_MetaData), NewProp_bDepleted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaminaStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaminaStat_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaminaStat_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaminaStat_Statics::NewProp_bDepleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaminaStat_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStaminaStat Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaminaStat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
	nullptr,
	&NewStructOps,
	"StaminaStat",
	Z_Construct_UScriptStruct_FStaminaStat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaminaStat_Statics::PropPointers),
	sizeof(FStaminaStat),
	alignof(FStaminaStat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaminaStat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaminaStat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaminaStat()
{
	if (!Z_Registration_Info_UScriptStruct_FStaminaStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStaminaStat.InnerSingleton, Z_Construct_UScriptStruct_FStaminaStat_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStaminaStat.InnerSingleton);
}
// ********** End ScriptStruct FStaminaStat ********************************************************

// ********** Begin ScriptStruct FEnergyStat *******************************************************
struct Z_Construct_UScriptStruct_FEnergyStat_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FEnergyStat); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEnergyStat); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "Category", "EnergyStat" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "EnergyStat" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEnergyStat constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEnergyStat constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnergyStat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FEnergyStat_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEnergyStat;
class UScriptStruct* FEnergyStat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEnergyStat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEnergyStat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnergyStat, (UObject*)Z_Construct_UPackage__Script_CyberWolf_57V(), TEXT("EnergyStat"));
	}
	return Z_Registration_Info_UScriptStruct_FEnergyStat.OuterSingleton;
	}

// ********** Begin ScriptStruct FEnergyStat Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnergyStat_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnergyStat, Current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnergyStat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnergyStat, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnergyStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnergyStat_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnergyStat_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnergyStat_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FEnergyStat Property Definitions ************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnergyStat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
	nullptr,
	&NewStructOps,
	"EnergyStat",
	Z_Construct_UScriptStruct_FEnergyStat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnergyStat_Statics::PropPointers),
	sizeof(FEnergyStat),
	alignof(FEnergyStat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnergyStat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnergyStat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnergyStat()
{
	if (!Z_Registration_Info_UScriptStruct_FEnergyStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEnergyStat.InnerSingleton, Z_Construct_UScriptStruct_FEnergyStat_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEnergyStat.InnerSingleton);
}
// ********** End ScriptStruct FEnergyStat *********************************************************

// ********** Begin Class UKKC_StatsComponent Function ConsumeStamina ******************************
struct Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics
{
	struct KKC_StatsComponent_eventConsumeStamina_Parms
	{
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConsumeStamina constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConsumeStamina constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConsumeStamina Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_StatsComponent_eventConsumeStamina_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KKC_StatsComponent_eventConsumeStamina_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KKC_StatsComponent_eventConsumeStamina_Parms), &Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::PropPointers) < 2048);
// ********** End Function ConsumeStamina Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_StatsComponent, nullptr, "ConsumeStamina", 	Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::KKC_StatsComponent_eventConsumeStamina_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::KKC_StatsComponent_eventConsumeStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_StatsComponent::execConsumeStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConsumeStamina(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UKKC_StatsComponent Function ConsumeStamina ********************************

// ********** Begin Class UKKC_StatsComponent Function Depleted ************************************
struct Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics
{
	struct KKC_StatsComponent_eventDepleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Depleted constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Depleted constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Depleted Property Definitions *****************************************
void Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KKC_StatsComponent_eventDepleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KKC_StatsComponent_eventDepleted_Parms), &Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::PropPointers) < 2048);
// ********** End Function Depleted Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_StatsComponent, nullptr, "Depleted", 	Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::KKC_StatsComponent_eventDepleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::KKC_StatsComponent_eventDepleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_StatsComponent_Depleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_StatsComponent_Depleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_StatsComponent::execDepleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Depleted();
	P_NATIVE_END;
}
// ********** End Class UKKC_StatsComponent Function Depleted **************************************

// ********** Begin Class UKKC_StatsComponent Function GetHealthPercent ****************************
struct Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics
{
	struct KKC_StatsComponent_eventGetHealthPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----Getters------\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----Getters------" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetHealthPercent constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHealthPercent constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHealthPercent Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_StatsComponent_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::PropPointers) < 2048);
// ********** End Function GetHealthPercent Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_StatsComponent, nullptr, "GetHealthPercent", 	Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::KKC_StatsComponent_eventGetHealthPercent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::KKC_StatsComponent_eventGetHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_StatsComponent::execGetHealthPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
	P_NATIVE_END;
}
// ********** End Class UKKC_StatsComponent Function GetHealthPercent ******************************

// ********** Begin Class UKKC_StatsComponent Function GetStaminaPercent ***************************
struct Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics
{
	struct KKC_StatsComponent_eventGetStaminaPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStaminaPercent constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStaminaPercent constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStaminaPercent Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_StatsComponent_eventGetStaminaPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::PropPointers) < 2048);
// ********** End Function GetStaminaPercent Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_StatsComponent, nullptr, "GetStaminaPercent", 	Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::KKC_StatsComponent_eventGetStaminaPercent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::KKC_StatsComponent_eventGetStaminaPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_StatsComponent::execGetStaminaPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStaminaPercent();
	P_NATIVE_END;
}
// ********** End Class UKKC_StatsComponent Function GetStaminaPercent *****************************

// ********** Begin Class UKKC_StatsComponent Function Health **************************************
struct Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics
{
	struct KKC_StatsComponent_eventHealth_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Health constinit property declarations ********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Health constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Health Property Definitions *******************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_StatsComponent_eventHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::PropPointers) < 2048);
// ********** End Function Health Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_StatsComponent, nullptr, "Health", 	Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::KKC_StatsComponent_eventHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::KKC_StatsComponent_eventHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_StatsComponent_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_StatsComponent_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_StatsComponent::execHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Health(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UKKC_StatsComponent Function Health ****************************************

// ********** Begin Class UKKC_StatsComponent Function IsDead **************************************
struct Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics
{
	struct KKC_StatsComponent_eventIsDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDead constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDead constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDead Property Definitions *******************************************
void Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KKC_StatsComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KKC_StatsComponent_eventIsDead_Parms), &Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::PropPointers) < 2048);
// ********** End Function IsDead Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_StatsComponent, nullptr, "IsDead", 	Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::KKC_StatsComponent_eventIsDead_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::KKC_StatsComponent_eventIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_StatsComponent_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_StatsComponent_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_StatsComponent::execIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDead();
	P_NATIVE_END;
}
// ********** End Class UKKC_StatsComponent Function IsDead ****************************************

// ********** Begin Class UKKC_StatsComponent Function TakeDamage **********************************
struct Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics
{
	struct KKC_StatsComponent_eventTakeDamage_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TakeDamage constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TakeDamage constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TakeDamage Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_StatsComponent_eventTakeDamage_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::PropPointers) < 2048);
// ********** End Function TakeDamage Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_StatsComponent, nullptr, "TakeDamage", 	Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::KKC_StatsComponent_eventTakeDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::KKC_StatsComponent_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_StatsComponent::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UKKC_StatsComponent Function TakeDamage ************************************

// ********** Begin Class UKKC_StatsComponent ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_StatsComponent;
UClass* UKKC_StatsComponent::GetPrivateStaticClass()
{
	using TClass = UKKC_StatsComponent;
	if (!Z_Registration_Info_UClass_UKKC_StatsComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_StatsComponent"),
			Z_Registration_Info_UClass_UKKC_StatsComponent.InnerSingleton,
			StaticRegisterNativesUKKC_StatsComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UKKC_StatsComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_StatsComponent_NoRegister()
{
	return UKKC_StatsComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_StatsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsData_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --------public Delegates ---------\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--------public Delegates ---------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaDepleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_StatsComponent constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaDepleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKKC_StatsComponent constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConsumeStamina"), .Pointer = &UKKC_StatsComponent::execConsumeStamina },
		{ .NameUTF8 = UTF8TEXT("Depleted"), .Pointer = &UKKC_StatsComponent::execDepleted },
		{ .NameUTF8 = UTF8TEXT("GetHealthPercent"), .Pointer = &UKKC_StatsComponent::execGetHealthPercent },
		{ .NameUTF8 = UTF8TEXT("GetStaminaPercent"), .Pointer = &UKKC_StatsComponent::execGetStaminaPercent },
		{ .NameUTF8 = UTF8TEXT("Health"), .Pointer = &UKKC_StatsComponent::execHealth },
		{ .NameUTF8 = UTF8TEXT("IsDead"), .Pointer = &UKKC_StatsComponent::execIsDead },
		{ .NameUTF8 = UTF8TEXT("TakeDamage"), .Pointer = &UKKC_StatsComponent::execTakeDamage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKKC_StatsComponent_ConsumeStamina, "ConsumeStamina" }, // 903320106
		{ &Z_Construct_UFunction_UKKC_StatsComponent_Depleted, "Depleted" }, // 2513689313
		{ &Z_Construct_UFunction_UKKC_StatsComponent_GetHealthPercent, "GetHealthPercent" }, // 4240512521
		{ &Z_Construct_UFunction_UKKC_StatsComponent_GetStaminaPercent, "GetStaminaPercent" }, // 2454592903
		{ &Z_Construct_UFunction_UKKC_StatsComponent_Health, "Health" }, // 1326408783
		{ &Z_Construct_UFunction_UKKC_StatsComponent_IsDead, "IsDead" }, // 3162578311
		{ &Z_Construct_UFunction_UKKC_StatsComponent_TakeDamage, "TakeDamage" }, // 1499267924
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_StatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_StatsComponent_Statics

// ********** Begin Class UKKC_StatsComponent Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_StatsComponent_Statics::NewProp_StatsData = { "StatsData", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_StatsComponent, StatsData), Z_Construct_UClass_UKKC_CharacterStatsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsData_MetaData), NewProp_StatsData_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKKC_StatsComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_StatsComponent, OnHealthChanged), Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 220562228
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKKC_StatsComponent_Statics::NewProp_OnStaminaChanged = { "OnStaminaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_StatsComponent, OnStaminaChanged), Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaChanged_MetaData), NewProp_OnStaminaChanged_MetaData) }; // 654233149
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKKC_StatsComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_StatsComponent, OnDeath), Z_Construct_UDelegateFunction_CyberWolf_57V_OnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 3785674933
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKKC_StatsComponent_Statics::NewProp_OnStaminaDepleted = { "OnStaminaDepleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_StatsComponent, OnStaminaDepleted), Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaDepleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaDepleted_MetaData), NewProp_OnStaminaDepleted_MetaData) }; // 1834878842
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKKC_StatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_StatsComponent_Statics::NewProp_StatsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_StatsComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_StatsComponent_Statics::NewProp_OnStaminaChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_StatsComponent_Statics::NewProp_OnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_StatsComponent_Statics::NewProp_OnStaminaDepleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_StatsComponent_Statics::PropPointers) < 2048);
// ********** End Class UKKC_StatsComponent Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UKKC_StatsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_StatsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_StatsComponent_Statics::ClassParams = {
	&UKKC_StatsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKKC_StatsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_StatsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_StatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_StatsComponent_Statics::Class_MetaDataParams)
};
void UKKC_StatsComponent::StaticRegisterNativesUKKC_StatsComponent()
{
	UClass* Class = UKKC_StatsComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UKKC_StatsComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UKKC_StatsComponent()
{
	if (!Z_Registration_Info_UClass_UKKC_StatsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_StatsComponent.OuterSingleton, Z_Construct_UClass_UKKC_StatsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_StatsComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_StatsComponent);
UKKC_StatsComponent::~UKKC_StatsComponent() {}
// ********** End Class UKKC_StatsComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h__Script_CyberWolf_57V_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHealthStat::StaticStruct, Z_Construct_UScriptStruct_FHealthStat_Statics::NewStructOps, TEXT("HealthStat"),&Z_Registration_Info_UScriptStruct_FHealthStat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHealthStat), 4291613391U) },
		{ FStaminaStat::StaticStruct, Z_Construct_UScriptStruct_FStaminaStat_Statics::NewStructOps, TEXT("StaminaStat"),&Z_Registration_Info_UScriptStruct_FStaminaStat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaminaStat), 3548277072U) },
		{ FEnergyStat::StaticStruct, Z_Construct_UScriptStruct_FEnergyStat_Statics::NewStructOps, TEXT("EnergyStat"),&Z_Registration_Info_UScriptStruct_FEnergyStat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnergyStat), 2762683418U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_StatsComponent, UKKC_StatsComponent::StaticClass, TEXT("UKKC_StatsComponent"), &Z_Registration_Info_UClass_UKKC_StatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_StatsComponent), 2590727515U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h__Script_CyberWolf_57V_2561976306{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h__Script_CyberWolf_57V_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h__Script_CyberWolf_57V_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h__Script_CyberWolf_57V_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

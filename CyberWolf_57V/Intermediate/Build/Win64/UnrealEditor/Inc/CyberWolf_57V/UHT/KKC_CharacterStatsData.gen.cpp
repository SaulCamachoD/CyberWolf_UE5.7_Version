// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/KKC_CharacterStatsData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_CharacterStatsData() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_CharacterStatsData();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_CharacterStatsData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKKC_CharacterStatsData **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_CharacterStatsData;
UClass* UKKC_CharacterStatsData::GetPrivateStaticClass()
{
	using TClass = UKKC_CharacterStatsData;
	if (!Z_Registration_Info_UClass_UKKC_CharacterStatsData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_CharacterStatsData"),
			Z_Registration_Info_UClass_UKKC_CharacterStatsData.InnerSingleton,
			StaticRegisterNativesUKKC_CharacterStatsData,
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
	return Z_Registration_Info_UClass_UKKC_CharacterStatsData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_CharacterStatsData_NoRegister()
{
	return UKKC_CharacterStatsData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_CharacterStatsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/KKC_CharacterStatsData.h" },
		{ "ModuleRelativePath", "Public/Data/KKC_CharacterStatsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Data/KKC_CharacterStatsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegenHealthPerSecond_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Data/KKC_CharacterStatsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamine" },
		{ "ModuleRelativePath", "Public/Data/KKC_CharacterStatsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenDelay_MetaData[] = {
		{ "Category", "Stamine" },
		{ "ModuleRelativePath", "Public/Data/KKC_CharacterStatsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenPerSecond_MetaData[] = {
		{ "Category", "Stamine" },
		{ "ModuleRelativePath", "Public/Data/KKC_CharacterStatsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringStaminaCostPerSecond_MetaData[] = {
		{ "Category", "Stamine" },
		{ "ModuleRelativePath", "Public/Data/KKC_CharacterStatsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "Energy" },
		{ "ModuleRelativePath", "Public/Data/KKC_CharacterStatsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnergyRegenPerSecond_MetaData[] = {
		{ "Category", "Energy" },
		{ "ModuleRelativePath", "Public/Data/KKC_CharacterStatsData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_CharacterStatsData constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RegenHealthPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStaminaCostPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEnergy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnergyRegenPerSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKKC_CharacterStatsData constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_CharacterStatsData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_CharacterStatsData_Statics

// ********** Begin Class UKKC_CharacterStatsData Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CharacterStatsData, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_RegenHealthPerSecond = { "RegenHealthPerSecond", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CharacterStatsData, RegenHealthPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegenHealthPerSecond_MetaData), NewProp_RegenHealthPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CharacterStatsData, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_StaminaRegenDelay = { "StaminaRegenDelay", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CharacterStatsData, StaminaRegenDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenDelay_MetaData), NewProp_StaminaRegenDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_StaminaRegenPerSecond = { "StaminaRegenPerSecond", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CharacterStatsData, StaminaRegenPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenPerSecond_MetaData), NewProp_StaminaRegenPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_SpringStaminaCostPerSecond = { "SpringStaminaCostPerSecond", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CharacterStatsData, SpringStaminaCostPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringStaminaCostPerSecond_MetaData), NewProp_SpringStaminaCostPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CharacterStatsData, MaxEnergy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEnergy_MetaData), NewProp_MaxEnergy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_EnergyRegenPerSecond = { "EnergyRegenPerSecond", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CharacterStatsData, EnergyRegenPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnergyRegenPerSecond_MetaData), NewProp_EnergyRegenPerSecond_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKKC_CharacterStatsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_RegenHealthPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_StaminaRegenDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_StaminaRegenPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_SpringStaminaCostPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_MaxEnergy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CharacterStatsData_Statics::NewProp_EnergyRegenPerSecond,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CharacterStatsData_Statics::PropPointers) < 2048);
// ********** End Class UKKC_CharacterStatsData Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UKKC_CharacterStatsData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CharacterStatsData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_CharacterStatsData_Statics::ClassParams = {
	&UKKC_CharacterStatsData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKKC_CharacterStatsData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CharacterStatsData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CharacterStatsData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_CharacterStatsData_Statics::Class_MetaDataParams)
};
void UKKC_CharacterStatsData::StaticRegisterNativesUKKC_CharacterStatsData()
{
}
UClass* Z_Construct_UClass_UKKC_CharacterStatsData()
{
	if (!Z_Registration_Info_UClass_UKKC_CharacterStatsData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_CharacterStatsData.OuterSingleton, Z_Construct_UClass_UKKC_CharacterStatsData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_CharacterStatsData.OuterSingleton;
}
UKKC_CharacterStatsData::UKKC_CharacterStatsData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_CharacterStatsData);
UKKC_CharacterStatsData::~UKKC_CharacterStatsData() {}
// ********** End Class UKKC_CharacterStatsData ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CharacterStatsData_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_CharacterStatsData, UKKC_CharacterStatsData::StaticClass, TEXT("UKKC_CharacterStatsData"), &Z_Registration_Info_UClass_UKKC_CharacterStatsData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_CharacterStatsData), 3743734932U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CharacterStatsData_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CharacterStatsData_h__Script_CyberWolf_57V_3561243279{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CharacterStatsData_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CharacterStatsData_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

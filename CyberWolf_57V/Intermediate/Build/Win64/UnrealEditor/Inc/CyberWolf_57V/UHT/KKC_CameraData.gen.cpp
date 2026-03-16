// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/KKC_CameraData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_CameraData() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_CameraData();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_CameraData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKKC_CameraData **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_CameraData;
UClass* UKKC_CameraData::GetPrivateStaticClass()
{
	using TClass = UKKC_CameraData;
	if (!Z_Registration_Info_UClass_UKKC_CameraData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_CameraData"),
			Z_Registration_Info_UClass_UKKC_CameraData.InnerSingleton,
			StaticRegisterNativesUKKC_CameraData,
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
	return Z_Registration_Info_UClass_UKKC_CameraData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_CameraData_NoRegister()
{
	return UKKC_CameraData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_CameraData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Data/KKC_CameraData.h" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityX_MetaData[] = {
		{ "Category", "Sensitivity" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityY_MetaData[] = {
		{ "Category", "Sensitivity" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadSensitivityX_MetaData[] = {
		{ "Category", "Sensitivity" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[] = {
		{ "Category", "Clamp" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[] = {
		{ "Category", "Clamp" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmLengthDefault_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmLengthAiming_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmLengthFlight_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagSpeed_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVDefault_MetaData[] = {
		{ "Category", "FOV" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVAiming_MetaData[] = {
		{ "Category", "FOV" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVSprint_MetaData[] = {
		{ "Category", "FOV" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVInterpSpeed_MetaData[] = {
		{ "Category", "FOV" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_CameraData constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivityX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivityY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadSensitivityX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLengthDefault;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLengthAiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLengthFlight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVDefault;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVAiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVSprint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKKC_CameraData constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_CameraData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_CameraData_Statics

// ********** Begin Class UKKC_CameraData Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_MouseSensitivityX = { "MouseSensitivityX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, MouseSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivityX_MetaData), NewProp_MouseSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_MouseSensitivityY = { "MouseSensitivityY", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, MouseSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivityY_MetaData), NewProp_MouseSensitivityY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_GamepadSensitivityX = { "GamepadSensitivityX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, GamepadSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadSensitivityX_MetaData), NewProp_GamepadSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, PitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMin_MetaData), NewProp_PitchMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, PitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMax_MetaData), NewProp_PitchMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthDefault = { "ArmLengthDefault", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, ArmLengthDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmLengthDefault_MetaData), NewProp_ArmLengthDefault_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthAiming = { "ArmLengthAiming", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, ArmLengthAiming), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmLengthAiming_MetaData), NewProp_ArmLengthAiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthFlight = { "ArmLengthFlight", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, ArmLengthFlight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmLengthFlight_MetaData), NewProp_ArmLengthFlight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_CameraLagSpeed = { "CameraLagSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, CameraLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagSpeed_MetaData), NewProp_CameraLagSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_FOVDefault = { "FOVDefault", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, FOVDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVDefault_MetaData), NewProp_FOVDefault_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_FOVAiming = { "FOVAiming", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, FOVAiming), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVAiming_MetaData), NewProp_FOVAiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_FOVSprint = { "FOVSprint", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, FOVSprint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVSprint_MetaData), NewProp_FOVSprint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_FOVInterpSpeed = { "FOVInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, FOVInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVInterpSpeed_MetaData), NewProp_FOVInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKKC_CameraData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_MouseSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_MouseSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_GamepadSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_PitchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_PitchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthFlight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_CameraLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_FOVDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_FOVAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_FOVSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_FOVInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CameraData_Statics::PropPointers) < 2048);
// ********** End Class UKKC_CameraData Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UKKC_CameraData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CameraData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_CameraData_Statics::ClassParams = {
	&UKKC_CameraData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKKC_CameraData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CameraData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CameraData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_CameraData_Statics::Class_MetaDataParams)
};
void UKKC_CameraData::StaticRegisterNativesUKKC_CameraData()
{
}
UClass* Z_Construct_UClass_UKKC_CameraData()
{
	if (!Z_Registration_Info_UClass_UKKC_CameraData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_CameraData.OuterSingleton, Z_Construct_UClass_UKKC_CameraData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_CameraData.OuterSingleton;
}
UKKC_CameraData::UKKC_CameraData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_CameraData);
UKKC_CameraData::~UKKC_CameraData() {}
// ********** End Class UKKC_CameraData ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CameraData_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_CameraData, UKKC_CameraData::StaticClass, TEXT("UKKC_CameraData"), &Z_Registration_Info_UClass_UKKC_CameraData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_CameraData), 3667302802U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CameraData_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CameraData_h__Script_CyberWolf_57V_2186613315{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CameraData_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CameraData_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

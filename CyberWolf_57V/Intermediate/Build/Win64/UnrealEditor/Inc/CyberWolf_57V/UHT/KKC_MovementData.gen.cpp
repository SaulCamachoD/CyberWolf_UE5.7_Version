// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/KKC_MovementData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_MovementData() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_MovementData();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_MovementData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKKC_MovementData ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_MovementData;
UClass* UKKC_MovementData::GetPrivateStaticClass()
{
	using TClass = UKKC_MovementData;
	if (!Z_Registration_Info_UClass_UKKC_MovementData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_MovementData"),
			Z_Registration_Info_UClass_UKKC_MovementData.InnerSingleton,
			StaticRegisterNativesUKKC_MovementData,
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
	return Z_Registration_Info_UClass_UKKC_MovementData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_MovementData_NoRegister()
{
	return UKKC_MovementData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_MovementData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Data/KKC_MovementData.h" },
		{ "ModuleRelativePath", "Public/Data/KKC_MovementData.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Data/KKC_MovementData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Data/KKC_MovementData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintStaminaCostPerSecond_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Data/KKC_MovementData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpZVelocity_MetaData[] = {
		{ "Category", "Air" },
		{ "ModuleRelativePath", "Public/Data/KKC_MovementData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoyoteTimeDuration_MetaData[] = {
		{ "Category", "Air" },
		{ "ModuleRelativePath", "Public/Data/KKC_MovementData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxJumpHoldTime_MetaData[] = {
		{ "Category", "Air" },
		{ "ModuleRelativePath", "Public/Data/KKC_MovementData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlightSpeed_MetaData[] = {
		{ "Category", "Flight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// variable jump height\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/KKC_MovementData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variable jump height" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_MovementData constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintStaminaCostPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpZVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoyoteTimeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxJumpHoldTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlightSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKKC_MovementData constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_MovementData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_MovementData_Statics

// ********** Begin Class UKKC_MovementData Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_MovementData, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_MovementData, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_SprintStaminaCostPerSecond = { "SprintStaminaCostPerSecond", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_MovementData, SprintStaminaCostPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintStaminaCostPerSecond_MetaData), NewProp_SprintStaminaCostPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_JumpZVelocity = { "JumpZVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_MovementData, JumpZVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpZVelocity_MetaData), NewProp_JumpZVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_CoyoteTimeDuration = { "CoyoteTimeDuration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_MovementData, CoyoteTimeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoyoteTimeDuration_MetaData), NewProp_CoyoteTimeDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_MaxJumpHoldTime = { "MaxJumpHoldTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_MovementData, MaxJumpHoldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxJumpHoldTime_MetaData), NewProp_MaxJumpHoldTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_FlightSpeed = { "FlightSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_MovementData, FlightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlightSpeed_MetaData), NewProp_FlightSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKKC_MovementData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_SprintStaminaCostPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_JumpZVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_CoyoteTimeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_MaxJumpHoldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_MovementData_Statics::NewProp_FlightSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_MovementData_Statics::PropPointers) < 2048);
// ********** End Class UKKC_MovementData Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UKKC_MovementData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_MovementData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_MovementData_Statics::ClassParams = {
	&UKKC_MovementData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKKC_MovementData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_MovementData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_MovementData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_MovementData_Statics::Class_MetaDataParams)
};
void UKKC_MovementData::StaticRegisterNativesUKKC_MovementData()
{
}
UClass* Z_Construct_UClass_UKKC_MovementData()
{
	if (!Z_Registration_Info_UClass_UKKC_MovementData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_MovementData.OuterSingleton, Z_Construct_UClass_UKKC_MovementData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_MovementData.OuterSingleton;
}
UKKC_MovementData::UKKC_MovementData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_MovementData);
UKKC_MovementData::~UKKC_MovementData() {}
// ********** End Class UKKC_MovementData **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_MovementData_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_MovementData, UKKC_MovementData::StaticClass, TEXT("UKKC_MovementData"), &Z_Registration_Info_UClass_UKKC_MovementData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_MovementData), 2829889285U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_MovementData_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_MovementData_h__Script_CyberWolf_57V_853900524{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_MovementData_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_MovementData_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

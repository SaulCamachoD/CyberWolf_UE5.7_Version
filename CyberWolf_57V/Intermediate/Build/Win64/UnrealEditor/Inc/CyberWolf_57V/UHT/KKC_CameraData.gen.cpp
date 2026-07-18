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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPitch_MetaData[] = {
		{ "Category", "Isometric" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Encuadre isom\xc3\xa9trico fijo ---\n// Pitch: -50\xc2\xb0 es el sweet spot moderno (The Ascent, Hades).\n// -30\xc2\xb0 se siente \"detr\xc3\xa1s del hombro\", -60\xc2\xb0 muy cenital. Prueba entre -45 y -55.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Encuadre isom\xc3\xa9trico fijo ---\nPitch: -50\xc2\xb0 es el sweet spot moderno (The Ascent, Hades).\n-30\xc2\xb0 se siente \"detr\xc3\xa1s del hombro\", -60\xc2\xb0 muy cenital. Prueba entre -45 y -55." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraYaw_MetaData[] = {
		{ "Category", "Isometric" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Yaw 45\xc2\xb0 = diagonal cl\xc3\xa1sica isom\xc3\xa9trica (las paredes se ven en \xc3\xa1ngulo)\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Yaw 45\xc2\xb0 = diagonal cl\xc3\xa1sica isom\xc3\xa9trica (las paredes se ven en \xc3\xa1ngulo)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVDefault_MetaData[] = {
		{ "Category", "Isometric" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FOV bajo + brazo largo = compresi\xc3\xb3n telefoto que imita la proyecci\xc3\xb3n\n// isom\xc3\xa9trica real (menos distorsi\xc3\xb3n de perspectiva en los bordes)\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOV bajo + brazo largo = compresi\xc3\xb3n telefoto que imita la proyecci\xc3\xb3n\nisom\xc3\xa9trica real (menos distorsi\xc3\xb3n de perspectiva en los bordes)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffsetRight_MetaData[] = {
		{ "Category", "Isometric" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmLengthDefault_MetaData[] = {
		{ "Category", "SpringArm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Longitudes del brazo por modo ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Longitudes del brazo por modo ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmLengthOlfato_MetaData[] = {
		{ "Category", "SpringArm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Modo olfato: la c\xc3\xa1mara se aleja para leer los rastros en el mapa\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modo olfato: la c\xc3\xa1mara se aleja para leer los rastros en el mapa" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmLengthCaza_MetaData[] = {
		{ "Category", "SpringArm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instinto de caza: se acerca para la intensidad del combate\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instinto de caza: se acerca para la intensidad del combate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagSpeed_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Interp" },
		{ "ModuleRelativePath", "Public/Data/KKC_CameraData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_CameraData constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVDefault;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenOffsetRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLengthDefault;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLengthOlfato;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLengthCaza;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKKC_CameraData constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_CameraData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_CameraData_Statics

// ********** Begin Class UKKC_CameraData Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_CameraPitch = { "CameraPitch", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, CameraPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPitch_MetaData), NewProp_CameraPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_CameraYaw = { "CameraYaw", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, CameraYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraYaw_MetaData), NewProp_CameraYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_FOVDefault = { "FOVDefault", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, FOVDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVDefault_MetaData), NewProp_FOVDefault_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ScreenOffsetRight = { "ScreenOffsetRight", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, ScreenOffsetRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenOffsetRight_MetaData), NewProp_ScreenOffsetRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthDefault = { "ArmLengthDefault", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, ArmLengthDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmLengthDefault_MetaData), NewProp_ArmLengthDefault_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthOlfato = { "ArmLengthOlfato", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, ArmLengthOlfato), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmLengthOlfato_MetaData), NewProp_ArmLengthOlfato_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthCaza = { "ArmLengthCaza", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, ArmLengthCaza), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmLengthCaza_MetaData), NewProp_ArmLengthCaza_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_CameraLagSpeed = { "CameraLagSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, CameraLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagSpeed_MetaData), NewProp_CameraLagSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraData, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKKC_CameraData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_CameraPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_CameraYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_FOVDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ScreenOffsetRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthOlfato,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_ArmLengthCaza,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_CameraLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraData_Statics::NewProp_InterpSpeed,
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
struct Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CameraData_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_CameraData, UKKC_CameraData::StaticClass, TEXT("UKKC_CameraData"), &Z_Registration_Info_UClass_UKKC_CameraData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_CameraData), 2866917311U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CameraData_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CameraData_h__Script_CyberWolf_57V_850224635{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CameraData_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_CameraData_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_CameraComponents() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_CameraComponents();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_CameraComponents_NoRegister();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_CameraData_NoRegister();
CYBERWOLF_57V_API UEnum* Z_Construct_UEnum_CyberWolf_57V_ECameraMode();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECameraMode ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraMode;
static UEnum* ECameraMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CyberWolf_57V_ECameraMode, (UObject*)Z_Construct_UPackage__Script_CyberWolf_57V(), TEXT("ECameraMode"));
	}
	return Z_Registration_Info_UEnum_ECameraMode.OuterSingleton;
}
template<> CYBERWOLF_57V_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraMode>()
{
	return ECameraMode_StaticEnum();
}
struct Z_Construct_UEnum_CyberWolf_57V_ECameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aiming.Name", "ECameraMode::Aiming" },
		{ "BlueprintType", "true" },
		{ "Cutscene.Name", "ECameraMode::Cutscene" },
		{ "Flight.Name", "ECameraMode::Flight" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h" },
		{ "ThirdPerson.Name", "ECameraMode::ThirdPerson" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraMode::ThirdPerson", (int64)ECameraMode::ThirdPerson },
		{ "ECameraMode::Aiming", (int64)ECameraMode::Aiming },
		{ "ECameraMode::Flight", (int64)ECameraMode::Flight },
		{ "ECameraMode::Cutscene", (int64)ECameraMode::Cutscene },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CyberWolf_57V_ECameraMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CyberWolf_57V_ECameraMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CyberWolf_57V,
	nullptr,
	"ECameraMode",
	"ECameraMode",
	Z_Construct_UEnum_CyberWolf_57V_ECameraMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CyberWolf_57V_ECameraMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CyberWolf_57V_ECameraMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CyberWolf_57V_ECameraMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CyberWolf_57V_ECameraMode()
{
	if (!Z_Registration_Info_UEnum_ECameraMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraMode.InnerSingleton, Z_Construct_UEnum_CyberWolf_57V_ECameraMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraMode.InnerSingleton;
}
// ********** End Enum ECameraMode *****************************************************************

// ********** Begin Class UKKC_CameraComponents Function SetCameraMode *****************************
struct Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics
{
	struct KKC_CameraComponents_eventSetCameraMode_Parms
	{
		ECameraMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Llamado por otros sistemas (AimComponent, FlightComponent, etc.)\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Llamado por otros sistemas (AimComponent, FlightComponent, etc.)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetCameraMode constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCameraMode constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCameraMode Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_CameraComponents_eventSetCameraMode_Parms, NewMode), Z_Construct_UEnum_CyberWolf_57V_ECameraMode, METADATA_PARAMS(0, nullptr) }; // 1965700464
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::PropPointers) < 2048);
// ********** End Function SetCameraMode Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_CameraComponents, nullptr, "SetCameraMode", 	Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::KKC_CameraComponents_eventSetCameraMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::KKC_CameraComponents_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_CameraComponents::execSetCameraMode)
{
	P_GET_ENUM(ECameraMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(ECameraMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// ********** End Class UKKC_CameraComponents Function SetCameraMode *******************************

// ********** Begin Class UKKC_CameraComponents ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_CameraComponents;
UClass* UKKC_CameraComponents::GetPrivateStaticClass()
{
	using TClass = UKKC_CameraComponents;
	if (!Z_Registration_Info_UClass_UKKC_CameraComponents.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_CameraComponents"),
			Z_Registration_Info_UClass_UKKC_CameraComponents.InnerSingleton,
			StaticRegisterNativesUKKC_CameraComponents,
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
	return Z_Registration_Info_UClass_UKKC_CameraComponents.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_CameraComponents_NoRegister()
{
	return UKKC_CameraComponents::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_CameraComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraData_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_CameraComponents constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKKC_CameraComponents constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetCameraMode"), .Pointer = &UKKC_CameraComponents::execSetCameraMode },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKKC_CameraComponents_SetCameraMode, "SetCameraMode" }, // 3863012213
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_CameraComponents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_CameraComponents_Statics

// ********** Begin Class UKKC_CameraComponents Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_CameraComponents_Statics::NewProp_CameraData = { "CameraData", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraComponents, CameraData), Z_Construct_UClass_UKKC_CameraData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraData_MetaData), NewProp_CameraData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_CameraComponents_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraComponents, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_CameraComponents_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_CameraComponents, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKKC_CameraComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraComponents_Statics::NewProp_CameraData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraComponents_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_CameraComponents_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CameraComponents_Statics::PropPointers) < 2048);
// ********** End Class UKKC_CameraComponents Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UKKC_CameraComponents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CameraComponents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_CameraComponents_Statics::ClassParams = {
	&UKKC_CameraComponents::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKKC_CameraComponents_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CameraComponents_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_CameraComponents_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_CameraComponents_Statics::Class_MetaDataParams)
};
void UKKC_CameraComponents::StaticRegisterNativesUKKC_CameraComponents()
{
	UClass* Class = UKKC_CameraComponents::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UKKC_CameraComponents_Statics::Funcs));
}
UClass* Z_Construct_UClass_UKKC_CameraComponents()
{
	if (!Z_Registration_Info_UClass_UKKC_CameraComponents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_CameraComponents.OuterSingleton, Z_Construct_UClass_UKKC_CameraComponents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_CameraComponents.OuterSingleton;
}
UKKC_CameraComponents::UKKC_CameraComponents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_CameraComponents);
UKKC_CameraComponents::~UKKC_CameraComponents() {}
// ********** End Class UKKC_CameraComponents ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h__Script_CyberWolf_57V_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraMode_StaticEnum, TEXT("ECameraMode"), &Z_Registration_Info_UEnum_ECameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1965700464U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_CameraComponents, UKKC_CameraComponents::StaticClass, TEXT("UKKC_CameraComponents"), &Z_Registration_Info_UClass_UKKC_CameraComponents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_CameraComponents), 780831467U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h__Script_CyberWolf_57V_373566954{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h__Script_CyberWolf_57V_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h__Script_CyberWolf_57V_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/KKC_PlayerHud.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_PlayerHud() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_AKKC_PlayerHud();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_AKKC_PlayerHud_NoRegister();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_PlayerStatsWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKKC_PlayerHud Function OnHealthChanged **********************************
struct Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics
{
	struct KKC_PlayerHud_eventOnHealthChanged_Parms
	{
		float Current;
		float Max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Callbacks para los delegates del StatsComponent\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerHud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callbacks para los delegates del StatsComponent" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnHealthChanged constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnHealthChanged constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnHealthChanged Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_PlayerHud_eventOnHealthChanged_Parms, Current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_PlayerHud_eventOnHealthChanged_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::PropPointers) < 2048);
// ********** End Function OnHealthChanged Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKKC_PlayerHud, nullptr, "OnHealthChanged", 	Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::KKC_PlayerHud_eventOnHealthChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::KKC_PlayerHud_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKKC_PlayerHud::execOnHealthChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Current);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHealthChanged(Z_Param_Current,Z_Param_Max);
	P_NATIVE_END;
}
// ********** End Class AKKC_PlayerHud Function OnHealthChanged ************************************

// ********** Begin Class AKKC_PlayerHud Function OnStaminaChanged *********************************
struct Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics
{
	struct KKC_PlayerHud_eventOnStaminaChanged_Parms
	{
		float Current;
		float Max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerHud.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStaminaChanged constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnStaminaChanged constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnStaminaChanged Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_PlayerHud_eventOnStaminaChanged_Parms, Current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_PlayerHud_eventOnStaminaChanged_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::PropPointers) < 2048);
// ********** End Function OnStaminaChanged Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKKC_PlayerHud, nullptr, "OnStaminaChanged", 	Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::KKC_PlayerHud_eventOnStaminaChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::KKC_PlayerHud_eventOnStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKKC_PlayerHud::execOnStaminaChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Current);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStaminaChanged(Z_Param_Current,Z_Param_Max);
	P_NATIVE_END;
}
// ********** End Class AKKC_PlayerHud Function OnStaminaChanged ***********************************

// ********** Begin Class AKKC_PlayerHud Function OnStaminaDepleted ********************************
struct Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaDepleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerHud.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStaminaDepleted constinit property declarations *********************
// ********** End Function OnStaminaDepleted constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaDepleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKKC_PlayerHud, nullptr, "OnStaminaDepleted", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaDepleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaDepleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaDepleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaDepleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKKC_PlayerHud::execOnStaminaDepleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStaminaDepleted();
	P_NATIVE_END;
}
// ********** End Class AKKC_PlayerHud Function OnStaminaDepleted **********************************

// ********** Begin Class AKKC_PlayerHud ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AKKC_PlayerHud;
UClass* AKKC_PlayerHud::GetPrivateStaticClass()
{
	using TClass = AKKC_PlayerHud;
	if (!Z_Registration_Info_UClass_AKKC_PlayerHud.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_PlayerHud"),
			Z_Registration_Info_UClass_AKKC_PlayerHud.InnerSingleton,
			StaticRegisterNativesAKKC_PlayerHud,
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
	return Z_Registration_Info_UClass_AKKC_PlayerHud.InnerSingleton;
}
UClass* Z_Construct_UClass_AKKC_PlayerHud_NoRegister()
{
	return AKKC_PlayerHud::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKKC_PlayerHud_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/KKC_PlayerHud.h" },
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStatsWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Asignas la clase Blueprint (WBP_PlayerStats) en el editor\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerHud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asignas la clase Blueprint (WBP_PlayerStats) en el editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerHud.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AKKC_PlayerHud constinit property declarations ***************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerStatsWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AKKC_PlayerHud constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnHealthChanged"), .Pointer = &AKKC_PlayerHud::execOnHealthChanged },
		{ .NameUTF8 = UTF8TEXT("OnStaminaChanged"), .Pointer = &AKKC_PlayerHud::execOnStaminaChanged },
		{ .NameUTF8 = UTF8TEXT("OnStaminaDepleted"), .Pointer = &AKKC_PlayerHud::execOnStaminaDepleted },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKKC_PlayerHud_OnHealthChanged, "OnHealthChanged" }, // 4000582505
		{ &Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaChanged, "OnStaminaChanged" }, // 3680334790
		{ &Z_Construct_UFunction_AKKC_PlayerHud_OnStaminaDepleted, "OnStaminaDepleted" }, // 918508713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKKC_PlayerHud>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AKKC_PlayerHud_Statics

// ********** Begin Class AKKC_PlayerHud Property Definitions **************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKKC_PlayerHud_Statics::NewProp_PlayerStatsWidgetClass = { "PlayerStatsWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_PlayerHud, PlayerStatsWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UKKC_PlayerStatsWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStatsWidgetClass_MetaData), NewProp_PlayerStatsWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_PlayerHud_Statics::NewProp_StatsWidget = { "StatsWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_PlayerHud, StatsWidget), Z_Construct_UClass_UKKC_PlayerStatsWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsWidget_MetaData), NewProp_StatsWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKKC_PlayerHud_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_PlayerHud_Statics::NewProp_PlayerStatsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_PlayerHud_Statics::NewProp_StatsWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_PlayerHud_Statics::PropPointers) < 2048);
// ********** End Class AKKC_PlayerHud Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_AKKC_PlayerHud_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_PlayerHud_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKKC_PlayerHud_Statics::ClassParams = {
	&AKKC_PlayerHud::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AKKC_PlayerHud_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_PlayerHud_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_PlayerHud_Statics::Class_MetaDataParams), Z_Construct_UClass_AKKC_PlayerHud_Statics::Class_MetaDataParams)
};
void AKKC_PlayerHud::StaticRegisterNativesAKKC_PlayerHud()
{
	UClass* Class = AKKC_PlayerHud::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AKKC_PlayerHud_Statics::Funcs));
}
UClass* Z_Construct_UClass_AKKC_PlayerHud()
{
	if (!Z_Registration_Info_UClass_AKKC_PlayerHud.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKKC_PlayerHud.OuterSingleton, Z_Construct_UClass_AKKC_PlayerHud_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKKC_PlayerHud.OuterSingleton;
}
AKKC_PlayerHud::AKKC_PlayerHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AKKC_PlayerHud);
AKKC_PlayerHud::~AKKC_PlayerHud() {}
// ********** End Class AKKC_PlayerHud *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKKC_PlayerHud, AKKC_PlayerHud::StaticClass, TEXT("AKKC_PlayerHud"), &Z_Registration_Info_UClass_AKKC_PlayerHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKKC_PlayerHud), 1349342786U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h__Script_CyberWolf_57V_1523958463{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

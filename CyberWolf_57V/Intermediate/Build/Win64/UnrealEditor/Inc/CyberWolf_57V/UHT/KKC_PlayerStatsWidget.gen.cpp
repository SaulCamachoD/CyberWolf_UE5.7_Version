// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/KKC_PlayerStatsWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_PlayerStatsWidget() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_PlayerStatsWidget();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_PlayerStatsWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKKC_PlayerStatsWidget Function PlayStaminaDepletedEffect ****************
struct Z_Construct_UFunction_UKKC_PlayerStatsWidget_PlayStaminaDepletedEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Llamado cuando stamina llega a 0 \xe2\x80\x94 para animaci\xc3\xb3n de depletion\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerStatsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Llamado cuando stamina llega a 0 \xe2\x80\x94 para animaci\xc3\xb3n de depletion" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayStaminaDepletedEffect constinit property declarations *************
// ********** End Function PlayStaminaDepletedEffect constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_PlayerStatsWidget_PlayStaminaDepletedEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_PlayerStatsWidget, nullptr, "PlayStaminaDepletedEffect", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_PlayerStatsWidget_PlayStaminaDepletedEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_PlayerStatsWidget_PlayStaminaDepletedEffect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UKKC_PlayerStatsWidget_PlayStaminaDepletedEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_PlayerStatsWidget_PlayStaminaDepletedEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_PlayerStatsWidget::execPlayStaminaDepletedEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayStaminaDepletedEffect();
	P_NATIVE_END;
}
// ********** End Class UKKC_PlayerStatsWidget Function PlayStaminaDepletedEffect ******************

// ********** Begin Class UKKC_PlayerStatsWidget Function UpdateHealth *****************************
struct Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics
{
	struct KKC_PlayerStatsWidget_eventUpdateHealth_Parms
	{
		float Current;
		float Max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Llamados por el HUD cuando llegan los delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerStatsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Llamados por el HUD cuando llegan los delegates" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateHealth constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateHealth constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateHealth Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_PlayerStatsWidget_eventUpdateHealth_Parms, Current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_PlayerStatsWidget_eventUpdateHealth_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::PropPointers) < 2048);
// ********** End Function UpdateHealth Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_PlayerStatsWidget, nullptr, "UpdateHealth", 	Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::KKC_PlayerStatsWidget_eventUpdateHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::KKC_PlayerStatsWidget_eventUpdateHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_PlayerStatsWidget::execUpdateHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Current);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHealth(Z_Param_Current,Z_Param_Max);
	P_NATIVE_END;
}
// ********** End Class UKKC_PlayerStatsWidget Function UpdateHealth *******************************

// ********** Begin Class UKKC_PlayerStatsWidget Function UpdateStamina ****************************
struct Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics
{
	struct KKC_PlayerStatsWidget_eventUpdateStamina_Parms
	{
		float Current;
		float Max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerStatsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateStamina constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateStamina constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateStamina Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_PlayerStatsWidget_eventUpdateStamina_Parms, Current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_PlayerStatsWidget_eventUpdateStamina_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::PropPointers) < 2048);
// ********** End Function UpdateStamina Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_PlayerStatsWidget, nullptr, "UpdateStamina", 	Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::KKC_PlayerStatsWidget_eventUpdateStamina_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::KKC_PlayerStatsWidget_eventUpdateStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_PlayerStatsWidget::execUpdateStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Current);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateStamina(Z_Param_Current,Z_Param_Max);
	P_NATIVE_END;
}
// ********** End Class UKKC_PlayerStatsWidget Function UpdateStamina ******************************

// ********** Begin Class UKKC_PlayerStatsWidget ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_PlayerStatsWidget;
UClass* UKKC_PlayerStatsWidget::GetPrivateStaticClass()
{
	using TClass = UKKC_PlayerStatsWidget;
	if (!Z_Registration_Info_UClass_UKKC_PlayerStatsWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_PlayerStatsWidget"),
			Z_Registration_Info_UClass_UKKC_PlayerStatsWidget.InnerSingleton,
			StaticRegisterNativesUKKC_PlayerStatsWidget,
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
	return Z_Registration_Info_UClass_UKKC_PlayerStatsWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_PlayerStatsWidget_NoRegister()
{
	return UKKC_PlayerStatsWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/KKC_PlayerStatsWidget.h" },
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerStatsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Los nombres deben coincidir EXACTAMENTE con los nombres\n// de los widgets en el Blueprint (WBP_PlayerStats)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerStatsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Los nombres deben coincidir EXACTAMENTE con los nombres\nde los widgets en el Blueprint (WBP_PlayerStats)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerStatsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[] = {
		{ "BindWidgetOptional", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Opcional \xe2\x80\x94 texto con el valor num\xc3\xa9rico\n// meta=(BindWidgetOptional) no crashea si no existe en el BP\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerStatsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Opcional \xe2\x80\x94 texto con el valor num\xc3\xa9rico\nmeta=(BindWidgetOptional) no crashea si no existe en el BP" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerStatsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDepletedAnim_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animaciones definidas en el Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerStatsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animaciones definidas en el Blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthLowAnim_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "ModuleRelativePath", "Public/UI/KKC_PlayerStatsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_PlayerStatsWidget constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaDepletedAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthLowAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKKC_PlayerStatsWidget constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PlayStaminaDepletedEffect"), .Pointer = &UKKC_PlayerStatsWidget::execPlayStaminaDepletedEffect },
		{ .NameUTF8 = UTF8TEXT("UpdateHealth"), .Pointer = &UKKC_PlayerStatsWidget::execUpdateHealth },
		{ .NameUTF8 = UTF8TEXT("UpdateStamina"), .Pointer = &UKKC_PlayerStatsWidget::execUpdateStamina },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKKC_PlayerStatsWidget_PlayStaminaDepletedEffect, "PlayStaminaDepletedEffect" }, // 1270268009
		{ &Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateHealth, "UpdateHealth" }, // 4265389847
		{ &Z_Construct_UFunction_UKKC_PlayerStatsWidget_UpdateStamina, "UpdateStamina" }, // 3521236046
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_PlayerStatsWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics

// ********** Begin Class UKKC_PlayerStatsWidget Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_PlayerStatsWidget, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_StaminaBar = { "StaminaBar", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_PlayerStatsWidget, StaminaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaBar_MetaData), NewProp_StaminaBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_PlayerStatsWidget, HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthText_MetaData), NewProp_HealthText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_StaminaText = { "StaminaText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_PlayerStatsWidget, StaminaText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaText_MetaData), NewProp_StaminaText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_StaminaDepletedAnim = { "StaminaDepletedAnim", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_PlayerStatsWidget, StaminaDepletedAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaDepletedAnim_MetaData), NewProp_StaminaDepletedAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_HealthLowAnim = { "HealthLowAnim", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_PlayerStatsWidget, HealthLowAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthLowAnim_MetaData), NewProp_HealthLowAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_StaminaBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_HealthText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_StaminaText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_StaminaDepletedAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::NewProp_HealthLowAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::PropPointers) < 2048);
// ********** End Class UKKC_PlayerStatsWidget Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::ClassParams = {
	&UKKC_PlayerStatsWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::Class_MetaDataParams)
};
void UKKC_PlayerStatsWidget::StaticRegisterNativesUKKC_PlayerStatsWidget()
{
	UClass* Class = UKKC_PlayerStatsWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UKKC_PlayerStatsWidget()
{
	if (!Z_Registration_Info_UClass_UKKC_PlayerStatsWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_PlayerStatsWidget.OuterSingleton, Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_PlayerStatsWidget.OuterSingleton;
}
UKKC_PlayerStatsWidget::UKKC_PlayerStatsWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_PlayerStatsWidget);
UKKC_PlayerStatsWidget::~UKKC_PlayerStatsWidget() {}
// ********** End Class UKKC_PlayerStatsWidget *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_PlayerStatsWidget, UKKC_PlayerStatsWidget::StaticClass, TEXT("UKKC_PlayerStatsWidget"), &Z_Registration_Info_UClass_UKKC_PlayerStatsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_PlayerStatsWidget), 1096717980U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h__Script_CyberWolf_57V_2338444675{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

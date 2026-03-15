// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/KKC_EnhancedInputComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_EnhancedInputComponent() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_EnhancedInputComponent();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_EnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKKC_EnhancedInputComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_EnhancedInputComponent;
UClass* UKKC_EnhancedInputComponent::GetPrivateStaticClass()
{
	using TClass = UKKC_EnhancedInputComponent;
	if (!Z_Registration_Info_UClass_UKKC_EnhancedInputComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_EnhancedInputComponent"),
			Z_Registration_Info_UClass_UKKC_EnhancedInputComponent.InnerSingleton,
			StaticRegisterNativesUKKC_EnhancedInputComponent,
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
	return Z_Registration_Info_UClass_UKKC_EnhancedInputComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_EnhancedInputComponent_NoRegister()
{
	return UKKC_EnhancedInputComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_EnhancedInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/KKC_EnhancedInputComponent.h" },
		{ "ModuleRelativePath", "Public/Input/KKC_EnhancedInputComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_EnhancedInputComponent constinit property declarations **************
// ********** End Class UKKC_EnhancedInputComponent constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_EnhancedInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_EnhancedInputComponent_Statics
UObject* (*const Z_Construct_UClass_UKKC_EnhancedInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_EnhancedInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_EnhancedInputComponent_Statics::ClassParams = {
	&UKKC_EnhancedInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_EnhancedInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_EnhancedInputComponent_Statics::Class_MetaDataParams)
};
void UKKC_EnhancedInputComponent::StaticRegisterNativesUKKC_EnhancedInputComponent()
{
}
UClass* Z_Construct_UClass_UKKC_EnhancedInputComponent()
{
	if (!Z_Registration_Info_UClass_UKKC_EnhancedInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_EnhancedInputComponent.OuterSingleton, Z_Construct_UClass_UKKC_EnhancedInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_EnhancedInputComponent.OuterSingleton;
}
UKKC_EnhancedInputComponent::UKKC_EnhancedInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_EnhancedInputComponent);
UKKC_EnhancedInputComponent::~UKKC_EnhancedInputComponent() {}
// ********** End Class UKKC_EnhancedInputComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Input_KKC_EnhancedInputComponent_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_EnhancedInputComponent, UKKC_EnhancedInputComponent::StaticClass, TEXT("UKKC_EnhancedInputComponent"), &Z_Registration_Info_UClass_UKKC_EnhancedInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_EnhancedInputComponent), 788597364U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Input_KKC_EnhancedInputComponent_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Input_KKC_EnhancedInputComponent_h__Script_CyberWolf_57V_1546522503{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Input_KKC_EnhancedInputComponent_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Input_KKC_EnhancedInputComponent_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

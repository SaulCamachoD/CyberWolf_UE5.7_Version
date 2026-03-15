// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/MyEnhancedInputComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyEnhancedInputComponent() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UMyEnhancedInputComponent();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UMyEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyEnhancedInputComponent ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMyEnhancedInputComponent;
UClass* UMyEnhancedInputComponent::GetPrivateStaticClass()
{
	using TClass = UMyEnhancedInputComponent;
	if (!Z_Registration_Info_UClass_UMyEnhancedInputComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyEnhancedInputComponent"),
			Z_Registration_Info_UClass_UMyEnhancedInputComponent.InnerSingleton,
			StaticRegisterNativesUMyEnhancedInputComponent,
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
	return Z_Registration_Info_UClass_UMyEnhancedInputComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyEnhancedInputComponent_NoRegister()
{
	return UMyEnhancedInputComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyEnhancedInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/MyEnhancedInputComponent.h" },
		{ "ModuleRelativePath", "Public/Input/MyEnhancedInputComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMyEnhancedInputComponent constinit property declarations ****************
// ********** End Class UMyEnhancedInputComponent constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyEnhancedInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMyEnhancedInputComponent_Statics
UObject* (*const Z_Construct_UClass_UMyEnhancedInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEnhancedInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyEnhancedInputComponent_Statics::ClassParams = {
	&UMyEnhancedInputComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEnhancedInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyEnhancedInputComponent_Statics::Class_MetaDataParams)
};
void UMyEnhancedInputComponent::StaticRegisterNativesUMyEnhancedInputComponent()
{
}
UClass* Z_Construct_UClass_UMyEnhancedInputComponent()
{
	if (!Z_Registration_Info_UClass_UMyEnhancedInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyEnhancedInputComponent.OuterSingleton, Z_Construct_UClass_UMyEnhancedInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyEnhancedInputComponent.OuterSingleton;
}
UMyEnhancedInputComponent::UMyEnhancedInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMyEnhancedInputComponent);
UMyEnhancedInputComponent::~UMyEnhancedInputComponent() {}
// ********** End Class UMyEnhancedInputComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Input_MyEnhancedInputComponent_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyEnhancedInputComponent, UMyEnhancedInputComponent::StaticClass, TEXT("UMyEnhancedInputComponent"), &Z_Registration_Info_UClass_UMyEnhancedInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyEnhancedInputComponent), 2175815701U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Input_MyEnhancedInputComponent_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Input_MyEnhancedInputComponent_h__Script_CyberWolf_57V_1643842176{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Input_MyEnhancedInputComponent_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Input_MyEnhancedInputComponent_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/MainPlayer/PlayerComponents/KKC_LocomotionComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_LocomotionComponent() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_LocomotionComponent();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_LocomotionComponent_NoRegister();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_MovementData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKKC_LocomotionComponent *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_LocomotionComponent;
UClass* UKKC_LocomotionComponent::GetPrivateStaticClass()
{
	using TClass = UKKC_LocomotionComponent;
	if (!Z_Registration_Info_UClass_UKKC_LocomotionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_LocomotionComponent"),
			Z_Registration_Info_UClass_UKKC_LocomotionComponent.InnerSingleton,
			StaticRegisterNativesUKKC_LocomotionComponent,
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
	return Z_Registration_Info_UClass_UKKC_LocomotionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_LocomotionComponent_NoRegister()
{
	return UKKC_LocomotionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_LocomotionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/MainPlayer/PlayerComponents/KKC_LocomotionComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_LocomotionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_LocomotionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_LocomotionComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKKC_LocomotionComponent constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_LocomotionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_LocomotionComponent_Statics

// ********** Begin Class UKKC_LocomotionComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_LocomotionComponent_Statics::NewProp_MovementData = { "MovementData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_LocomotionComponent, MovementData), Z_Construct_UClass_UKKC_MovementData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementData_MetaData), NewProp_MovementData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKKC_LocomotionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_LocomotionComponent_Statics::NewProp_MovementData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_LocomotionComponent_Statics::PropPointers) < 2048);
// ********** End Class UKKC_LocomotionComponent Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UKKC_LocomotionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_LocomotionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_LocomotionComponent_Statics::ClassParams = {
	&UKKC_LocomotionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKKC_LocomotionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_LocomotionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_LocomotionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_LocomotionComponent_Statics::Class_MetaDataParams)
};
void UKKC_LocomotionComponent::StaticRegisterNativesUKKC_LocomotionComponent()
{
}
UClass* Z_Construct_UClass_UKKC_LocomotionComponent()
{
	if (!Z_Registration_Info_UClass_UKKC_LocomotionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_LocomotionComponent.OuterSingleton, Z_Construct_UClass_UKKC_LocomotionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_LocomotionComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_LocomotionComponent);
UKKC_LocomotionComponent::~UKKC_LocomotionComponent() {}
// ********** End Class UKKC_LocomotionComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_LocomotionComponent_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_LocomotionComponent, UKKC_LocomotionComponent::StaticClass, TEXT("UKKC_LocomotionComponent"), &Z_Registration_Info_UClass_UKKC_LocomotionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_LocomotionComponent), 3599453109U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_LocomotionComponent_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_LocomotionComponent_h__Script_CyberWolf_57V_1016517984{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_LocomotionComponent_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_LocomotionComponent_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

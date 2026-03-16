// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/MainPlayer/KKC_WolfPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_WolfPlayer() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_AKKC_WolfPlayer();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_AKKC_WolfPlayer_NoRegister();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_AirMovementComponent_NoRegister();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_CameraComponents_NoRegister();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_FlightComponent_NoRegister();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_LocomotionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKKC_WolfPlayer **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AKKC_WolfPlayer;
UClass* AKKC_WolfPlayer::GetPrivateStaticClass()
{
	using TClass = AKKC_WolfPlayer;
	if (!Z_Registration_Info_UClass_AKKC_WolfPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_WolfPlayer"),
			Z_Registration_Info_UClass_AKKC_WolfPlayer.InnerSingleton,
			StaticRegisterNativesAKKC_WolfPlayer,
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
	return Z_Registration_Info_UClass_AKKC_WolfPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_AKKC_WolfPlayer_NoRegister()
{
	return AKKC_WolfPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKKC_WolfPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MainPlayer/KKC_WolfPlayer.h" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/KKC_WolfPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/KKC_WolfPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirMovementComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/KKC_WolfPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlightComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/KKC_WolfPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/KKC_WolfPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/KKC_WolfPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/KKC_WolfPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Sprint_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/KKC_WolfPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/KKC_WolfPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/KKC_WolfPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/KKC_WolfPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AKKC_WolfPlayer constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocomotionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AirMovementComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlightComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Sprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AKKC_WolfPlayer constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKKC_WolfPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AKKC_WolfPlayer_Statics

// ********** Begin Class AKKC_WolfPlayer Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_LocomotionComp = { "LocomotionComp", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_WolfPlayer, LocomotionComp), Z_Construct_UClass_UKKC_LocomotionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionComp_MetaData), NewProp_LocomotionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_AirMovementComp = { "AirMovementComp", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_WolfPlayer, AirMovementComp), Z_Construct_UClass_UKKC_AirMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirMovementComp_MetaData), NewProp_AirMovementComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_FlightComp = { "FlightComp", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_WolfPlayer, FlightComp), Z_Construct_UClass_UKKC_FlightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlightComp_MetaData), NewProp_FlightComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_WolfPlayer, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_WolfPlayer, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_WolfPlayer, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_IA_Sprint = { "IA_Sprint", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_WolfPlayer, IA_Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Sprint_MetaData), NewProp_IA_Sprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_WolfPlayer, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_WolfPlayer, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_WolfPlayer, CameraComponent), Z_Construct_UClass_UKKC_CameraComponents_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKKC_WolfPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_LocomotionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_AirMovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_FlightComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_IA_Sprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_WolfPlayer_Statics::NewProp_CameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_WolfPlayer_Statics::PropPointers) < 2048);
// ********** End Class AKKC_WolfPlayer Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_AKKC_WolfPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_WolfPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKKC_WolfPlayer_Statics::ClassParams = {
	&AKKC_WolfPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKKC_WolfPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_WolfPlayer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_WolfPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AKKC_WolfPlayer_Statics::Class_MetaDataParams)
};
void AKKC_WolfPlayer::StaticRegisterNativesAKKC_WolfPlayer()
{
}
UClass* Z_Construct_UClass_AKKC_WolfPlayer()
{
	if (!Z_Registration_Info_UClass_AKKC_WolfPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKKC_WolfPlayer.OuterSingleton, Z_Construct_UClass_AKKC_WolfPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKKC_WolfPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AKKC_WolfPlayer);
AKKC_WolfPlayer::~AKKC_WolfPlayer() {}
// ********** End Class AKKC_WolfPlayer ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_KKC_WolfPlayer_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKKC_WolfPlayer, AKKC_WolfPlayer::StaticClass, TEXT("AKKC_WolfPlayer"), &Z_Registration_Info_UClass_AKKC_WolfPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKKC_WolfPlayer), 2926381552U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_KKC_WolfPlayer_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_KKC_WolfPlayer_h__Script_CyberWolf_57V_924822384{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_KKC_WolfPlayer_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_KKC_WolfPlayer_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

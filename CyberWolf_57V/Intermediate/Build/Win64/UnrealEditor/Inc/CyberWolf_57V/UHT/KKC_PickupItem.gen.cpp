// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Objects/KKC_PickupItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_PickupItem() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_AKKC_PickupItem();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_AKKC_PickupItem_NoRegister();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_ItemData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKKC_PickupItem **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AKKC_PickupItem;
UClass* AKKC_PickupItem::GetPrivateStaticClass()
{
	using TClass = AKKC_PickupItem;
	if (!Z_Registration_Info_UClass_AKKC_PickupItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_PickupItem"),
			Z_Registration_Info_UClass_AKKC_PickupItem.InnerSingleton,
			StaticRegisterNativesAKKC_PickupItem,
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
	return Z_Registration_Info_UClass_AKKC_PickupItem.InnerSingleton;
}
UClass* Z_Construct_UClass_AKKC_PickupItem_NoRegister()
{
	return AKKC_PickupItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKKC_PickupItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Objects/KKC_PickupItem.h" },
		{ "ModuleRelativePath", "Public/Objects/KKC_PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "KKC_PickupItem" },
		{ "ModuleRelativePath", "Public/Objects/KKC_PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
		{ "Category", "KKC_PickupItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Objects/KKC_PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "KKC_PickupItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Objects/KKC_PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatingMovement_MetaData[] = {
		{ "Category", "KKC_PickupItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Objects/KKC_PickupItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AKKC_PickupItem constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotatingMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AKKC_PickupItem constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKKC_PickupItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AKKC_PickupItem_Statics

// ********** Begin Class AKKC_PickupItem Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_PickupItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_PickupItem, ItemData), Z_Construct_UClass_UKKC_ItemData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_PickupItem_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_PickupItem, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComp_MetaData), NewProp_SphereComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_PickupItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_PickupItem, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKKC_PickupItem_Statics::NewProp_RotatingMovement = { "RotatingMovement", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKKC_PickupItem, RotatingMovement), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatingMovement_MetaData), NewProp_RotatingMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKKC_PickupItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_PickupItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_PickupItem_Statics::NewProp_SphereComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_PickupItem_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKKC_PickupItem_Statics::NewProp_RotatingMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_PickupItem_Statics::PropPointers) < 2048);
// ********** End Class AKKC_PickupItem Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_AKKC_PickupItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_PickupItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKKC_PickupItem_Statics::ClassParams = {
	&AKKC_PickupItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKKC_PickupItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_PickupItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKKC_PickupItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AKKC_PickupItem_Statics::Class_MetaDataParams)
};
void AKKC_PickupItem::StaticRegisterNativesAKKC_PickupItem()
{
}
UClass* Z_Construct_UClass_AKKC_PickupItem()
{
	if (!Z_Registration_Info_UClass_AKKC_PickupItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKKC_PickupItem.OuterSingleton, Z_Construct_UClass_AKKC_PickupItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKKC_PickupItem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AKKC_PickupItem);
AKKC_PickupItem::~AKKC_PickupItem() {}
// ********** End Class AKKC_PickupItem ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Objects_KKC_PickupItem_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKKC_PickupItem, AKKC_PickupItem::StaticClass, TEXT("AKKC_PickupItem"), &Z_Registration_Info_UClass_AKKC_PickupItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKKC_PickupItem), 3653045409U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Objects_KKC_PickupItem_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Objects_KKC_PickupItem_h__Script_CyberWolf_57V_906536840{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Objects_KKC_PickupItem_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Objects_KKC_PickupItem_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

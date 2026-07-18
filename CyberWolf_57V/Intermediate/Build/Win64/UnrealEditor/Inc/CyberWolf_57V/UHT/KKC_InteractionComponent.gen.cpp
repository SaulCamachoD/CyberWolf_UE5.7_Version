// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/MainPlayer/PlayerComponents/KKC_InteractionComponent.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_InteractionComponent() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_InteractionComponent();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_InteractionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKKC_InteractionComponent Function OnInteractionBeginOverlap *************
struct Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics
{
	struct KKC_InteractionComponent_eventOnInteractionBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlapComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnInteractionBeginOverlap constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnInteractionBeginOverlap constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnInteractionBeginOverlap Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_InteractionComponent_eventOnInteractionBeginOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapComponent_MetaData), NewProp_OverlapComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_InteractionComponent_eventOnInteractionBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_InteractionComponent_eventOnInteractionBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_InteractionComponent_eventOnInteractionBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((KKC_InteractionComponent_eventOnInteractionBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KKC_InteractionComponent_eventOnInteractionBeginOverlap_Parms), &Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_InteractionComponent_eventOnInteractionBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_OverlapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnInteractionBeginOverlap Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_InteractionComponent, nullptr, "OnInteractionBeginOverlap", 	Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::KKC_InteractionComponent_eventOnInteractionBeginOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::KKC_InteractionComponent_eventOnInteractionBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_InteractionComponent::execOnInteractionBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteractionBeginOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class UKKC_InteractionComponent Function OnInteractionBeginOverlap ***************

// ********** Begin Class UKKC_InteractionComponent Function OnInteractionEndOverlap ***************
struct Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics
{
	struct KKC_InteractionComponent_eventOnInteractionEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnInteractionEndOverlap constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnInteractionEndOverlap constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnInteractionEndOverlap Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_InteractionComponent_eventOnInteractionEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_InteractionComponent_eventOnInteractionEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_InteractionComponent_eventOnInteractionEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_InteractionComponent_eventOnInteractionEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnInteractionEndOverlap Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_InteractionComponent, nullptr, "OnInteractionEndOverlap", 	Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::KKC_InteractionComponent_eventOnInteractionEndOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::KKC_InteractionComponent_eventOnInteractionEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_InteractionComponent::execOnInteractionEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteractionEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class UKKC_InteractionComponent Function OnInteractionEndOverlap *****************

// ********** Begin Class UKKC_InteractionComponent ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_InteractionComponent;
UClass* UKKC_InteractionComponent::GetPrivateStaticClass()
{
	using TClass = UKKC_InteractionComponent;
	if (!Z_Registration_Info_UClass_UKKC_InteractionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_InteractionComponent"),
			Z_Registration_Info_UClass_UKKC_InteractionComponent.InnerSingleton,
			StaticRegisterNativesUKKC_InteractionComponent,
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
	return Z_Registration_Info_UClass_UKKC_InteractionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_InteractionComponent_NoRegister()
{
	return UKKC_InteractionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_InteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/MainPlayer/PlayerComponents/KKC_InteractionComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
		{ "Category", "KKC_InteractionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_InteractionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_InteractionComponent constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKKC_InteractionComponent constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnInteractionBeginOverlap"), .Pointer = &UKKC_InteractionComponent::execOnInteractionBeginOverlap },
		{ .NameUTF8 = UTF8TEXT("OnInteractionEndOverlap"), .Pointer = &UKKC_InteractionComponent::execOnInteractionEndOverlap },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionBeginOverlap, "OnInteractionBeginOverlap" }, // 817174347
		{ &Z_Construct_UFunction_UKKC_InteractionComponent_OnInteractionEndOverlap, "OnInteractionEndOverlap" }, // 3313028445
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_InteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_InteractionComponent_Statics

// ********** Begin Class UKKC_InteractionComponent Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_InteractionComponent_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_InteractionComponent, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComp_MetaData), NewProp_SphereComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_InteractionComponent_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_InteractionComponent, CurrentInteractable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInteractable_MetaData), NewProp_CurrentInteractable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKKC_InteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_InteractionComponent_Statics::NewProp_SphereComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_InteractionComponent_Statics::NewProp_CurrentInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_InteractionComponent_Statics::PropPointers) < 2048);
// ********** End Class UKKC_InteractionComponent Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UKKC_InteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_InteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_InteractionComponent_Statics::ClassParams = {
	&UKKC_InteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKKC_InteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_InteractionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_InteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_InteractionComponent_Statics::Class_MetaDataParams)
};
void UKKC_InteractionComponent::StaticRegisterNativesUKKC_InteractionComponent()
{
	UClass* Class = UKKC_InteractionComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UKKC_InteractionComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UKKC_InteractionComponent()
{
	if (!Z_Registration_Info_UClass_UKKC_InteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_InteractionComponent.OuterSingleton, Z_Construct_UClass_UKKC_InteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_InteractionComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_InteractionComponent);
UKKC_InteractionComponent::~UKKC_InteractionComponent() {}
// ********** End Class UKKC_InteractionComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_InteractionComponent_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_InteractionComponent, UKKC_InteractionComponent::StaticClass, TEXT("UKKC_InteractionComponent"), &Z_Registration_Info_UClass_UKKC_InteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_InteractionComponent), 3838024129U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_InteractionComponent_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_InteractionComponent_h__Script_CyberWolf_57V_191162490{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_InteractionComponent_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_InteractionComponent_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/KKC_Interactable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_Interactable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_Interactable();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_Interactable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UKKC_Interactable Function GetInteractText ***************************
struct KKC_Interactable_eventGetInteractText_Parms
{
	FText ReturnValue;
};
FText IKKC_Interactable::GetInteractText()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractText instead.");
	KKC_Interactable_eventGetInteractText_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UKKC_Interactable_GetInteractText = FName(TEXT("GetInteractText"));
FText IKKC_Interactable::Execute_GetInteractText(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UKKC_Interactable::StaticClass()));
	KKC_Interactable_eventGetInteractText_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UKKC_Interactable_GetInteractText);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IKKC_Interactable*)(O->GetNativeInterfaceAddress(UKKC_Interactable::StaticClass())))
	{
		Parms.ReturnValue = I->GetInteractText_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UKKC_Interactable_GetInteractText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/KKC_Interactable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInteractText constinit property declarations ***********************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInteractText constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInteractText Property Definitions **********************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKKC_Interactable_GetInteractText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_Interactable_eventGetInteractText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_Interactable_GetInteractText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_Interactable_GetInteractText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_Interactable_GetInteractText_Statics::PropPointers) < 2048);
// ********** End Function GetInteractText Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_Interactable_GetInteractText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_Interactable, nullptr, "GetInteractText", 	Z_Construct_UFunction_UKKC_Interactable_GetInteractText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_Interactable_GetInteractText_Statics::PropPointers), 
sizeof(KKC_Interactable_eventGetInteractText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_Interactable_GetInteractText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_Interactable_GetInteractText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(KKC_Interactable_eventGetInteractText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_Interactable_GetInteractText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_Interactable_GetInteractText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IKKC_Interactable::execGetInteractText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetInteractText_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UKKC_Interactable Function GetInteractText *****************************

// ********** Begin Interface UKKC_Interactable Function Interact **********************************
struct KKC_Interactable_eventInteract_Parms
{
	AActor* Interactor;
};
void IKKC_Interactable::Interact(AActor* Interactor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UKKC_Interactable_Interact = FName(TEXT("Interact"));
void IKKC_Interactable::Execute_Interact(UObject* O, AActor* Interactor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UKKC_Interactable::StaticClass()));
	KKC_Interactable_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UKKC_Interactable_Interact);
	if (Func)
	{
		Parms.Interactor=std::move(Interactor);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IKKC_Interactable*)(O->GetNativeInterfaceAddress(UKKC_Interactable::StaticClass())))
	{
		I->Interact_Implementation(Interactor);
	}
}
struct Z_Construct_UFunction_UKKC_Interactable_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/KKC_Interactable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Interact constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Interact constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Interact Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_Interactable_Interact_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_Interactable_eventInteract_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_Interactable_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_Interactable_Interact_Statics::NewProp_Interactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_Interactable_Interact_Statics::PropPointers) < 2048);
// ********** End Function Interact Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_Interactable_Interact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_Interactable, nullptr, "Interact", 	Z_Construct_UFunction_UKKC_Interactable_Interact_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_Interactable_Interact_Statics::PropPointers), 
sizeof(KKC_Interactable_eventInteract_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_Interactable_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_Interactable_Interact_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(KKC_Interactable_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_Interactable_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_Interactable_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IKKC_Interactable::execInteract)
{
	P_GET_OBJECT(AActor,Z_Param_Interactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_Interactor);
	P_NATIVE_END;
}
// ********** End Interface UKKC_Interactable Function Interact ************************************

// ********** Begin Interface UKKC_Interactable ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_Interactable;
UClass* UKKC_Interactable::GetPrivateStaticClass()
{
	using TClass = UKKC_Interactable;
	if (!Z_Registration_Info_UClass_UKKC_Interactable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_Interactable"),
			Z_Registration_Info_UClass_UKKC_Interactable.InnerSingleton,
			StaticRegisterNativesUKKC_Interactable,
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
	return Z_Registration_Info_UClass_UKKC_Interactable.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_Interactable_NoRegister()
{
	return UKKC_Interactable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_Interactable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/KKC_Interactable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UKKC_Interactable constinit property declarations ********************
// ********** End Interface UKKC_Interactable constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetInteractText"), .Pointer = &IKKC_Interactable::execGetInteractText },
		{ .NameUTF8 = UTF8TEXT("Interact"), .Pointer = &IKKC_Interactable::execInteract },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKKC_Interactable_GetInteractText, "GetInteractText" }, // 1231531622
		{ &Z_Construct_UFunction_UKKC_Interactable_Interact, "Interact" }, // 2167891605
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IKKC_Interactable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_Interactable_Statics
UObject* (*const Z_Construct_UClass_UKKC_Interactable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_Interactable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_Interactable_Statics::ClassParams = {
	&UKKC_Interactable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_Interactable_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_Interactable_Statics::Class_MetaDataParams)
};
void UKKC_Interactable::StaticRegisterNativesUKKC_Interactable()
{
	UClass* Class = UKKC_Interactable::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UKKC_Interactable_Statics::Funcs));
}
UClass* Z_Construct_UClass_UKKC_Interactable()
{
	if (!Z_Registration_Info_UClass_UKKC_Interactable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_Interactable.OuterSingleton, Z_Construct_UClass_UKKC_Interactable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_Interactable.OuterSingleton;
}
UKKC_Interactable::UKKC_Interactable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_Interactable);
// ********** End Interface UKKC_Interactable ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_Interactable, UKKC_Interactable::StaticClass, TEXT("UKKC_Interactable"), &Z_Registration_Info_UClass_UKKC_Interactable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_Interactable), 2549013019U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h__Script_CyberWolf_57V_1478480524{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

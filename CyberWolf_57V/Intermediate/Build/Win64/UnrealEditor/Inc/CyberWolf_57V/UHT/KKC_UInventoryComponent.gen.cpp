// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_UInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_ItemData_NoRegister();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_UInventoryComponent();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_UInventoryComponent_NoRegister();
CYBERWOLF_57V_API UEnum* Z_Construct_UEnum_CyberWolf_57V_ESlots();
CYBERWOLF_57V_API UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature();
CYBERWOLF_57V_API UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnItemEquipped *******************************************************
struct Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics
{
	struct _Script_CyberWolf_57V_eventOnItemEquipped_Parms
	{
		UKKC_ItemData* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnItemEquipped constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnItemEquipped constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnItemEquipped Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CyberWolf_57V_eventOnItemEquipped_Parms, Item), Z_Construct_UClass_UKKC_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnItemEquipped Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CyberWolf_57V, nullptr, "OnItemEquipped__DelegateSignature", 	Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::_Script_CyberWolf_57V_eventOnItemEquipped_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::_Script_CyberWolf_57V_eventOnItemEquipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemEquipped, UKKC_ItemData* Item)
{
	struct _Script_CyberWolf_57V_eventOnItemEquipped_Parms
	{
		UKKC_ItemData* Item;
	};
	_Script_CyberWolf_57V_eventOnItemEquipped_Parms Parms;
	Parms.Item=Item;
	OnItemEquipped.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemEquipped *********************************************************

// ********** Begin Delegate FOnItemUnEquipped *****************************************************
struct Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics
{
	struct _Script_CyberWolf_57V_eventOnItemUnEquipped_Parms
	{
		UKKC_ItemData* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnItemUnEquipped constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnItemUnEquipped constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnItemUnEquipped Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CyberWolf_57V_eventOnItemUnEquipped_Parms, Item), Z_Construct_UClass_UKKC_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnItemUnEquipped Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CyberWolf_57V, nullptr, "OnItemUnEquipped__DelegateSignature", 	Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::_Script_CyberWolf_57V_eventOnItemUnEquipped_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::_Script_CyberWolf_57V_eventOnItemUnEquipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemUnEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemUnEquipped, UKKC_ItemData* Item)
{
	struct _Script_CyberWolf_57V_eventOnItemUnEquipped_Parms
	{
		UKKC_ItemData* Item;
	};
	_Script_CyberWolf_57V_eventOnItemUnEquipped_Parms Parms;
	Parms.Item=Item;
	OnItemUnEquipped.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemUnEquipped *******************************************************

// ********** Begin Class UKKC_UInventoryComponent Function AddItem ********************************
struct Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics
{
	struct KKC_UInventoryComponent_eventAddItem_Parms
	{
		UKKC_ItemData* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddItem constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItem constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItem Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_UInventoryComponent_eventAddItem_Parms, Item), Z_Construct_UClass_UKKC_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::PropPointers) < 2048);
// ********** End Function AddItem Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_UInventoryComponent, nullptr, "AddItem", 	Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::KKC_UInventoryComponent_eventAddItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::KKC_UInventoryComponent_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_UInventoryComponent::execAddItem)
{
	P_GET_OBJECT(UKKC_ItemData,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UKKC_UInventoryComponent Function AddItem **********************************

// ********** Begin Class UKKC_UInventoryComponent Function EquipItem ******************************
struct Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics
{
	struct KKC_UInventoryComponent_eventEquipItem_Parms
	{
		ESlots Slot;
		UKKC_ItemData* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EquipItem constinit property declarations *****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EquipItem constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EquipItem Property Definitions ****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_UInventoryComponent_eventEquipItem_Parms, Slot), Z_Construct_UEnum_CyberWolf_57V_ESlots, METADATA_PARAMS(0, nullptr) }; // 2518215857
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_UInventoryComponent_eventEquipItem_Parms, Item), Z_Construct_UClass_UKKC_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::PropPointers) < 2048);
// ********** End Function EquipItem Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_UInventoryComponent, nullptr, "EquipItem", 	Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::KKC_UInventoryComponent_eventEquipItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::KKC_UInventoryComponent_eventEquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_UInventoryComponent::execEquipItem)
{
	P_GET_ENUM(ESlots,Z_Param_Slot);
	P_GET_OBJECT(UKKC_ItemData,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipItem(ESlots(Z_Param_Slot),Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UKKC_UInventoryComponent Function EquipItem ********************************

// ********** Begin Class UKKC_UInventoryComponent Function GetEquippedItem ************************
struct Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics
{
	struct KKC_UInventoryComponent_eventGetEquippedItem_Parms
	{
		ESlots Slot;
		UKKC_ItemData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEquippedItem constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEquippedItem constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEquippedItem Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_UInventoryComponent_eventGetEquippedItem_Parms, Slot), Z_Construct_UEnum_CyberWolf_57V_ESlots, METADATA_PARAMS(0, nullptr) }; // 2518215857
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_UInventoryComponent_eventGetEquippedItem_Parms, ReturnValue), Z_Construct_UClass_UKKC_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::PropPointers) < 2048);
// ********** End Function GetEquippedItem Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_UInventoryComponent, nullptr, "GetEquippedItem", 	Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::KKC_UInventoryComponent_eventGetEquippedItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::KKC_UInventoryComponent_eventGetEquippedItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_UInventoryComponent::execGetEquippedItem)
{
	P_GET_ENUM(ESlots,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UKKC_ItemData**)Z_Param__Result=P_THIS->GetEquippedItem(ESlots(Z_Param_Slot));
	P_NATIVE_END;
}
// ********** End Class UKKC_UInventoryComponent Function GetEquippedItem **************************

// ********** Begin Class UKKC_UInventoryComponent Function RemoveItem *****************************
struct Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics
{
	struct KKC_UInventoryComponent_eventRemoveItem_Parms
	{
		UKKC_ItemData* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveItem constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveItem constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveItem Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_UInventoryComponent_eventRemoveItem_Parms, Item), Z_Construct_UClass_UKKC_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::PropPointers) < 2048);
// ********** End Function RemoveItem Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_UInventoryComponent, nullptr, "RemoveItem", 	Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::KKC_UInventoryComponent_eventRemoveItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::KKC_UInventoryComponent_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_UInventoryComponent::execRemoveItem)
{
	P_GET_OBJECT(UKKC_ItemData,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UKKC_UInventoryComponent Function RemoveItem *******************************

// ********** Begin Class UKKC_UInventoryComponent Function UnEquipItem ****************************
struct Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics
{
	struct KKC_UInventoryComponent_eventUnEquipItem_Parms
	{
		UKKC_ItemData* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnEquipItem constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnEquipItem constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnEquipItem Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KKC_UInventoryComponent_eventUnEquipItem_Parms, Item), Z_Construct_UClass_UKKC_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::PropPointers) < 2048);
// ********** End Function UnEquipItem Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKKC_UInventoryComponent, nullptr, "UnEquipItem", 	Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::KKC_UInventoryComponent_eventUnEquipItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::KKC_UInventoryComponent_eventUnEquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKKC_UInventoryComponent::execUnEquipItem)
{
	P_GET_OBJECT(UKKC_ItemData,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnEquipItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UKKC_UInventoryComponent Function UnEquipItem ******************************

// ********** Begin Class UKKC_UInventoryComponent *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_UInventoryComponent;
UClass* UKKC_UInventoryComponent::GetPrivateStaticClass()
{
	using TClass = UKKC_UInventoryComponent;
	if (!Z_Registration_Info_UClass_UKKC_UInventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_UInventoryComponent"),
			Z_Registration_Info_UClass_UKKC_UInventoryComponent.InnerSingleton,
			StaticRegisterNativesUKKC_UInventoryComponent,
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
	return Z_Registration_Info_UClass_UKKC_UInventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_UInventoryComponent_NoRegister()
{
	return UKKC_UInventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemUnEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bag_MetaData[] = {
		{ "Category", "Bag" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedItems_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_UInventoryComponent constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemEquipped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUnEquipped;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedItems_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquippedItems_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquippedItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EquippedItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKKC_UInventoryComponent constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddItem"), .Pointer = &UKKC_UInventoryComponent::execAddItem },
		{ .NameUTF8 = UTF8TEXT("EquipItem"), .Pointer = &UKKC_UInventoryComponent::execEquipItem },
		{ .NameUTF8 = UTF8TEXT("GetEquippedItem"), .Pointer = &UKKC_UInventoryComponent::execGetEquippedItem },
		{ .NameUTF8 = UTF8TEXT("RemoveItem"), .Pointer = &UKKC_UInventoryComponent::execRemoveItem },
		{ .NameUTF8 = UTF8TEXT("UnEquipItem"), .Pointer = &UKKC_UInventoryComponent::execUnEquipItem },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKKC_UInventoryComponent_AddItem, "AddItem" }, // 1657324598
		{ &Z_Construct_UFunction_UKKC_UInventoryComponent_EquipItem, "EquipItem" }, // 2866092857
		{ &Z_Construct_UFunction_UKKC_UInventoryComponent_GetEquippedItem, "GetEquippedItem" }, // 1985806892
		{ &Z_Construct_UFunction_UKKC_UInventoryComponent_RemoveItem, "RemoveItem" }, // 102039084
		{ &Z_Construct_UFunction_UKKC_UInventoryComponent_UnEquipItem, "UnEquipItem" }, // 58400163
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_UInventoryComponent_Statics

// ********** Begin Class UKKC_UInventoryComponent Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_OnItemEquipped = { "OnItemEquipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_UInventoryComponent, OnItemEquipped), Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemEquipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemEquipped_MetaData), NewProp_OnItemEquipped_MetaData) }; // 2138831506
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_OnItemUnEquipped = { "OnItemUnEquipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_UInventoryComponent, OnItemUnEquipped), Z_Construct_UDelegateFunction_CyberWolf_57V_OnItemUnEquipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemUnEquipped_MetaData), NewProp_OnItemUnEquipped_MetaData) }; // 520874469
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_Bag_Inner = { "Bag", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UKKC_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_Bag = { "Bag", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_UInventoryComponent, Bag), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bag_MetaData), NewProp_Bag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_EquippedItems_ValueProp = { "EquippedItems", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UKKC_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_EquippedItems_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_EquippedItems_Key_KeyProp = { "EquippedItems_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CyberWolf_57V_ESlots, METADATA_PARAMS(0, nullptr) }; // 2518215857
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_EquippedItems = { "EquippedItems", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_UInventoryComponent, EquippedItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedItems_MetaData), NewProp_EquippedItems_MetaData) }; // 2518215857
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKKC_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_OnItemEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_OnItemUnEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_Bag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_Bag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_EquippedItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_EquippedItems_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_EquippedItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_UInventoryComponent_Statics::NewProp_EquippedItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_UInventoryComponent_Statics::PropPointers) < 2048);
// ********** End Class UKKC_UInventoryComponent Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UKKC_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_UInventoryComponent_Statics::ClassParams = {
	&UKKC_UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKKC_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_UInventoryComponent_Statics::Class_MetaDataParams)
};
void UKKC_UInventoryComponent::StaticRegisterNativesUKKC_UInventoryComponent()
{
	UClass* Class = UKKC_UInventoryComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UKKC_UInventoryComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UKKC_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UKKC_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UKKC_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_UInventoryComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_UInventoryComponent);
UKKC_UInventoryComponent::~UKKC_UInventoryComponent() {}
// ********** End Class UKKC_UInventoryComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h__Script_CyberWolf_57V_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_UInventoryComponent, UKKC_UInventoryComponent::StaticClass, TEXT("UKKC_UInventoryComponent"), &Z_Registration_Info_UClass_UKKC_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_UInventoryComponent), 63414971U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h__Script_CyberWolf_57V_3954820719{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h__Script_CyberWolf_57V_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

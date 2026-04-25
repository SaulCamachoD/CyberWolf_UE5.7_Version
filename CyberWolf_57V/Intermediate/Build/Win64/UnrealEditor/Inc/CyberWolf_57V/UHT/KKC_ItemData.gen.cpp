// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/KKC_ItemData.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKKC_ItemData() {}

// ********** Begin Cross Module References ********************************************************
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_ItemData();
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_ItemData_NoRegister();
CYBERWOLF_57V_API UEnum* Z_Construct_UEnum_CyberWolf_57V_EItemRarity();
CYBERWOLF_57V_API UEnum* Z_Construct_UEnum_CyberWolf_57V_EModifierOperation();
CYBERWOLF_57V_API UEnum* Z_Construct_UEnum_CyberWolf_57V_ESlots();
CYBERWOLF_57V_API UEnum* Z_Construct_UEnum_CyberWolf_57V_EStatsType();
CYBERWOLF_57V_API UScriptStruct* Z_Construct_UScriptStruct_FStatsModifier();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_CyberWolf_57V();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESlots ********************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlots;
static UEnum* ESlots_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESlots.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESlots.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CyberWolf_57V_ESlots, (UObject*)Z_Construct_UPackage__Script_CyberWolf_57V(), TEXT("ESlots"));
	}
	return Z_Registration_Info_UEnum_ESlots.OuterSingleton;
}
template<> CYBERWOLF_57V_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlots>()
{
	return ESlots_StaticEnum();
}
struct Z_Construct_UEnum_CyberWolf_57V_ESlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Back.DisplayName", "Back" },
		{ "Back.Name", "ESlots::Back" },
		{ "BlueprintType", "true" },
		{ "Hands.DisplayName", "Hands" },
		{ "Hands.Name", "ESlots::Hands" },
		{ "Head.DisplayName", "Head" },
		{ "Head.Name", "ESlots::Head" },
		{ "LeftArm.DisplayName", "LeftArm" },
		{ "LeftArm.Name", "ESlots::LeftArm" },
		{ "Legs.DisplayName", "Legs" },
		{ "Legs.Name", "ESlots::Legs" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
		{ "RightArm.DisplayName", "RightArm" },
		{ "RightArm.Name", "ESlots::RightArm" },
		{ "Storage.DisplayName", "Storage" },
		{ "Storage.Name", "ESlots::Storage" },
		{ "Torso.DisplayName", "Torso" },
		{ "Torso.Name", "ESlots::Torso" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESlots::Head", (int64)ESlots::Head },
		{ "ESlots::Torso", (int64)ESlots::Torso },
		{ "ESlots::LeftArm", (int64)ESlots::LeftArm },
		{ "ESlots::RightArm", (int64)ESlots::RightArm },
		{ "ESlots::Back", (int64)ESlots::Back },
		{ "ESlots::Legs", (int64)ESlots::Legs },
		{ "ESlots::Hands", (int64)ESlots::Hands },
		{ "ESlots::Storage", (int64)ESlots::Storage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CyberWolf_57V_ESlots_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CyberWolf_57V_ESlots_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CyberWolf_57V,
	nullptr,
	"ESlots",
	"ESlots",
	Z_Construct_UEnum_CyberWolf_57V_ESlots_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CyberWolf_57V_ESlots_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CyberWolf_57V_ESlots_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CyberWolf_57V_ESlots_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CyberWolf_57V_ESlots()
{
	if (!Z_Registration_Info_UEnum_ESlots.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlots.InnerSingleton, Z_Construct_UEnum_CyberWolf_57V_ESlots_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESlots.InnerSingleton;
}
// ********** End Enum ESlots **********************************************************************

// ********** Begin Enum EItemRarity ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemRarity;
static UEnum* EItemRarity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemRarity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemRarity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CyberWolf_57V_EItemRarity, (UObject*)Z_Construct_UPackage__Script_CyberWolf_57V(), TEXT("EItemRarity"));
	}
	return Z_Registration_Info_UEnum_EItemRarity.OuterSingleton;
}
template<> CYBERWOLF_57V_NON_ATTRIBUTED_API UEnum* StaticEnum<EItemRarity>()
{
	return EItemRarity_StaticEnum();
}
struct Z_Construct_UEnum_CyberWolf_57V_EItemRarity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Common.DisplayName", "Common" },
		{ "Common.Name", "EItemRarity::Common" },
		{ "Epic.DisplayName", "Epic" },
		{ "Epic.Name", "EItemRarity::Epic" },
		{ "Legendary.DisplayName", "Legendary" },
		{ "Legendary.Name", "EItemRarity::Legendary" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
		{ "Rare.DisplayName", "Rare" },
		{ "Rare.Name", "EItemRarity::Rare" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemRarity::Common", (int64)EItemRarity::Common },
		{ "EItemRarity::Rare", (int64)EItemRarity::Rare },
		{ "EItemRarity::Epic", (int64)EItemRarity::Epic },
		{ "EItemRarity::Legendary", (int64)EItemRarity::Legendary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CyberWolf_57V_EItemRarity_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CyberWolf_57V_EItemRarity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CyberWolf_57V,
	nullptr,
	"EItemRarity",
	"EItemRarity",
	Z_Construct_UEnum_CyberWolf_57V_EItemRarity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CyberWolf_57V_EItemRarity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CyberWolf_57V_EItemRarity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CyberWolf_57V_EItemRarity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CyberWolf_57V_EItemRarity()
{
	if (!Z_Registration_Info_UEnum_EItemRarity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemRarity.InnerSingleton, Z_Construct_UEnum_CyberWolf_57V_EItemRarity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemRarity.InnerSingleton;
}
// ********** End Enum EItemRarity *****************************************************************

// ********** Begin Enum EStatsType ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatsType;
static UEnum* EStatsType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStatsType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStatsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CyberWolf_57V_EStatsType, (UObject*)Z_Construct_UPackage__Script_CyberWolf_57V(), TEXT("EStatsType"));
	}
	return Z_Registration_Info_UEnum_EStatsType.OuterSingleton;
}
template<> CYBERWOLF_57V_NON_ATTRIBUTED_API UEnum* StaticEnum<EStatsType>()
{
	return EStatsType_StaticEnum();
}
struct Z_Construct_UEnum_CyberWolf_57V_EStatsType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Damage.DisplayName", "Damage" },
		{ "Damage.Name", "EStatsType::Damage" },
		{ "FlightSpeed.DisplayName", "FlightSpeed" },
		{ "FlightSpeed.Name", "EStatsType::FlightSpeed" },
		{ "MaxHealth.DisplayName", "MaxHealth" },
		{ "MaxHealth.Name", "EStatsType::MaxHealth" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EStatsType::None" },
		{ "Speed.DisplayName", "Speed" },
		{ "Speed.Name", "EStatsType::Speed" },
		{ "Strength.DisplayName", "Strength" },
		{ "Strength.Name", "EStatsType::Strength" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStatsType::None", (int64)EStatsType::None },
		{ "EStatsType::MaxHealth", (int64)EStatsType::MaxHealth },
		{ "EStatsType::Speed", (int64)EStatsType::Speed },
		{ "EStatsType::FlightSpeed", (int64)EStatsType::FlightSpeed },
		{ "EStatsType::Strength", (int64)EStatsType::Strength },
		{ "EStatsType::Damage", (int64)EStatsType::Damage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CyberWolf_57V_EStatsType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CyberWolf_57V_EStatsType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CyberWolf_57V,
	nullptr,
	"EStatsType",
	"EStatsType",
	Z_Construct_UEnum_CyberWolf_57V_EStatsType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CyberWolf_57V_EStatsType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CyberWolf_57V_EStatsType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CyberWolf_57V_EStatsType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CyberWolf_57V_EStatsType()
{
	if (!Z_Registration_Info_UEnum_EStatsType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatsType.InnerSingleton, Z_Construct_UEnum_CyberWolf_57V_EStatsType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStatsType.InnerSingleton;
}
// ********** End Enum EStatsType ******************************************************************

// ********** Begin Enum EModifierOperation ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifierOperation;
static UEnum* EModifierOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModifierOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModifierOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CyberWolf_57V_EModifierOperation, (UObject*)Z_Construct_UPackage__Script_CyberWolf_57V(), TEXT("EModifierOperation"));
	}
	return Z_Registration_Info_UEnum_EModifierOperation.OuterSingleton;
}
template<> CYBERWOLF_57V_NON_ATTRIBUTED_API UEnum* StaticEnum<EModifierOperation>()
{
	return EModifierOperation_StaticEnum();
}
struct Z_Construct_UEnum_CyberWolf_57V_EModifierOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Addition.DisplayName", "Addition" },
		{ "Addition.Name", "EModifierOperation::Addition" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
		{ "Subtraction.DisplayName", "Subtraction" },
		{ "Subtraction.Name", "EModifierOperation::Subtraction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModifierOperation::Addition", (int64)EModifierOperation::Addition },
		{ "EModifierOperation::Subtraction", (int64)EModifierOperation::Subtraction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CyberWolf_57V_EModifierOperation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CyberWolf_57V_EModifierOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CyberWolf_57V,
	nullptr,
	"EModifierOperation",
	"EModifierOperation",
	Z_Construct_UEnum_CyberWolf_57V_EModifierOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CyberWolf_57V_EModifierOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CyberWolf_57V_EModifierOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CyberWolf_57V_EModifierOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CyberWolf_57V_EModifierOperation()
{
	if (!Z_Registration_Info_UEnum_EModifierOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifierOperation.InnerSingleton, Z_Construct_UEnum_CyberWolf_57V_EModifierOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModifierOperation.InnerSingleton;
}
// ********** End Enum EModifierOperation **********************************************************

// ********** Begin ScriptStruct FStatsModifier ****************************************************
struct Z_Construct_UScriptStruct_FStatsModifier_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStatsModifier); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStatsModifier); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatType_MetaData[] = {
		{ "Category", "StatsModifier" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "StatsModifier" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "StatsModifier" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStatsModifier constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StatType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStatsModifier constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatsModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStatsModifier_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStatsModifier;
class UScriptStruct* FStatsModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStatsModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStatsModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatsModifier, (UObject*)Z_Construct_UPackage__Script_CyberWolf_57V(), TEXT("StatsModifier"));
	}
	return Z_Registration_Info_UScriptStruct_FStatsModifier.OuterSingleton;
	}

// ********** Begin ScriptStruct FStatsModifier Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatsModifier_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatsModifier_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatsModifier, StatType), Z_Construct_UEnum_CyberWolf_57V_EStatsType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatType_MetaData), NewProp_StatType_MetaData) }; // 4078910688
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsModifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatsModifier, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatsModifier_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatsModifier_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatsModifier, Operation), Z_Construct_UEnum_CyberWolf_57V_EModifierOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 3763393359
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatsModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifier_Statics::NewProp_StatType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifier_Statics::NewProp_StatType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifier_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifier_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifier_Statics::NewProp_Operation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifier_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStatsModifier Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatsModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
	nullptr,
	&NewStructOps,
	"StatsModifier",
	Z_Construct_UScriptStruct_FStatsModifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifier_Statics::PropPointers),
	sizeof(FStatsModifier),
	alignof(FStatsModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatsModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatsModifier()
{
	if (!Z_Registration_Info_UScriptStruct_FStatsModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStatsModifier.InnerSingleton, Z_Construct_UScriptStruct_FStatsModifier_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStatsModifier.InnerSingleton);
}
// ********** End ScriptStruct FStatsModifier ******************************************************

// ********** Begin Class UKKC_ItemData ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKKC_ItemData;
UClass* UKKC_ItemData::GetPrivateStaticClass()
{
	using TClass = UKKC_ItemData;
	if (!Z_Registration_Info_UClass_UKKC_ItemData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KKC_ItemData"),
			Z_Registration_Info_UClass_UKKC_ItemData.InnerSingleton,
			StaticRegisterNativesUKKC_ItemData,
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
	return Z_Registration_Info_UClass_UKKC_ItemData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKKC_ItemData_NoRegister()
{
	return UKKC_ItemData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKKC_ItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/KKC_ItemData.h" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Basic Info" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Basic Info" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Basic Info" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Category", "Classification" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[] = {
		{ "Category", "Classification" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTag_MetaData[] = {
		{ "Category", "Classification" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Data/KKC_ItemData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKKC_ItemData constinit property declarations ****************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rarity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKKC_ItemData constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKKC_ItemData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKKC_ItemData_Statics

// ********** Begin Class UKKC_ItemData Property Definitions ***************************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_ItemData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_ItemData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_ItemData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_ItemData, Slot), Z_Construct_UEnum_CyberWolf_57V_ESlots, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 2518215857
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_ItemData, Rarity), Z_Construct_UEnum_CyberWolf_57V_EItemRarity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rarity_MetaData), NewProp_Rarity_MetaData) }; // 2510577326
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_ItemTag = { "ItemTag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_ItemData, ItemTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTag_MetaData), NewProp_ItemTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatsModifier, METADATA_PARAMS(0, nullptr) }; // 4234812089
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKKC_ItemData, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) }; // 4234812089
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKKC_ItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Rarity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Rarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_ItemTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKKC_ItemData_Statics::NewProp_Modifiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_ItemData_Statics::PropPointers) < 2048);
// ********** End Class UKKC_ItemData Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UKKC_ItemData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberWolf_57V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_ItemData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKKC_ItemData_Statics::ClassParams = {
	&UKKC_ItemData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKKC_ItemData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_ItemData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKKC_ItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKKC_ItemData_Statics::Class_MetaDataParams)
};
void UKKC_ItemData::StaticRegisterNativesUKKC_ItemData()
{
}
UClass* Z_Construct_UClass_UKKC_ItemData()
{
	if (!Z_Registration_Info_UClass_UKKC_ItemData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKKC_ItemData.OuterSingleton, Z_Construct_UClass_UKKC_ItemData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKKC_ItemData.OuterSingleton;
}
UKKC_ItemData::UKKC_ItemData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKKC_ItemData);
UKKC_ItemData::~UKKC_ItemData() {}
// ********** End Class UKKC_ItemData **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h__Script_CyberWolf_57V_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESlots_StaticEnum, TEXT("ESlots"), &Z_Registration_Info_UEnum_ESlots, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2518215857U) },
		{ EItemRarity_StaticEnum, TEXT("EItemRarity"), &Z_Registration_Info_UEnum_EItemRarity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2510577326U) },
		{ EStatsType_StaticEnum, TEXT("EStatsType"), &Z_Registration_Info_UEnum_EStatsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4078910688U) },
		{ EModifierOperation_StaticEnum, TEXT("EModifierOperation"), &Z_Registration_Info_UEnum_EModifierOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3763393359U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStatsModifier::StaticStruct, Z_Construct_UScriptStruct_FStatsModifier_Statics::NewStructOps, TEXT("StatsModifier"),&Z_Registration_Info_UScriptStruct_FStatsModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatsModifier), 4234812089U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKKC_ItemData, UKKC_ItemData::StaticClass, TEXT("UKKC_ItemData"), &Z_Registration_Info_UClass_UKKC_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKKC_ItemData), 4248442537U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h__Script_CyberWolf_57V_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h__Script_CyberWolf_57V_1270088118{
	TEXT("/Script/CyberWolf_57V"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h__Script_CyberWolf_57V_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h__Script_CyberWolf_57V_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h__Script_CyberWolf_57V_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h__Script_CyberWolf_57V_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h__Script_CyberWolf_57V_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h__Script_CyberWolf_57V_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

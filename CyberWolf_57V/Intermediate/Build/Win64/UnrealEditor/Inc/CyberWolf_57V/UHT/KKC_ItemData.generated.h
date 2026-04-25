// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/KKC_ItemData.h"

#ifdef CYBERWOLF_57V_KKC_ItemData_generated_h
#error "KKC_ItemData.generated.h already included, missing '#pragma once' in KKC_ItemData.h"
#endif
#define CYBERWOLF_57V_KKC_ItemData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStatsModifier ****************************************************
struct Z_Construct_UScriptStruct_FStatsModifier_Statics;
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStatsModifier_Statics; \
	CYBERWOLF_57V_API static class UScriptStruct* StaticStruct();


struct FStatsModifier;
// ********** End ScriptStruct FStatsModifier ******************************************************

// ********** Begin Class UKKC_ItemData ************************************************************
struct Z_Construct_UClass_UKKC_ItemData_Statics;
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_ItemData_NoRegister();

#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKKC_ItemData(); \
	friend struct ::Z_Construct_UClass_UKKC_ItemData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERWOLF_57V_API UClass* ::Z_Construct_UClass_UKKC_ItemData_NoRegister(); \
public: \
	DECLARE_CLASS2(UKKC_ItemData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberWolf_57V"), Z_Construct_UClass_UKKC_ItemData_NoRegister) \
	DECLARE_SERIALIZER(UKKC_ItemData)


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKKC_ItemData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKKC_ItemData(UKKC_ItemData&&) = delete; \
	UKKC_ItemData(const UKKC_ItemData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKKC_ItemData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKKC_ItemData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKKC_ItemData) \
	NO_API virtual ~UKKC_ItemData();


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h_67_PROLOG
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h_70_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKKC_ItemData;

// ********** End Class UKKC_ItemData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_KKC_ItemData_h

// ********** Begin Enum ESlots ********************************************************************
#define FOREACH_ENUM_ESLOTS(op) \
	op(ESlots::Head) \
	op(ESlots::Torso) \
	op(ESlots::LeftArm) \
	op(ESlots::RightArm) \
	op(ESlots::Back) \
	op(ESlots::Legs) \
	op(ESlots::Hands) \
	op(ESlots::Storage) 

enum class ESlots : uint8;
template<> struct TIsUEnumClass<ESlots> { enum { Value = true }; };
template<> CYBERWOLF_57V_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlots>();
// ********** End Enum ESlots **********************************************************************

// ********** Begin Enum EItemRarity ***************************************************************
#define FOREACH_ENUM_EITEMRARITY(op) \
	op(EItemRarity::Common) \
	op(EItemRarity::Rare) \
	op(EItemRarity::Epic) \
	op(EItemRarity::Legendary) 

enum class EItemRarity : uint8;
template<> struct TIsUEnumClass<EItemRarity> { enum { Value = true }; };
template<> CYBERWOLF_57V_NON_ATTRIBUTED_API UEnum* StaticEnum<EItemRarity>();
// ********** End Enum EItemRarity *****************************************************************

// ********** Begin Enum EStatsType ****************************************************************
#define FOREACH_ENUM_ESTATSTYPE(op) \
	op(EStatsType::None) \
	op(EStatsType::MaxHealth) \
	op(EStatsType::Speed) \
	op(EStatsType::FlightSpeed) \
	op(EStatsType::Strength) \
	op(EStatsType::Damage) 

enum class EStatsType : uint8;
template<> struct TIsUEnumClass<EStatsType> { enum { Value = true }; };
template<> CYBERWOLF_57V_NON_ATTRIBUTED_API UEnum* StaticEnum<EStatsType>();
// ********** End Enum EStatsType ******************************************************************

// ********** Begin Enum EModifierOperation ********************************************************
#define FOREACH_ENUM_EMODIFIEROPERATION(op) \
	op(EModifierOperation::Addition) \
	op(EModifierOperation::Subtraction) 

enum class EModifierOperation : uint8;
template<> struct TIsUEnumClass<EModifierOperation> { enum { Value = true }; };
template<> CYBERWOLF_57V_NON_ATTRIBUTED_API UEnum* StaticEnum<EModifierOperation>();
// ********** End Enum EModifierOperation **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

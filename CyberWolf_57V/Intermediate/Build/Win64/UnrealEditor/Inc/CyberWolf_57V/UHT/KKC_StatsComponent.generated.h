// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h"

#ifdef CYBERWOLF_57V_KKC_StatsComponent_generated_h
#error "KKC_StatsComponent.generated.h already included, missing '#pragma once' in KKC_StatsComponent.h"
#endif
#define CYBERWOLF_57V_KKC_StatsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnHealthChanged ******************************************************
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_10_DELEGATE \
CYBERWOLF_57V_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float Current, float Max);


// ********** End Delegate FOnHealthChanged ********************************************************

// ********** Begin Delegate FOnStaminaChanged *****************************************************
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_11_DELEGATE \
CYBERWOLF_57V_API void FOnStaminaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChanged, float Current, float Max);


// ********** End Delegate FOnStaminaChanged *******************************************************

// ********** Begin Delegate FOnDeath **************************************************************
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_12_DELEGATE \
CYBERWOLF_57V_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath);


// ********** End Delegate FOnDeath ****************************************************************

// ********** Begin Delegate FOnStaminaDepleted ****************************************************
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_13_DELEGATE \
CYBERWOLF_57V_API void FOnStaminaDepleted_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaDepleted);


// ********** End Delegate FOnStaminaDepleted ******************************************************

// ********** Begin ScriptStruct FHealthStat *******************************************************
struct Z_Construct_UScriptStruct_FHealthStat_Statics;
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHealthStat_Statics; \
	CYBERWOLF_57V_API static class UScriptStruct* StaticStruct();


struct FHealthStat;
// ********** End ScriptStruct FHealthStat *********************************************************

// ********** Begin ScriptStruct FStaminaStat ******************************************************
struct Z_Construct_UScriptStruct_FStaminaStat_Statics;
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaminaStat_Statics; \
	CYBERWOLF_57V_API static class UScriptStruct* StaticStruct();


struct FStaminaStat;
// ********** End ScriptStruct FStaminaStat ********************************************************

// ********** Begin ScriptStruct FEnergyStat *******************************************************
struct Z_Construct_UScriptStruct_FEnergyStat_Statics;
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnergyStat_Statics; \
	CYBERWOLF_57V_API static class UScriptStruct* StaticStruct();


struct FEnergyStat;
// ********** End ScriptStruct FEnergyStat *********************************************************

// ********** Begin Class UKKC_StatsComponent ******************************************************
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDepleted); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execGetStaminaPercent); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execConsumeStamina); \
	DECLARE_FUNCTION(execHealth); \
	DECLARE_FUNCTION(execTakeDamage);


struct Z_Construct_UClass_UKKC_StatsComponent_Statics;
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_StatsComponent_NoRegister();

#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKKC_StatsComponent(); \
	friend struct ::Z_Construct_UClass_UKKC_StatsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERWOLF_57V_API UClass* ::Z_Construct_UClass_UKKC_StatsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UKKC_StatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberWolf_57V"), Z_Construct_UClass_UKKC_StatsComponent_NoRegister) \
	DECLARE_SERIALIZER(UKKC_StatsComponent)


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKKC_StatsComponent(UKKC_StatsComponent&&) = delete; \
	UKKC_StatsComponent(const UKKC_StatsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKKC_StatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKKC_StatsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKKC_StatsComponent) \
	NO_API virtual ~UKKC_StatsComponent();


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_51_PROLOG
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_54_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKKC_StatsComponent;

// ********** End Class UKKC_StatsComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_StatsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/KKC_PlayerStatsWidget.h"

#ifdef CYBERWOLF_57V_KKC_PlayerStatsWidget_generated_h
#error "KKC_PlayerStatsWidget.generated.h already included, missing '#pragma once' in KKC_PlayerStatsWidget.h"
#endif
#define CYBERWOLF_57V_KKC_PlayerStatsWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKKC_PlayerStatsWidget ***************************************************
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayStaminaDepletedEffect); \
	DECLARE_FUNCTION(execUpdateStamina); \
	DECLARE_FUNCTION(execUpdateHealth);


struct Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics;
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_PlayerStatsWidget_NoRegister();

#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKKC_PlayerStatsWidget(); \
	friend struct ::Z_Construct_UClass_UKKC_PlayerStatsWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERWOLF_57V_API UClass* ::Z_Construct_UClass_UKKC_PlayerStatsWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UKKC_PlayerStatsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberWolf_57V"), Z_Construct_UClass_UKKC_PlayerStatsWidget_NoRegister) \
	DECLARE_SERIALIZER(UKKC_PlayerStatsWidget)


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKKC_PlayerStatsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKKC_PlayerStatsWidget(UKKC_PlayerStatsWidget&&) = delete; \
	UKKC_PlayerStatsWidget(const UKKC_PlayerStatsWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKKC_PlayerStatsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKKC_PlayerStatsWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKKC_PlayerStatsWidget) \
	NO_API virtual ~UKKC_PlayerStatsWidget();


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h_14_PROLOG
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKKC_PlayerStatsWidget;

// ********** End Class UKKC_PlayerStatsWidget *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerStatsWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

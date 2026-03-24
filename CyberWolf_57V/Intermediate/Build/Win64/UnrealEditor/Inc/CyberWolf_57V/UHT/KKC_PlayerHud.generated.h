// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/KKC_PlayerHud.h"

#ifdef CYBERWOLF_57V_KKC_PlayerHud_generated_h
#error "KKC_PlayerHud.generated.h already included, missing '#pragma once' in KKC_PlayerHud.h"
#endif
#define CYBERWOLF_57V_KKC_PlayerHud_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKKC_PlayerHud ***********************************************************
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnStaminaDepleted); \
	DECLARE_FUNCTION(execOnStaminaChanged); \
	DECLARE_FUNCTION(execOnHealthChanged);


struct Z_Construct_UClass_AKKC_PlayerHud_Statics;
CYBERWOLF_57V_API UClass* Z_Construct_UClass_AKKC_PlayerHud_NoRegister();

#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKKC_PlayerHud(); \
	friend struct ::Z_Construct_UClass_AKKC_PlayerHud_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERWOLF_57V_API UClass* ::Z_Construct_UClass_AKKC_PlayerHud_NoRegister(); \
public: \
	DECLARE_CLASS2(AKKC_PlayerHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberWolf_57V"), Z_Construct_UClass_AKKC_PlayerHud_NoRegister) \
	DECLARE_SERIALIZER(AKKC_PlayerHud)


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKKC_PlayerHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKKC_PlayerHud(AKKC_PlayerHud&&) = delete; \
	AKKC_PlayerHud(const AKKC_PlayerHud&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKKC_PlayerHud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKKC_PlayerHud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKKC_PlayerHud) \
	NO_API virtual ~AKKC_PlayerHud();


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h_13_PROLOG
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKKC_PlayerHud;

// ********** End Class AKKC_PlayerHud *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_UI_KKC_PlayerHud_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h"

#ifdef CYBERWOLF_57V_KKC_UInventoryComponent_generated_h
#error "KKC_UInventoryComponent.generated.h already included, missing '#pragma once' in KKC_UInventoryComponent.h"
#endif
#define CYBERWOLF_57V_KKC_UInventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UKKC_ItemData;
enum class ESlots : uint8;

// ********** Begin Delegate FOnItemEquipped *******************************************************
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h_10_DELEGATE \
CYBERWOLF_57V_API void FOnItemEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemEquipped, UKKC_ItemData* Item);


// ********** End Delegate FOnItemEquipped *********************************************************

// ********** Begin Delegate FOnItemUnEquipped *****************************************************
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h_11_DELEGATE \
CYBERWOLF_57V_API void FOnItemUnEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemUnEquipped, UKKC_ItemData* Item);


// ********** End Delegate FOnItemUnEquipped *******************************************************

// ********** Begin Class UKKC_UInventoryComponent *************************************************
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEquippedItem); \
	DECLARE_FUNCTION(execUnEquipItem); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


struct Z_Construct_UClass_UKKC_UInventoryComponent_Statics;
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_UInventoryComponent_NoRegister();

#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKKC_UInventoryComponent(); \
	friend struct ::Z_Construct_UClass_UKKC_UInventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERWOLF_57V_API UClass* ::Z_Construct_UClass_UKKC_UInventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UKKC_UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberWolf_57V"), Z_Construct_UClass_UKKC_UInventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UKKC_UInventoryComponent)


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKKC_UInventoryComponent(UKKC_UInventoryComponent&&) = delete; \
	UKKC_UInventoryComponent(const UKKC_UInventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKKC_UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKKC_UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKKC_UInventoryComponent) \
	NO_API virtual ~UKKC_UInventoryComponent();


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h_13_PROLOG
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKKC_UInventoryComponent;

// ********** End Class UKKC_UInventoryComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_UInventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

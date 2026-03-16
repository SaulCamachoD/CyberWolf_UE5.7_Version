// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h"

#ifdef CYBERWOLF_57V_KKC_CameraComponents_generated_h
#error "KKC_CameraComponents.generated.h already included, missing '#pragma once' in KKC_CameraComponents.h"
#endif
#define CYBERWOLF_57V_KKC_CameraComponents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECameraMode : uint8;

// ********** Begin Class UKKC_CameraComponents ****************************************************
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCameraMode);


struct Z_Construct_UClass_UKKC_CameraComponents_Statics;
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_CameraComponents_NoRegister();

#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKKC_CameraComponents(); \
	friend struct ::Z_Construct_UClass_UKKC_CameraComponents_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERWOLF_57V_API UClass* ::Z_Construct_UClass_UKKC_CameraComponents_NoRegister(); \
public: \
	DECLARE_CLASS2(UKKC_CameraComponents, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberWolf_57V"), Z_Construct_UClass_UKKC_CameraComponents_NoRegister) \
	DECLARE_SERIALIZER(UKKC_CameraComponents)


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKKC_CameraComponents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKKC_CameraComponents(UKKC_CameraComponents&&) = delete; \
	UKKC_CameraComponents(const UKKC_CameraComponents&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKKC_CameraComponents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKKC_CameraComponents); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKKC_CameraComponents) \
	NO_API virtual ~UKKC_CameraComponents();


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h_24_PROLOG
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h_27_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKKC_CameraComponents;

// ********** End Class UKKC_CameraComponents ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Characters_MainPlayer_PlayerComponents_KKC_CameraComponents_h

// ********** Begin Enum ECameraMode ***************************************************************
#define FOREACH_ENUM_ECAMERAMODE(op) \
	op(ECameraMode::ThirdPerson) \
	op(ECameraMode::Aiming) \
	op(ECameraMode::Flight) \
	op(ECameraMode::Cutscene) 

enum class ECameraMode : uint8;
template<> struct TIsUEnumClass<ECameraMode> { enum { Value = true }; };
template<> CYBERWOLF_57V_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraMode>();
// ********** End Enum ECameraMode *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MovementData.h"

#ifdef CYBERWOLF_57V_MovementData_generated_h
#error "MovementData.generated.h already included, missing '#pragma once' in MovementData.h"
#endif
#define CYBERWOLF_57V_MovementData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovementData ************************************************************
struct Z_Construct_UClass_UMovementData_Statics;
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UMovementData_NoRegister();

#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_MovementData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementData(); \
	friend struct ::Z_Construct_UClass_UMovementData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERWOLF_57V_API UClass* ::Z_Construct_UClass_UMovementData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovementData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberWolf_57V"), Z_Construct_UClass_UMovementData_NoRegister) \
	DECLARE_SERIALIZER(UMovementData)


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_MovementData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovementData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovementData(UMovementData&&) = delete; \
	UMovementData(const UMovementData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementData) \
	NO_API virtual ~UMovementData();


#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_MovementData_h_12_PROLOG
#define FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_MovementData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_MovementData_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_MovementData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovementData;

// ********** End Class UMovementData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineGames_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Data_MovementData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

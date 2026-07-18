// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/KKC_Interactable.h"

#ifdef CYBERWOLF_57V_KKC_Interactable_generated_h
#error "KKC_Interactable.generated.h already included, missing '#pragma once' in KKC_Interactable.h"
#endif
#define CYBERWOLF_57V_KKC_Interactable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Interface UKKC_Interactable ****************************************************
#define FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FText GetInteractText_Implementation() { return FText::GetEmpty(); }; \
	virtual void Interact_Implementation(AActor* Interactor) {}; \
	DECLARE_FUNCTION(execGetInteractText); \
	DECLARE_FUNCTION(execInteract);


#define FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_10_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UKKC_Interactable_Statics;
CYBERWOLF_57V_API UClass* Z_Construct_UClass_UKKC_Interactable_NoRegister();

#define FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CYBERWOLF_57V_API UKKC_Interactable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKKC_Interactable(UKKC_Interactable&&) = delete; \
	UKKC_Interactable(const UKKC_Interactable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CYBERWOLF_57V_API, UKKC_Interactable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKKC_Interactable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKKC_Interactable) \
	virtual ~UKKC_Interactable() = default;


#define FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUKKC_Interactable(); \
	friend struct ::Z_Construct_UClass_UKKC_Interactable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERWOLF_57V_API UClass* ::Z_Construct_UClass_UKKC_Interactable_NoRegister(); \
public: \
	DECLARE_CLASS2(UKKC_Interactable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CyberWolf_57V"), Z_Construct_UClass_UKKC_Interactable_NoRegister) \
	DECLARE_SERIALIZER(UKKC_Interactable)


#define FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_10_GENERATED_UINTERFACE_BODY() \
	FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IKKC_Interactable() {} \
public: \
	typedef UKKC_Interactable UClassType; \
	typedef IKKC_Interactable ThisClass; \
	static FText Execute_GetInteractText(UObject* O); \
	static void Execute_Interact(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_7_PROLOG
#define FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_10_CALLBACK_WRAPPERS \
	FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKKC_Interactable;

// ********** End Interface UKKC_Interactable ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProyects_CyberWolfUE5_7Game_CyberWolf_UE5_7_Version_CyberWolf_57V_Source_CyberWolf_57V_Public_Interfaces_KKC_Interactable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

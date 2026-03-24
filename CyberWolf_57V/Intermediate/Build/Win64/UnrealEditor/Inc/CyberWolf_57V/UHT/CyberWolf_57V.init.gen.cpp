// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCyberWolf_57V_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	CYBERWOLF_57V_API UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnDeath__DelegateSignature();
	CYBERWOLF_57V_API UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature();
	CYBERWOLF_57V_API UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature();
	CYBERWOLF_57V_API UFunction* Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaDepleted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CyberWolf_57V;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CyberWolf_57V()
	{
		if (!Z_Registration_Info_UPackage__Script_CyberWolf_57V.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_CyberWolf_57V_OnDeath__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_CyberWolf_57V_OnHealthChanged__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaChanged__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_CyberWolf_57V_OnStaminaDepleted__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/CyberWolf_57V",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xC9ECDF58,
			0x07DD8B94,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CyberWolf_57V.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_CyberWolf_57V.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CyberWolf_57V(Z_Construct_UPackage__Script_CyberWolf_57V, TEXT("/Script/CyberWolf_57V"), Z_Registration_Info_UPackage__Script_CyberWolf_57V, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC9ECDF58, 0x07DD8B94));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

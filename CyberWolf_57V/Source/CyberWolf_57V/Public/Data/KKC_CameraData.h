// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KKC_CameraData.generated.h"

/**
 * 
 */
UCLASS()
class CYBERWOLF_57V_API UKKC_CameraData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, Category="Sensitivity")
	float MouseSensitivityX = 0.7f;

	UPROPERTY(EditDefaultsOnly, Category="Sensitivity")
	float MouseSensitivityY = 0.7f;

	UPROPERTY(EditDefaultsOnly, Category="Sensitivity")
	float GamepadSensitivityX = 1.5f;

	UPROPERTY(EditDefaultsOnly, Category="Clamp")
	float PitchMin = -60.f;

	UPROPERTY(EditDefaultsOnly, Category="Clamp")
	float PitchMax = 75.f;

	UPROPERTY(EditDefaultsOnly, Category="SpringArm")
	float ArmLengthDefault = 350.f;

	UPROPERTY(EditDefaultsOnly, Category="SpringArm")
	float ArmLengthAiming  = 180.f;

	UPROPERTY(EditDefaultsOnly, Category="SpringArm")
	float ArmLengthFlight  = 500.f;

	UPROPERTY(EditDefaultsOnly, Category="SpringArm")
	float CameraLagSpeed   = 10.f;

	UPROPERTY(EditDefaultsOnly, Category="FOV")
	float FOVDefault = 75.f;

	UPROPERTY(EditDefaultsOnly, Category="FOV")
	float FOVAiming  = 55.f;

	UPROPERTY(EditDefaultsOnly, Category="FOV")
	float FOVSprint  = 85.f;

	UPROPERTY(EditDefaultsOnly, Category="FOV")
	float FOVInterpSpeed = 8.f;
	
};

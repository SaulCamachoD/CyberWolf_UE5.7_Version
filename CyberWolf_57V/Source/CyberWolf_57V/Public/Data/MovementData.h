// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MovementData.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintType)
class CYBERWOLF_57V_API UMovementData : public UDataAsset
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, Category="Locomotion")
	float WalkSpeed = 400.f;

	UPROPERTY(EditDefaultsOnly, Category="Locomotion")
	float SprintSpeed = 700.f;

	UPROPERTY(EditDefaultsOnly, Category="Locomotion")
	float SprintStaminaCostPerSecond = 15.f;

	UPROPERTY(EditDefaultsOnly, Category="Air")
	float JumpZVelocity = 600.f;

	UPROPERTY(EditDefaultsOnly, Category="Air")
	float CoyoteTimeDuration = 0.15f;

	UPROPERTY(EditDefaultsOnly, Category="Air")
	float MaxJumpHoldTime = 0.35f;   // variable jump height

	UPROPERTY(EditDefaultsOnly, Category="Flight")
	float FlightSpeed = 900.f;
	
};

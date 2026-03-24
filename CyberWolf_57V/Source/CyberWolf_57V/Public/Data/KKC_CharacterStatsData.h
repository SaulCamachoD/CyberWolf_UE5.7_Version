// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KKC_CharacterStatsData.generated.h"


UCLASS()
class CYBERWOLF_57V_API UKKC_CharacterStatsData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditDefaultsOnly, Category = "Health")
	float MaxHealth = 100.0f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Health")
	float RegenHealthPerSecond = 0.0f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Stamine")
	float MaxStamina = 100.0f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Stamine")
	float StaminaRegenDelay = 1.2f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Stamine")
	float StaminaRegenPerSecond = 1.0f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Stamine")
	float SpringStaminaCostPerSecond = 15.0f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Energy")
	float MaxEnergy = 100.0f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Energy")
	float EnergyRegenPerSecond = 1.0f;
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "KKC_PlayerHud.generated.h"

class UKKC_PlayerStatsWidget;
/**
 * 
 */
UCLASS()
class CYBERWOLF_57V_API AKKC_PlayerHud : public AHUD
{
	GENERATED_BODY()
	
public:
	// Asignas la clase Blueprint (WBP_PlayerStats) en el editor
	UPROPERTY(EditDefaultsOnly, Category="UI")
	TSubclassOf<UKKC_PlayerStatsWidget> PlayerStatsWidgetClass;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY() TObjectPtr<UKKC_PlayerStatsWidget> StatsWidget;

	// Callbacks para los delegates del StatsComponent
	UFUNCTION()
	void OnHealthChanged(float Current, float Max);

	UFUNCTION()
	void OnStaminaChanged(float Current, float Max);

	UFUNCTION()
	void OnStaminaDepleted();
	
};

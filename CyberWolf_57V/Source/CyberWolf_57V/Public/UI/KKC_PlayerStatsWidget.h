// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KKC_PlayerStatsWidget.generated.h"

class UTextBlock;
class UProgressBar;
/**
 * 
 */
UCLASS()
class CYBERWOLF_57V_API UKKC_PlayerStatsWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// Llamados por el HUD cuando llegan los delegates
	UFUNCTION(BlueprintCallable)
	void UpdateHealth(float Current, float Max);

	UFUNCTION(BlueprintCallable)
	void UpdateStamina(float Current, float Max);

	// Llamado cuando stamina llega a 0 — para animación de depletion
	UFUNCTION(BlueprintCallable)
	void PlayStaminaDepletedEffect();

protected:
	// Los nombres deben coincidir EXACTAMENTE con los nombres
	// de los widgets en el Blueprint (WBP_PlayerStats)
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UProgressBar> HealthBar;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UProgressBar> StaminaBar;

	// Opcional — texto con el valor numérico
	// meta=(BindWidgetOptional) no crashea si no existe en el BP
	UPROPERTY(meta=(BindWidgetOptional))
	TObjectPtr<UTextBlock> HealthText;

	UPROPERTY(meta=(BindWidgetOptional))
	TObjectPtr<UTextBlock> StaminaText;

	// Animaciones definidas en el Blueprint
	UPROPERTY(meta=(BindWidgetAnimOptional), Transient)
	TObjectPtr<UWidgetAnimation> StaminaDepletedAnim;

	UPROPERTY(meta=(BindWidgetAnimOptional), Transient)
	TObjectPtr<UWidgetAnimation> HealthLowAnim;

	virtual void NativeConstruct() override;
	
};

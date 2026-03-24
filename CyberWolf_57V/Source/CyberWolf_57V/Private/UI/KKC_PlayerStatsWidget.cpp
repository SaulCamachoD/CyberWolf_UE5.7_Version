// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/KKC_PlayerStatsWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UKKC_PlayerStatsWidget::NativeConstruct()
{
	Super::NativeConstruct();
	// Estado inicial — barras llenas
	if (HealthBar)  HealthBar->SetPercent(1.f);
	if (StaminaBar) StaminaBar->SetPercent(1.f);
}

void UKKC_PlayerStatsWidget::UpdateHealth(float Current, float Max)
{
	if (!HealthBar) return;

	const float Percent = Max > 0.f ? Current / Max : 0.f;
	HealthBar->SetPercent(Percent);

	if (HealthText)
		HealthText->SetText(FText::FromString(
			FString::Printf(TEXT("%.0f / %.0f"), Current, Max)));

	// Activa animación de pulso cuando la vida es baja
	if (HealthLowAnim && Percent < 0.25f)
		PlayAnimation(HealthLowAnim, 0.f, 0 /*loop infinito*/);
	else if (HealthLowAnim)
		StopAnimation(HealthLowAnim);
}

void UKKC_PlayerStatsWidget::UpdateStamina(float Current, float Max)
{
	if (!StaminaBar) return;

	StaminaBar->SetPercent(Max > 0.f ? Current / Max : 0.f);

	if (StaminaText)
		StaminaText->SetText(FText::FromString(
			FString::Printf(TEXT("%.0f"), Current)));
}

void UKKC_PlayerStatsWidget::PlayStaminaDepletedEffect()
{
	if (StaminaDepletedAnim)
		PlayAnimation(StaminaDepletedAnim);
}


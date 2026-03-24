// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/KKC_PlayerHud.h"
#include "UI/KKC_PlayerStatsWidget.h"
#include "Characters/MainPlayer/KKC_WolfPlayer.h"
#include "Blueprint/UserWidget.h"
#include "Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h"

void AKKC_PlayerHud::BeginPlay()
{
	Super::BeginPlay();
	
	if (!PlayerStatsWidgetClass) return;

	// Crear el widget y añadirlo a la pantalla
	StatsWidget = CreateWidget<UKKC_PlayerStatsWidget>(
		GetWorld(), PlayerStatsWidgetClass);

	if (StatsWidget)
		StatsWidget->AddToViewport();

	// Buscar el StatsComponent del pawn local y suscribirse
	APlayerController* PC = GetOwningPlayerController();
	if (!PC) return;

	AKKC_WolfPlayer* Player = Cast<AKKC_WolfPlayer>(PC->GetPawn());
	if (!Player) return;

	UKKC_StatsComponent* Stats = Player->GetComponentByClass<UKKC_StatsComponent>();
	if (!Stats) return;

	Stats->OnHealthChanged.AddDynamic(this,  &AKKC_PlayerHud::OnHealthChanged);
	Stats->OnStaminaChanged.AddDynamic(this, &AKKC_PlayerHud::OnStaminaChanged);
	Stats->OnStaminaDepleted.AddDynamic(this,&AKKC_PlayerHud::OnStaminaDepleted);
	
}

void AKKC_PlayerHud::OnHealthChanged(float Current, float Max)
{
	if (StatsWidget) StatsWidget->UpdateHealth(Current, Max);
}

void AKKC_PlayerHud::OnStaminaChanged(float Current, float Max)
{
	if (StatsWidget) StatsWidget->UpdateStamina(Current, Max);
}

void AKKC_PlayerHud::OnStaminaDepleted()
{
	if (StatsWidget) StatsWidget->PlayStaminaDepletedEffect();
}
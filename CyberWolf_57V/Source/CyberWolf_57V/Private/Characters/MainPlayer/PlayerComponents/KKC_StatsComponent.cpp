// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h"
#include "Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h"


void UKKC_StatsComponent::InitializeComponent()
{
	Super::InitializeComponent();
	
	InventoryComponent = GetOwner()->FindComponentByClass<UKKC_UInventoryComponent>();
	
}


void UKKC_StatsComponent::BeginPlay()
{
	Super::BeginPlay();
	if (!StatsData) return;
    
	CurrentHealth.Current = CurrentHealth.Max = StatsData->MaxHealth;
	Stamina.Current = Stamina.Max = StatsData->MaxStamina;
	Energy.Current = Energy.Max = StatsData->MaxEnergy;

	if (InventoryComponent)
	{
		InventoryComponent->OnItemEquipped.AddDynamic(this, &UKKC_StatsComponent::addStat);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT(">>> NO SE PUDO SUSCRIBIR: InventoryComponent es nullptr <<<"));
	}
}


// Called every frame
void UKKC_StatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!StatsData || CurrentHealth.bIsDead)return;
}

void UKKC_StatsComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	
	if (InventoryComponent)
	{
		InventoryComponent->OnItemEquipped.RemoveDynamic(this, &UKKC_StatsComponent::addStat);
	}
}

UKKC_StatsComponent::UKKC_StatsComponent()
{	
	bWantsInitializeComponent = true;
	PrimaryComponentTick.bCanEverTick = true;
}

void UKKC_StatsComponent::TakeDamage(float Amount)
{
	if (CurrentHealth.bIsDead || Amount <= 0.f ) return;
	
	CurrentHealth.Current = FMath::Max(CurrentHealth.Current - Amount, 0.f);
	BroadcastHealthChanged();
	
	if (CurrentHealth.Current <= 0.f)
	{
		CurrentHealth.bIsDead = true;
		OnDeath.Broadcast();
	}
}

void UKKC_StatsComponent::Health(float Amount)
{
	if (CurrentHealth.bIsDead || Amount <= 0.f) return;
	
	CurrentHealth.Current = FMath::Min(CurrentHealth.Current + Amount, CurrentHealth.Max);
	BroadcastHealthChanged();
}

bool UKKC_StatsComponent::ConsumeStamina(float Amount)
{
	if (Stamina.Current < Amount ) return false;
	
	Stamina.Current = FMath::Max(Stamina.Current - Amount, 0.0f);
	TimeSinceStaminaConsumed = 0.f;
	if (Stamina.Current <= 1.0f)
	{	
		
		Stamina.bDepleted = true;
		OnStaminaDepleted.Broadcast();
	}
	
	BroadcastStaminaChanged();
	return true;
}

void UKKC_StatsComponent::DrainStaminaPerSecond(float CostPerSecond, float DeltaTime)
{
	ConsumeStamina(CostPerSecond * DeltaTime);
}


void UKKC_StatsComponent::RegenerateStamina(float DeltaTime)
{
	if (!StatsData)	return;
	
	TimeSinceStaminaConsumed += DeltaTime;
	
	if (TimeSinceStaminaConsumed < StatsData->StaminaRegenDelay)return;
	if (Stamina.Current >= Stamina.Max) return; 
	
	Stamina.Current = FMath::Min(Stamina.Current + StatsData->StaminaRegenPerSecond * DeltaTime, Stamina.Max);
	
	if (Stamina.bDepleted && Stamina.Current >= Stamina.Max * 0.2f )
	{
		Stamina.bDepleted = false;
	}
	BroadcastStaminaChanged();
	
	
}

void UKKC_StatsComponent::BroadcastHealthChanged()
{
	OnHealthChanged.Broadcast(CurrentHealth.Current, CurrentHealth.Max);
}

void UKKC_StatsComponent::BroadcastStaminaChanged()
{
	OnStaminaChanged.Broadcast(Stamina.Current, Stamina.Max);
}

void UKKC_StatsComponent::RemoveStat(UKKC_ItemData* Item)
{
	UE_LOG(LogTemp, Warning, TEXT("Remove Stat"))
}

void UKKC_StatsComponent::addStat(UKKC_ItemData* Item)
{
	UE_LOG(LogTemp, Warning, TEXT("Add Stat"))
}



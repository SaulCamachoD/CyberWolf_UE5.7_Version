// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/KKC_CharacterStatsData.h"
#include "KKC_StatsComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChanged, float, Current, float, Max);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStaminaChanged, float, Current, float, Max);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStaminaDepleted);


USTRUCT(BlueprintType)
struct FHealthStat
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly) float Current = 100.f;
	UPROPERTY(BlueprintReadOnly) float Max     = 100.f;
	UPROPERTY(BlueprintReadOnly) bool  bIsDead = false;

	float GetPercent() const { return Max > 0.f ? Current / Max : 0.f; }
	
};

USTRUCT(BlueprintType)
struct FStaminaStat
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly) float Current = 100.f;
	UPROPERTY(BlueprintReadOnly) float Max     = 100.f;
	UPROPERTY(BlueprintReadOnly) bool  bDepleted = false;
	
	float GetPercent() const { return Max > 0.f ? Current / Max : 0.f; }
	
};

USTRUCT(BlueprintType)
struct FEnergyStat
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly) float Current = 100.f;
	UPROPERTY(BlueprintReadOnly) float Max     = 100.f;
	
	float GetPercent() const { return Max > 0.f ? Current / Max : 0.f; }
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CYBERWOLF_57V_API UKKC_StatsComponent : public UActorComponent
{
	GENERATED_BODY()
	
	UKKC_StatsComponent();
	
public:	
		
	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	TObjectPtr<UKKC_CharacterStatsData> StatsData;
	
	// --------public Delegates ---------
	UPROPERTY(BlueprintAssignable) FOnHealthChanged OnHealthChanged;
	UPROPERTY(BlueprintAssignable) FOnStaminaChanged OnStaminaChanged;
	UPROPERTY(BlueprintAssignable) FOnDeath OnDeath;
	UPROPERTY(BlueprintAssignable) FOnStaminaDepleted OnStaminaDepleted;
	
	UFUNCTION(BlueprintCallable) void TakeDamage(float Amount);
	UFUNCTION(BlueprintCallable) void Health(float Amount);	
	
	UFUNCTION(BlueprintCallable) bool ConsumeStamina(float Amount);
	void RegenerateStamina(float DeltaTime);
	void DrainStaminaPerSecond(float CostPerSecond, float DeltaTime);
	
	//----Getters------
	UFUNCTION(BlueprintPure) float GetHealthPercent() const { return CurrentHealth.GetPercent();}
	UFUNCTION(BlueprintPure) float GetStaminaPercent() const { return Stamina.GetPercent();}
	UFUNCTION(BlueprintPure) bool IsDead() const { return CurrentHealth.bIsDead; }
	UFUNCTION(BlueprintPure) bool Depleted() const { return Stamina.bDepleted; }
	
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,FActorComponentTickFunction* ThisTickFunction) override;
	
	
private:
	
	FHealthStat CurrentHealth;
	FStaminaStat Stamina;
	FEnergyStat Energy;
	

	float TimeSinceStaminaConsumed = 0.f;
		
	
	void BroadcastHealthChanged();
	void BroadcastStaminaChanged();
	
};

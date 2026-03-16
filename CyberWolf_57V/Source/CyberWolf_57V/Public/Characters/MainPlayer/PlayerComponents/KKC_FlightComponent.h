// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KKC_FlightComponent.generated.h"

class UKKC_MovementData;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CYBERWOLF_57V_API UKKC_FlightComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UKKC_FlightComponent();
	
	UFUNCTION(BlueprintCallable)
	void UnlockFlight();

	UFUNCTION(BlueprintCallable)
	void ActivateFlight();

	UFUNCTION(BlueprintCallable)
	void DeactivateFlight();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	UKKC_MovementData* MovementData;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
private:
	bool bFlightUnlocked = false;
	bool bIsFlying = false;
		
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MainPlayer/PlayerComponents/KKC_FlightComponent.h"

#include "Data/KKC_MovementData.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UKKC_FlightComponent::UKKC_FlightComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UKKC_FlightComponent::UnlockFlight()
{
	bFlightUnlocked = true;
}

void UKKC_FlightComponent::ActivateFlight()
{
	if (!bFlightUnlocked) return;

	bIsFlying = true;
	UCharacterMovementComponent* CMC = GetOwner()->GetComponentByClass<UCharacterMovementComponent>();
	CMC->SetMovementMode(MOVE_Flying);
	CMC->MaxFlySpeed = MovementData->FlightSpeed;
}

void UKKC_FlightComponent::DeactivateFlight()
{
}


// Called when the game starts
void UKKC_FlightComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UKKC_FlightComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


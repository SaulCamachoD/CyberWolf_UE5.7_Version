// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MainPlayer/PlayerComponents/KKC_AirMovementComponent.h"

#include "Data/KKC_MovementData.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UKKC_AirMovementComponent::UKKC_AirMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UKKC_AirMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}



void UKKC_AirMovementComponent::RequestJump()
{
	ACharacter* Owner = Cast<ACharacter>(GetOwner());;
	const bool bCanJump = !Owner->GetMovementComponent()->IsFalling()
						  || (GetWorld()->GetTimeSeconds() - TimeLeftGround < MovementData->CoyoteTimeDuration);

	if (bCanJump)
	{
		Owner->Jump();
		bIsHoldingJump = true;
		JumpHoldTime = 0.f;
	}
}


// Called every frame
void UKKC_AirMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	// Variable jump height — mantener pulsado = salto más alto
	if (bIsHoldingJump)
	{
		JumpHoldTime += DeltaTime;
		if (JumpHoldTime > MovementData->MaxJumpHoldTime)
		{
			bIsHoldingJump = false;
			// Cortar velocidad vertical para terminar el salto
			UCharacterMovementComponent* CMC = GetOwner()->GetComponentByClass<UCharacterMovementComponent>();
			FVector Vel = CMC->Velocity;
			Vel.Z = FMath::Min(Vel.Z, 0.f);
			CMC->Velocity = Vel;
		}
	}

	// Registrar coyote time
	if (!GetOwner()->GetComponentByClass<UCharacterMovementComponent>()->IsFalling())
		TimeLeftGround = GetWorld()->GetTimeSeconds();
}


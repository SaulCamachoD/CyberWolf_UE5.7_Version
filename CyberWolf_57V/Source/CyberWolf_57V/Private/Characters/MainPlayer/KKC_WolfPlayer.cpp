#include "Characters/MainPlayer/KKC_WolfPlayer.h"

#include "InputActionValue.h"

AKKC_WolfPlayer::AKKC_WolfPlayer()
{
 	PrimaryActorTick.bCanEverTick = true;

}


void AKKC_WolfPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

void AKKC_WolfPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AKKC_WolfPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AKKC_WolfPlayer::Move(const FInputActionValue& Value)
{
	const FVector2D Axis = Value.Get<FVector2D>();
	LocomotionComp->ProcessMoveInput(Axis);
}

void AKKC_WolfPlayer::Look(const FInputActionValue& Value)
{
}

void AKKC_WolfPlayer::StartJump(const FInputActionValue& Value)
{
	AirMovementComp->RequestJump();
}

void AKKC_WolfPlayer::StopJump(const FInputActionValue& Value)
{
}

void AKKC_WolfPlayer::StartSprint(const FInputActionValue& Value)
{
}

void AKKC_WolfPlayer::StopSprint(const FInputActionValue& Value)
{
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MainPlayer/PlayerComponents/KKC_LocomotionComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UKKC_LocomotionComponent::UKKC_LocomotionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}



void UKKC_LocomotionComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UKKC_LocomotionComponent::InitializeComponent()
{	
	UCharacterMovementComponent* CMC = GetOwner()->GetComponentByClass<UCharacterMovementComponent>();
	CMC->MaxWalkSpeed = MovementData->WalkSpeed;
}


void UKKC_LocomotionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (bIsSprinting) DrainStamina(DeltaTime);
	// ...
}


void UKKC_LocomotionComponent::ProcessMoveInput(const FVector2D& Input)
{
	ACharacter* Owner = Cast<ACharacter>(GetOwner());

	const FRotator Rotation = Owner->GetControlRotation();
	const FVector Forward = FRotationMatrix(FRotator(0, Rotation.Yaw, 0)).GetUnitAxis(EAxis::X);
	const FVector Right   = FRotationMatrix(FRotator(0, Rotation.Yaw, 0)).GetUnitAxis(EAxis::Y);

	Owner->AddMovementInput(Forward, Input.Y);
	Owner->AddMovementInput(Right,   Input.X);
}



void UKKC_LocomotionComponent::SetSpringting(bool bSpring)
{
	UCharacterMovementComponent* CMC = GetOwner()->GetComponentByClass<UCharacterMovementComponent>();
	if (!CMC || !MovementData) return;

	bIsSprinting = bSpring;
	CMC->MaxWalkSpeed = bSpring ? MovementData->SprintSpeed : MovementData->WalkSpeed;
	
}



void UKKC_LocomotionComponent::DrainStamina(float DeltaTime)
{
	
}


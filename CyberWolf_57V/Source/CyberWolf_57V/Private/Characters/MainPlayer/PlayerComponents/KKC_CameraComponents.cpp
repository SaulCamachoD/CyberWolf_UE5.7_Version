// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Data/KKC_CameraData.h"
#include "GameFramework/Character.h"

void UKKC_CameraComponents::InitializeCamera(USpringArmComponent* InArm, UCameraComponent* InCamera)
{
	SpringArm = InArm;
	Camera    = InCamera;

	if (!CameraData) return;

	SpringArm->TargetArmLength         = CameraData->ArmLengthDefault;
	SpringArm->SocketOffset = FVector(0.f, 100.f, 0.f);
	SpringArm->bUsePawnControlRotation = true;   // sigue el controller
	SpringArm->bEnableCameraLag        = true;
	SpringArm->CameraLagSpeed          = CameraData->CameraLagSpeed;
	SpringArm->bUsePawnControlRotation = true;
	Camera->bUsePawnControlRotation = false;
	Camera->SetFieldOfView(CameraData->FOVDefault);

	TargetFOV       = CameraData->FOVDefault;
	TargetArmLength = CameraData->ArmLengthDefault;
}

void UKKC_CameraComponents::ProcessLookInput(const FVector2D& Input, bool bIsGamepad)
{
	if (!CameraData) return;

	ACharacter* Owner = Cast<ACharacter>(GetOwner());
	if (!Owner) return;

	const float SensX = bIsGamepad
		? CameraData->GamepadSensitivityX
		: CameraData->MouseSensitivityX;
	const float SensY = bIsGamepad
		? CameraData->GamepadSensitivityX   // reutiliza o añade SensY gamepad
		: CameraData->MouseSensitivityY;

	// Yaw — rota el personaje en Y (izq/der)
	Owner->AddControllerYawInput(Input.X * SensX);

	// Pitch — rota la cámara arriba/abajo con clamp
	Owner->AddControllerYawInput(Input.X * SensX);
	Owner->AddControllerPitchInput(-Input.Y * SensY);

}

void UKKC_CameraComponents::SetCameraMode(ECameraMode NewMode)
{
	if (CurrentMode == NewMode || !CameraData) return;
	CurrentMode = NewMode;

	switch (NewMode)
	{
	case ECameraMode::Aiming:
		TargetFOV       = CameraData->FOVAiming;
		TargetArmLength = CameraData->ArmLengthAiming;
		break;

	case ECameraMode::Flight:
		TargetFOV       = CameraData->FOVDefault;
		TargetArmLength = CameraData->ArmLengthFlight;
		break;

	default: // ThirdPerson
		TargetFOV       = CameraData->FOVDefault;
		TargetArmLength = CameraData->ArmLengthDefault;
		break;
	}
}

void UKKC_CameraComponents::SetSprintActive(bool bSprint)
{
	if (!CameraData) return;
	// Solo modifica FOV si estamos en modo normal (no apuntando)
	if (CurrentMode == ECameraMode::ThirdPerson)
		TargetFOV = bSprint ? CameraData->FOVSprint : CameraData->FOVDefault;
}

void UKKC_CameraComponents::TickComponent(float DeltaTime, ELevelTick TickType,
                                          FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	InterpCameraValues(DeltaTime);
}

void UKKC_CameraComponents::InterpCameraValues(float DeltaTime)
{
	if (!Camera || !SpringArm || !CameraData) return;

	const float Speed = CameraData->FOVInterpSpeed;

	// FOV — interpolación suave
	const float CurrentFOV = Camera->FieldOfView;
	if (!FMath::IsNearlyEqual(CurrentFOV, TargetFOV, 0.1f))
		Camera->SetFieldOfView(FMath::FInterpTo(CurrentFOV, TargetFOV, DeltaTime, Speed));

	// Arm length — interpolación suave
	const float CurrentArm = SpringArm->TargetArmLength;
	if (!FMath::IsNearlyEqual(CurrentArm, TargetArmLength, 0.5f))
		SpringArm->TargetArmLength = FMath::FInterpTo(CurrentArm, TargetArmLength, DeltaTime, Speed);
}



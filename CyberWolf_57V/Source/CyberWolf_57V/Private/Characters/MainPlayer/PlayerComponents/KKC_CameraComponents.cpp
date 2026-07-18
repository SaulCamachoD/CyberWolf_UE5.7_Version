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
	if (!CameraData || !SpringArm || !Camera) return;

	// EL CORAZÓN DE LA ISOMÉTRICA:
	// Rotación absoluta = la rotación del personaje/actor JAMÁS afecta la cámara
	SpringArm->SetUsingAbsoluteRotation(true);
	SpringArm->SetWorldRotation(FRotator(CameraData->CameraPitch, CameraData->CameraYaw, 0.f));

	// Nada de control del jugador sobre la cámara
	SpringArm->bUsePawnControlRotation = false;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritYaw   = false;
	SpringArm->bInheritRoll  = false;

	SpringArm->TargetArmLength = CameraData->ArmLengthDefault;

	// Fuera el SocketOffset raro — el encuadre lo da el ángulo + brazo
	SpringArm->SocketOffset = FVector(0.f, CameraData->ScreenOffsetRight, 0.f);

	// CRÍTICO en isométrica: sin esto, cada pared entre cámara y jugador
	// "empuja" la cámara y produce saltos horribles
	SpringArm->bDoCollisionTest = false;

	// Lag de posición = la cámara persigue suave al personaje (se siente pro)
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed   = CameraData->CameraLagSpeed;

	// La cámara ya no rota por sí misma: hereda el ángulo del brazo y punto
	Camera->bUsePawnControlRotation = false;
	Camera->SetRelativeRotation(FRotator::ZeroRotator);
	Camera->SetFieldOfView(CameraData->FOVDefault);

	TargetFOV       = CameraData->FOVDefault;
	TargetArmLength = CameraData->ArmLengthDefault;
}


void UKKC_CameraComponents::SetCameraMode(ECameraMode NewMode)
{
	if (CurrentMode == NewMode || !CameraData) return;
	CurrentMode = NewMode;

	switch (NewMode)
	{
	case ECameraMode::Olfato:
		TargetArmLength = CameraData->ArmLengthOlfato;
		break;
	case ECameraMode::Caza:
		TargetArmLength = CameraData->ArmLengthCaza;
		break;
	default:
		TargetArmLength = CameraData->ArmLengthDefault;
		break;
	}
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

	const float Speed = CameraData->InterpSpeed;

	// FOV — interpolación suave
	const float CurrentFOV = Camera->FieldOfView;
	if (!FMath::IsNearlyEqual(CurrentFOV, TargetFOV, 0.1f))
		Camera->SetFieldOfView(FMath::FInterpTo(CurrentFOV, TargetFOV, DeltaTime, Speed));

	// Arm length — interpolación suave
	const float CurrentArm = SpringArm->TargetArmLength;
	if (!FMath::IsNearlyEqual(CurrentArm, TargetArmLength, 0.5f))
		SpringArm->TargetArmLength = FMath::FInterpTo(CurrentArm, TargetArmLength, DeltaTime, Speed);
}

float UKKC_CameraComponents::GetCameraYaw() const
{
	return CameraData ? CameraData->CameraYaw : 45.f;
}


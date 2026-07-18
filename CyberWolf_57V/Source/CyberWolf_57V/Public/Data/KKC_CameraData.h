// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KKC_CameraData.generated.h"

/**
 * 
 */
UCLASS()
class CYBERWOLF_57V_API UKKC_CameraData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	// --- Encuadre isométrico fijo ---
	// Pitch: -50° es el sweet spot moderno (The Ascent, Hades).
	// -30° se siente "detrás del hombro", -60° muy cenital. Prueba entre -45 y -55.
	UPROPERTY(EditDefaultsOnly, Category="Isometric")
	float CameraPitch = -50.f;

	// Yaw 45° = diagonal clásica isométrica (las paredes se ven en ángulo)
	UPROPERTY(EditDefaultsOnly, Category="Isometric")
	float CameraYaw = 45.f;

	// FOV bajo + brazo largo = compresión telefoto que imita la proyección
	// isométrica real (menos distorsión de perspectiva en los bordes)
	UPROPERTY(EditDefaultsOnly, Category="Isometric")
	float FOVDefault = 35.f;
	
	UPROPERTY(EditDefaultsOnly, Category="Isometric")
	float ScreenOffsetRight = 350.f;
	
	// --- Longitudes del brazo por modo ---
	UPROPERTY(EditDefaultsOnly, Category="SpringArm")
	float ArmLengthDefault = 1600.f;

	// Modo olfato: la cámara se aleja para leer los rastros en el mapa
	UPROPERTY(EditDefaultsOnly, Category="SpringArm")
	float ArmLengthOlfato = 2100.f;

	// Instinto de caza: se acerca para la intensidad del combate
	UPROPERTY(EditDefaultsOnly, Category="SpringArm")
	float ArmLengthCaza = 1250.f;

	UPROPERTY(EditDefaultsOnly, Category="SpringArm")
	float CameraLagSpeed = 8.f;

	UPROPERTY(EditDefaultsOnly, Category="Interp")
	float InterpSpeed = 6.f;
	
};

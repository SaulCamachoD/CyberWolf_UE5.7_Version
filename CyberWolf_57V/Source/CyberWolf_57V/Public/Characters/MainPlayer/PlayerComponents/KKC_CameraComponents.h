// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KKC_CameraComponents.generated.h"


class UCameraComponent;
class UKKC_CameraData;
class USpringArmComponent;

UENUM(BlueprintType)
enum class ECameraMode : uint8
{
	Default,   // exploración normal
	Olfato,    // zoom out — lectura de rastros en el mapa
	Caza,      // zoom in — instinto de caza / combate
	Cutscene   // reservado para secuencias (ej. pull-back del beat 10)
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CYBERWOLF_57V_API UKKC_CameraComponents : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPROPERTY(EditDefaultsOnly, Category="Camera")
	TObjectPtr<UKKC_CameraData> CameraData;
 
	void InitializeCamera(USpringArmComponent* InArm, UCameraComponent* InCamera);
 
	// Llamado por otros sistemas (OlfatoComponent, CombatComponent, etc.)
	UFUNCTION(BlueprintCallable)
	void SetCameraMode(ECameraMode NewMode);
 
	ECameraMode GetCameraMode() const { return CurrentMode; }
 
	// Yaw fijo de la cámara isométrica — lo consume LocomotionComponent
	// para alinear el input de movimiento con la pantalla
	UFUNCTION(BlueprintPure)
	float GetCameraYaw() const;

private:
	UPROPERTY() TObjectPtr<USpringArmComponent> SpringArm;
	UPROPERTY() TObjectPtr<UCameraComponent>    Camera;
 
	ECameraMode CurrentMode = ECameraMode::Default;
 
	float TargetFOV       = 35.f;
	float TargetArmLength = 1600.f;
 
	virtual void TickComponent(float DeltaTime,
		ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction) override;
 
	void InterpCameraValues(float DeltaTime);

		
};

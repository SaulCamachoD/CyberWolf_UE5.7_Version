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
	ThirdPerson,
	Aiming,
	Flight,
	Cutscene
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CYBERWOLF_57V_API UKKC_CameraComponents : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPROPERTY(EditDefaultsOnly, Category="Camera")
	TObjectPtr<UKKC_CameraData> CameraData;

	void InitializeCamera(USpringArmComponent* InArm, UCameraComponent* InCamera);

	// Llamado desde Character::Look()
	void ProcessLookInput(const FVector2D& Input, bool bIsGamepad = false);

	// Llamado por otros sistemas (AimComponent, FlightComponent, etc.)
	UFUNCTION(BlueprintCallable)
	void SetCameraMode(ECameraMode NewMode);

	// Para Sprint FOV kick
	void SetSprintActive(bool bSprint);

	ECameraMode GetCameraMode() const { return CurrentMode; }

private:
	UPROPERTY() TObjectPtr<USpringArmComponent> SpringArm;
	UPROPERTY() TObjectPtr<UCameraComponent>    Camera;

	ECameraMode CurrentMode = ECameraMode::ThirdPerson;
	float       TargetFOV   = 75.f;
	float       TargetArmLength = 350.f;

	virtual void TickComponent(float DeltaTime,
		ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction) override;

	void InterpCameraValues(float DeltaTime);

		
};

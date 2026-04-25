// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerComponents/KKC_LocomotionComponent.h"
#include "PlayerComponents/KKC_AirMovementComponent.h"
#include "PlayerComponents/KKC_FlightComponent.h"
#include "PlayerComponents/KKC_UInventoryComponent.h"
#include "KKC_WolfPlayer.generated.h"


class UKKC_StatsComponent;
class UKKC_CameraComponents;
class UInputMappingContext;
class UInputAction;
class USpringArmComponent;
class UCameraComponent;

struct FInputActionValue;

UCLASS()
class CYBERWOLF_57V_API AKKC_WolfPlayer : public ACharacter
{
	GENERATED_BODY()
	
	

	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputMappingContext> InputMappingContext;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> IA_Move;
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> IA_Look;
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> IA_Sprint;
	

public:
	AKKC_WolfPlayer();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, Category="Camera")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, Category="Camera")
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, Category="Camera")
	TObjectPtr<UKKC_CameraComponents> CameraComponent;
	
	UPROPERTY(VisibleAnywhere, Category="Components")
	TObjectPtr<UKKC_LocomotionComponent> LocomotionComp;
	
	UPROPERTY(VisibleAnywhere, Category="Components")
	TObjectPtr<UKKC_UInventoryComponent> InventoryComp;

	UPROPERTY(VisibleAnywhere, Category="Components")
	TObjectPtr<UKKC_AirMovementComponent> AirMovementComp;

	UPROPERTY(VisibleAnywhere, Category="Components")  
	TObjectPtr<UKKC_FlightComponent> FlightComp;
	
	UPROPERTY(VisibleAnywhere, Category="Components")
	TObjectPtr<UKKC_StatsComponent> StatsComp;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
private:
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void StartJump(const FInputActionValue& Value);
	void StopJump(const FInputActionValue& Value);
	void StartSprint(const FInputActionValue& Value);
	void StopSprint(const FInputActionValue& Value);

};

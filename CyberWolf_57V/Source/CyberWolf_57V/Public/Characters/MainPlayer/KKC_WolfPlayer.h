// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerComponents/KKC_LocomotionComponent.h"
#include "PlayerComponents/KKC_AirMovementComponent.h"
#include "PlayerComponents/KKC_FlightComponent.h"
#include "KKC_WolfPlayer.generated.h"


class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class CYBERWOLF_57V_API AKKC_WolfPlayer : public ACharacter
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, Category="Components")
	TObjectPtr<UKKC_LocomotionComponent> LocomotionComp;

	UPROPERTY(VisibleAnywhere, Category="Components")
	TObjectPtr<UKKC_AirMovementComponent> AirMovementComp;

	UPROPERTY(VisibleAnywhere, Category="Components")  
	TObjectPtr<UKKC_FlightComponent> FlightComp;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputMappingContext> InputMappingContext;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> IA_Move;
	

public:
	AKKC_WolfPlayer();

protected:
	virtual void BeginPlay() override;

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

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/KKC_MovementData.h"
#include "KKC_LocomotionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CYBERWOLF_57V_API UKKC_LocomotionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UKKC_LocomotionComponent();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, Category="Data")
	UKKC_MovementData* MovementData;
	
	bool bIsSprinting = false;
	bool bSprint = false;
public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void InitializeComponent() override;
	void ProcessMoveInput(const FVector2D& Input) const;
	void SetSpringting(bool bSpring);
	void DrainStamina(float DeltaTime) const;
	void OnRecoveryStamina(float DeltaTime) const;
	
	
	UFUNCTION()
	void OnStaminaDepleted();
	
	

		
};

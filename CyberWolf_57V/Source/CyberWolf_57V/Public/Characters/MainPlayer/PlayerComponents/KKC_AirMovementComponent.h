#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KKC_AirMovementComponent.generated.h"


class UKKC_MovementData;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CYBERWOLF_57V_API UKKC_AirMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UKKC_AirMovementComponent();

protected:
	virtual void BeginPlay() override;
	
	UKKC_MovementData* MovementData;
	
	double TimeLeftGround;
	bool bIsHoldingJump;
	float JumpHoldTime;
	
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void RequestJump();
		
};

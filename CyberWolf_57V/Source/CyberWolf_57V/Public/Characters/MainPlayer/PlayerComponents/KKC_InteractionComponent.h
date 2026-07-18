#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KKC_InteractionComponent.generated.h"


class USphereComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CYBERWOLF_57V_API UKKC_InteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UKKC_InteractionComponent();
	void Interact();	

protected:
	
	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComp;

	
	UPROPERTY()
	AActor* CurrentInteractable;
		
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnInteractionBeginOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnInteractionEndOverlap(UPrimitiveComponent* OverlappedComponent,	AActor* OtherActor,	UPrimitiveComponent* OtherComp,	int32 OtherBodyIndex);


	

	
		
};

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/KKC_Interactable.h"
#include "KKC_PickupItem.generated.h"

class UWidgetComponent;
class URotatingMovementComponent;
class USphereComponent;
class UStaticMeshComponent;
class UKKC_ItemData;

UCLASS()
class CYBERWOLF_57V_API AKKC_PickupItem : public AActor, public IKKC_Interactable
{
	GENERATED_BODY()
	
public:	
	AKKC_PickupItem();

	virtual void Interact_Implementation(AActor* Interactor) override;

	virtual FText GetInteractText_Implementation() override;

	void ShowInteractionWidget(bool bIsVisible) const;

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UKKC_ItemData* ItemData;
		
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USphereComponent* SphereComp;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* StaticMesh;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	URotatingMovementComponent* RotatingMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UWidgetComponent* InteractionWidget;
	
protected:
	void LoadAndApplyMesh();

	
};

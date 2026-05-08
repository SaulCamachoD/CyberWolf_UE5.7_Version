#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KKC_PickupItem.generated.h"

class URotatingMovementComponent;
class USphereComponent;
class UStaticMeshComponent;
class UKKC_ItemData;

UCLASS()
class CYBERWOLF_57V_API AKKC_PickupItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AKKC_PickupItem();

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
	
protected:
	void LoadAndApplyMesh();

};

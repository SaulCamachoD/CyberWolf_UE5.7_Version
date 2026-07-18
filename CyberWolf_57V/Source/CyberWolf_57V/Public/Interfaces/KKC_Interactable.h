#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KKC_Interactable.generated.h"

UINTERFACE(MinimalAPI)
class UKKC_Interactable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CYBERWOLF_57V_API IKKC_Interactable
{
	GENERATED_BODY()

	
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(AActor* Interactor);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FText GetInteractText();
};

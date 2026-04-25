#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KKC_UInventoryComponent.generated.h"

enum class ESlots : uint8;
class UKKC_ItemData;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemEquipped, UKKC_ItemData*, Item);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemUnEquipped, UKKC_ItemData*, Item);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CYBERWOLF_57V_API UKKC_UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:		
	UKKC_UInventoryComponent();
	
	UPROPERTY(BlueprintAssignable)
	FOnItemEquipped OnItemEquipped;
	
	UPROPERTY(BlueprintAssignable)
	FOnItemUnEquipped OnItemUnEquipped;
	
	UKKC_ItemData* ItemTest;

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly , Category = "Bag")
	TArray<UKKC_ItemData*> Bag;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly , Category = "Equipment")
	TMap<ESlots, UKKC_ItemData*> EquippedItems;

public:	
	
	UFUNCTION(BlueprintCallable)
	void AddItem(UKKC_ItemData* Item);
	
	UFUNCTION(BlueprintCallable)
	void RemoveItem(UKKC_ItemData* Item);
	
	UFUNCTION(BlueprintCallable)
	void EquipItem(ESlots Slot, UKKC_ItemData* Item);
	
	UFUNCTION(BlueprintCallable)
	void UnEquipItem(UKKC_ItemData* Item);
	
	UFUNCTION(BlueprintCallable)
	UKKC_ItemData* GetEquippedItem(ESlots Slot);
	
};

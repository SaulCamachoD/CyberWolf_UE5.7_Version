#include "Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h"
#include "Data/KKC_ItemData.h"

UKKC_UInventoryComponent::UKKC_UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UKKC_UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UKKC_UInventoryComponent::AddItem(UKKC_ItemData* Item)
{
	Bag.Add(Item);
}

void UKKC_UInventoryComponent::RemoveItem(UKKC_ItemData* Item)
{
	Bag.Remove(Item);
}

void UKKC_UInventoryComponent::EquipItem(ESlots Slot, UKKC_ItemData* Item)
{	
	OnItemEquipped.Broadcast(Item);
	EquippedItems.Add(Slot,Item);
}

void UKKC_UInventoryComponent::UnEquipItem(UKKC_ItemData* Item)
{	
	OnItemUnEquipped.Broadcast(Item);
	EquippedItems.Remove(Item->Slot);
}

UKKC_ItemData* UKKC_UInventoryComponent::GetEquippedItem(ESlots Slot)
{	
	UKKC_ItemData** FoundItem = EquippedItems.Find(Slot);	
	return *FoundItem ;
}





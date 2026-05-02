#include "Characters/MainPlayer/PlayerComponents/KKC_UInventoryComponent.h"
#include "Data/KKC_ItemData.h"

UKKC_UInventoryComponent::UKKC_UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UKKC_UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	
	ItemTest = NewObject<UKKC_ItemData>();
	ItemTest->Name = FText::FromString("Sword");
	ItemTest->Slot = ESlots::LeftArm;
	
	AddItem(ItemTest);
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
	{
		EquipItem(ESlots::LeftArm, ItemTest);
	}, 1.0f, false);
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
	EquippedItems.Add(Slot, Item);
    
	UE_LOG(LogTemp, Warning, TEXT(">>> A punto de hacer Broadcast OnItemEquipped <<<"));
	OnItemEquipped.Broadcast(Item);
	UE_LOG(LogTemp, Warning, TEXT(">>> Broadcast completado <<<"));
}

void UKKC_UInventoryComponent::UnEquipItem(UKKC_ItemData* Item)
{	
	EquippedItems.Remove(Item->Slot);
	OnItemUnEquipped.Broadcast(Item);
}

UKKC_ItemData* UKKC_UInventoryComponent::GetEquippedItem(ESlots Slot)
{	
	UKKC_ItemData** FoundItem = EquippedItems.Find(Slot);	
	return *FoundItem ;
}





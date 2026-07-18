#include "Characters/MainPlayer/PlayerComponents/KKC_InteractionComponent.h"

#include "Components/SphereComponent.h"
#include "Interfaces/KKC_Interactable.h"
#include "Objects/KKC_PickupItem.h"

UKKC_InteractionComponent::UKKC_InteractionComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionSphere"));
	SphereComp ->InitSphereRadius(250.f);
	SphereComp ->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp ->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp ->SetCollisionResponseToChannel(ECC_WorldDynamic,ECR_Overlap);

}


void UKKC_InteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	if (AActor* Owner = GetOwner())
	{
		SphereComp->AttachToComponent(
		Owner->GetRootComponent(),
		FAttachmentTransformRules::KeepRelativeTransform);
	}

	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &UKKC_InteractionComponent::OnInteractionBeginOverlap);
	SphereComp->OnComponentEndOverlap.AddDynamic(this, &UKKC_InteractionComponent::OnInteractionEndOverlap);
	
}

void UKKC_InteractionComponent::OnInteractionBeginOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor) return;

	if (OtherActor->Implements<UKKC_Interactable>())
	{
		CurrentInteractable = OtherActor;

		FString Text =
			IKKC_Interactable::Execute_GetInteractText(
				OtherActor).ToString();

		GEngine->AddOnScreenDebugMessage(
			1,
			5.f,
			FColor::Green,
			Text);

		AKKC_PickupItem* Item = Cast<AKKC_PickupItem>(OtherActor);
		if (!Item)return;

		Item->ShowInteractionWidget(true);
		
	}
}

void UKKC_InteractionComponent::OnInteractionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AKKC_PickupItem* Item = Cast<AKKC_PickupItem>(OtherActor);
	if (!Item)return;

	Item->ShowInteractionWidget(false);
	if (OtherActor == CurrentInteractable)
	{
		CurrentInteractable = nullptr;
	}
}

void UKKC_InteractionComponent::Interact()
{
	if (!CurrentInteractable) return;

	IKKC_Interactable::Execute_Interact(
		CurrentInteractable,
		GetOwner());
}




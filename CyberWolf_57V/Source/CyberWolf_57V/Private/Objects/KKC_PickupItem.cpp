// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/KKC_PickupItem.h"

#include "Characters/MainPlayer/KKC_WolfPlayer.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Data/KKC_ItemData.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Misc/MapErrors.h"
#include "Slate/SGameLayerManager.h"

// Sets default values
AKKC_PickupItem::AKKC_PickupItem()
{	
	PrimaryActorTick.bCanEverTick = false;
	
	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	SphereComp->InitSphereRadius(80.0f);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_WorldDynamic,ECR_Overlap);
	SetRootComponent(SphereComp);
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetupAttachment(RootComponent);
	StaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>("RotatingMovement");
	RotatingMovement->RotationRate = FRotator(0.0f, 180.0f, 0.0f);

	InteractionWidget = CreateDefaultSubobject<UWidgetComponent>("InteractionWidget");
	InteractionWidget->SetupAttachment(RootComponent);
	InteractionWidget->SetWidgetSpace(EWidgetSpace::Screen);
	InteractionWidget->SetDrawSize(FVector2D(200.f, 50.f));
	InteractionWidget -> SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	
}


void AKKC_PickupItem::BeginPlay()
{
	Super::BeginPlay();
	LoadAndApplyMesh();
	ShowInteractionWidget(false);
	
}

void AKKC_PickupItem::Interact_Implementation(AActor* Interactor)
{
	AKKC_WolfPlayer* Player = Cast<AKKC_WolfPlayer>(Interactor);
	if (!Player) return;

	UKKC_UInventoryComponent* Inventory = Player->FindComponentByClass<UKKC_UInventoryComponent>();
	if (!Inventory) return;

	Inventory->AddItem(ItemData);

	UE_LOG(LogTemp, Warning, TEXT("Item added"));
	Destroy();

}

FText AKKC_PickupItem::GetInteractText_Implementation()
{
	return FText::FromString("Press E Key To Add");
}


void AKKC_PickupItem::LoadAndApplyMesh()
{
	if (!ItemData) return;
	if (ItemData->StaticMesh.IsNull()) return;
    
	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
    
	Streamable.RequestAsyncLoad(
		ItemData->StaticMesh.ToSoftObjectPath(),
		FStreamableDelegate::CreateLambda([this]()
		{
			if (ItemData && StaticMesh)
			{
				UStaticMesh* LoadedMesh = ItemData->StaticMesh.Get();
				if (LoadedMesh)
				{
					StaticMesh->SetStaticMesh(LoadedMesh);
					StaticMesh->SetWorldScale3D(ItemData->Scale);
				}
			}
		})
	);
}

void AKKC_PickupItem::ShowInteractionWidget(const bool bIsVisible) const
{
	InteractionWidget->SetVisibility(bIsVisible);
}


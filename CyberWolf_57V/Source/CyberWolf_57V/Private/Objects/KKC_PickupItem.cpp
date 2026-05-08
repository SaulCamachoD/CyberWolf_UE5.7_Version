// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/KKC_PickupItem.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Data/KKC_ItemData.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Misc/MapErrors.h"

// Sets default values
AKKC_PickupItem::AKKC_PickupItem()
{	
	PrimaryActorTick.bCanEverTick = false;
	
	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	SphereComp->InitSphereRadius(80.0f);
	SphereComp->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	SetRootComponent(SphereComp);
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetupAttachment(RootComponent);
	StaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>("RotatingMovement");
	RotatingMovement->RotationRate = FRotator(0.0f, 180.0f, 0.0f);
	
}

// Called when the game starts or when spawned
void AKKC_PickupItem::BeginPlay()
{
	Super::BeginPlay();
	LoadAndApplyMesh();
	
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


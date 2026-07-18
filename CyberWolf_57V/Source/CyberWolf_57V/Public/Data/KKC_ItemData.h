// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "KKC_ItemData.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8
{
	Equippable   UMETA(DisplayName = "Equippable"),   
	Consumable   UMETA(DisplayName = "Consumable"),   
	Companion    UMETA(DisplayName = "Companion"),   
	KeyItem      UMETA(DisplayName = "KeyItem"),
	Misc         UMETA(DisplayName = "Misc"), 
};

UENUM(BlueprintType)
enum class ESlots: uint8
{
	Head UMETA(DisplayName = "Head"),
	Torso UMETA(DisplayName = "Torso"),
	LeftArm UMETA(DisplayName = "LeftArm"),
	RightArm UMETA(DisplayName = "RightArm"),
	Back UMETA(DisplayName = "Back"),
	Legs UMETA(DisplayName = "Legs"),
	Hands UMETA(DisplayName = "Hands"),	
	Storage UMETA(DisplayName = "Storage"),
	
};

UENUM(BlueprintType)
enum class EItemRarity: uint8
{
	Common UMETA(DisplayName = "Common"),
	Rare UMETA(DisplayName = "Rare"),
	Epic UMETA(DisplayName = "Epic"),
	Legendary UMETA(DisplayName = "Legendary"),
};

UENUM(BlueprintType)
enum class EStatsType: uint8
{	
	None UMETA(DisplayName = "None"),
	MaxHealth UMETA(DisplayName = "MaxHealth"),
	Speed UMETA(DisplayName = "Speed"),
	FlightSpeed UMETA(DisplayName = "FlightSpeed"),
	Strength UMETA(DisplayName = "Strength"),
	Damage UMETA(DisplayName = "Damage"),
	
};

UENUM(BlueprintType)
enum class EModifierOperation: uint8
{
	Addition UMETA(DisplayName = "Addition"),
	Subtraction UMETA(DisplayName = "Subtraction")
};

USTRUCT(BlueprintType)
struct FStatsModifier
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatsType StatType = EStatsType::None;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = 0.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModifierOperation Operation = EModifierOperation::Addition;
};

UCLASS(BlueprintType)
class CYBERWOLF_57V_API UKKC_ItemData : public UDataAsset
{
	GENERATED_BODY()
	
	public:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Basic Info")
	FText Name;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Basic Info")
	FText Description;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Basic Info")
	TSoftObjectPtr<UTexture2D> Icon;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Classification")
	ESlots Slot;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Classification")
	EItemRarity Rarity;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Classification")
	EItemType ItemType;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Classification")
	FGameplayTag ItemTag;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Stats")
	TArray<FStatsModifier> Modifiers;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Visuals")
	TSoftObjectPtr<UStaticMesh> StaticMesh;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Visuals")
	FVector Scale = FVector(1.0f, 1.0f, 1.0f);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Visuals")
	TSoftObjectPtr<USoundBase> PickUpSound;
	
};

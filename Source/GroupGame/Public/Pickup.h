// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

/**
 * 
 */
UCLASS()
class GROUPGAME_API APickup : public AActor
{
	GENERATED_BODY()
	
public:

	APickup(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsActive;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	class USphereComponent* BaseCollisionComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	class UStaticMeshComponent* PickupMesh;

	UFUNCTION(BlueprintNativeEvent)
	void OnPickedUp();	
	
};

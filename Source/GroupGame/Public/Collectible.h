// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Pickup.h"
#include "Collectible.generated.h"

/**
 * 
 */
UCLASS()
class GROUPGAME_API ACollectible : public APickup
{
	GENERATED_BODY()
	
public:

	//this overrides the OnPickedUp function. We use the underscore Implementation because it is a native BlueprintNativeEvent.
	void OnPickedUp_Implementation() override;

	//ACollectible(const FObjectInitializer& ObjectInitializer);
	
	
};

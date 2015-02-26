// Fill out your copyright notice in the Description page of Project Settings.

#include "GroupGame.h"
#include "Collectible.h"

void ACollectible::OnPickedUp_Implementation()
{
	//call the parent implementation of OnPickedUp first
	Super::OnPickedUp_Implementation();

	//Destroy the battery
	Destroy();
}



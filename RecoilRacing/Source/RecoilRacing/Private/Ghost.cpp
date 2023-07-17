// Fill out your copyright notice in the Description page of Project Settings.


#include "Ghost.h"

// Sets default values
AGhost::AGhost()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGhost::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGhost::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AGhost::TryIncrement() 
{
	if (GhostPositions.Num() <= CurrentTargetIndex + 1) 
	{
		return false;
	}

	CurrentTargetIndex++;
	NextTargetPosition.Set(GhostPositions[CurrentTargetIndex].X, GhostPositions[CurrentTargetIndex].Y, GhostPositions[CurrentTargetIndex].Z);
	NextTargetUpdateTime = GhostPositions[CurrentTargetIndex].W;
	return true;
}

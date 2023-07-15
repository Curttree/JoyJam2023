// Fill out your copyright notice in the Description page of Project Settings.


#include "BackgroundMusicManager.h"

// Sets default values
ABackgroundMusicManager::ABackgroundMusicManager()
{
	Music = CreateDefaultSubobject<UAudioComponent>(TEXT("Background Music"));
 	// Set this actor to call Tick() every frame.  Turned off until needed.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void ABackgroundMusicManager::BeginPlay()
{
	Super::BeginPlay();
	if (Music != nullptr && Music->Sound != nullptr && !Music->IsPlaying())
	{
		// Not scalable for different background music, but the version using duration wasn't working,
		// and I don't have time to debug it.
		Music->Play(FMath::RandRange(0.f, 1000.f));
	}
}

// Called every frame
void ABackgroundMusicManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


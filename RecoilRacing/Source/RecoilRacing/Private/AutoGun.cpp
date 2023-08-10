// Fill out your copyright notice in the Description page of Project Settings.


#include "AutoGun.h"

// Sets default values for this component's properties
UAutoGun::UAutoGun()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAutoGun::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAutoGun::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


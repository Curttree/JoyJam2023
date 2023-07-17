// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ghost.generated.h"

UCLASS()
class RECOILRACING_API AGhost : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGhost();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	bool TryIncrement();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	// Likely shouldn't be public. Will move later (time permitting).
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FVector4> GhostPositions;
protected:
	UPROPERTY(BlueprintReadOnly)
	int CurrentTargetIndex;
	UPROPERTY(BlueprintReadOnly)
	float NextTargetUpdateTime;
	UPROPERTY(BlueprintReadOnly)
	FVector NextTargetPosition;
};

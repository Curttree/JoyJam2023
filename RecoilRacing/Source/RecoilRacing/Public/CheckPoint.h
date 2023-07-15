// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "CheckPoint.generated.h"

/**
 * 
 */
UCLASS()
class RECOILRACING_API ACheckPoint : public ATriggerSphere
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	bool TryActivate();

	UFUNCTION(BlueprintCallable)
	bool IsActive() 
	{
		return bActivated;
	}

	UFUNCTION(BlueprintCallable)
	int GetCheckPointIndex()
	{
		return CheckPointIndex;
	}

protected:
	UPROPERTY(BlueprintReadOnly)
	bool bActivated;

	// Order for which to prioritize the checkpoint. The active checkpoint with the highest index will be used for respawning.
	// By no means the best/most efficient solution, but it is a game jam project.
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int CheckPointIndex = 0;
};

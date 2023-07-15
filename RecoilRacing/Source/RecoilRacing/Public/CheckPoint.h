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
protected:
	UPROPERTY(BlueprintReadOnly)
	bool bActivated;
};

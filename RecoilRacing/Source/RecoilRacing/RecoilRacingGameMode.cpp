// Copyright Epic Games, Inc. All Rights Reserved.

#include "RecoilRacingGameMode.h"
#include "RecoilRacingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARecoilRacingGameMode::ARecoilRacingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

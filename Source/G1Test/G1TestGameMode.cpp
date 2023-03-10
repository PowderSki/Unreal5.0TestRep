// Copyright Epic Games, Inc. All Rights Reserved.

#include "G1TestGameMode.h"
#include "G1TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AG1TestGameMode::AG1TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

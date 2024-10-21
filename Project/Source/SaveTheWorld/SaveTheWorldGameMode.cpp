// Copyright Epic Games, Inc. All Rights Reserved.

#include "SaveTheWorldGameMode.h"
#include "SaveTheWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASaveTheWorldGameMode::ASaveTheWorldGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

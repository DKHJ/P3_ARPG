// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "P3_ARPGGameMode.h"
#include "P3_ARPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AP3_ARPGGameMode::AP3_ARPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

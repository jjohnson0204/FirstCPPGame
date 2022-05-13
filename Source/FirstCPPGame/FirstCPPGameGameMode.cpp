// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstCPPGameGameMode.h"
#include "FirstCPPGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstCPPGameGameMode::AFirstCPPGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

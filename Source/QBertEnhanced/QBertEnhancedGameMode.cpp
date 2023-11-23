// Copyright Epic Games, Inc. All Rights Reserved.

#include "QBertEnhancedGameMode.h"
#include "QBertEnhancedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AQBertEnhancedGameMode::AQBertEnhancedGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

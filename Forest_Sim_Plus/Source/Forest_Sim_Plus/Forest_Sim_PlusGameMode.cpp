// Copyright Epic Games, Inc. All Rights Reserved.

#include "Forest_Sim_PlusGameMode.h"
#include "Forest_Sim_PlusCharacter.h"
#include "UObject/ConstructorHelpers.h"

AForest_Sim_PlusGameMode::AForest_Sim_PlusGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

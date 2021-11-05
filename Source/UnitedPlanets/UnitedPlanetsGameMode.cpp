// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnitedPlanetsGameMode.h"
#include "UnitedPlanetsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnitedPlanetsGameMode::AUnitedPlanetsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/UPG_BP/BP_UnitedPlanetsCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

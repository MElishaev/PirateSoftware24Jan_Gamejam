// Copyright Epic Games, Inc. All Rights Reserved.

#include "PSGameJamGameMode.h"
#include "PSGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

APSGameJamGameMode::APSGameJamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

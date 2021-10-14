// Copyright Epic Games, Inc. All Rights Reserved.

#include "AndroidTopDown4271GameMode.h"
#include "AndroidTopDown4271PlayerController.h"
#include "AndroidTopDown4271Character.h"
#include "UObject/ConstructorHelpers.h"

AAndroidTopDown4271GameMode::AAndroidTopDown4271GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAndroidTopDown4271PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
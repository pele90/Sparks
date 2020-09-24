// Copyright Epic Games, Inc. All Rights Reserved.

#include "SparksGameMode.h"
#include "SparksCharacter.h"

ASparksGameMode::ASparksGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ASparksCharacter::StaticClass();	
}

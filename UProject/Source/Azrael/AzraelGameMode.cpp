// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Azrael.h"
#include "AzraelGameMode.h"
#include "AzraelPawn.h"

AAzraelGameMode::AAzraelGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AAzraelPawn::StaticClass();
}


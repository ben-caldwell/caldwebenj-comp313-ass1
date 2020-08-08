// Copyright Epic Games, Inc. All Rights Reserved.

#include "comp313_ass1GameMode.h"
#include "comp313_ass1Ball.h"

Acomp313_ass1GameMode::Acomp313_ass1GameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = Acomp313_ass1Ball::StaticClass();
}

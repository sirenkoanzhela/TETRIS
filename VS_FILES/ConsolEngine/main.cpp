// Copyright 2009-2014 Blam Games, Inc. All Rights Reserved.

#include "GameApplication.h"

void main ()
{
	GameApplication*gameApplicationMain = GameApplication::GetInstance();
	gameApplicationMain->Run();
}

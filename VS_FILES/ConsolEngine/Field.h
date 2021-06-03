#pragma once
#include "BaseApp.h"
class Field
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position;
public:
	Field(BaseApp* _game);
};


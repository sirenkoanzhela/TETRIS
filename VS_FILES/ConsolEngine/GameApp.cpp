#include "GameApp.h"
#include <ctime>

GameApp::GameApp(): mFieldAbsoluteSizeX(16), mFieldAbsoluteSizeY(21), mFieldSizeX(15), mFieldSizeY(20)
{
	fieldDraw();
}

void GameApp::KeyPressed(int btnCode)
{
	if (btnCode == 32) //space
	{
		//change figure position
	}
		
	else if (btnCode == 115) //s
	{
		dy++;
	}
		
	else if (btnCode == 97) //a (left)
	{
		if (dx > 1) 
		{
			dxOld = dx;
			dx--;
		}
	}
		
	else if (btnCode == 100) //d (right)
	{
		if (dx < 14)
		{
			dxOld = dx;
			dx++;
		}
	}
		
}

void GameApp::UpdateF(float deltaTime)
{
	timer += deltaTime;    //step move
	if (timer > 0.3)
	{
		dy++;
		timer = 0;
	}
	else timerStop = 0.0;

	for (int i = 0; i < 4; i++)
	{
		a[i].x += dx;
		a[i].y += dy;
	}
	if (dy == 18) dy = 0;  //checking: if out of border (vert)

	dyOld = dy;
	//dy++;

	for (int i = 0; i < 4; i++)
	{
		SetChar((figures[2][i] % 2) + dxOld, (figures[2][i] / 2) + dyOld, L' ');
		SetChar((figures[2][i] % 2) + dx, (figures[2][i] / 2) + dy, L'*');
	}
}

int GameApp::figureGenerator()
{
	srand(time(0));
	return 0; //to do
}

void GameApp::fieldDraw()
{
	for (int i = 0; i <= mFieldAbsoluteSizeX; ++i) //horizontal lines
	{
		SetChar(i, 0, L'#');
		SetChar(i, mFieldAbsoluteSizeY, L'#');
	}
	for (int i = 0; i < mFieldAbsoluteSizeY; ++i) //vertical lines
	{
		SetChar(0, i + 1, L'#');
		SetChar(mFieldAbsoluteSizeX, i + 1, L'#');
	}
}

void GameApp::figureCreator()
{
	figureDraw(figureGenerator());
}

void GameApp::figureDraw(int figureType)
{
	for (int i = 0; i < 4; i++)
	{
		SetChar((figures[figureType][i] % 2) + 7, (figures[figureType][i] / 2) + 1, L'*');
	}
}



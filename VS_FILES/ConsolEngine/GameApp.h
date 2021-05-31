#pragma once


#include "BaseApp.h"
#include <cstdlib>
#include <vector>


class GameApp : public BaseApp
{
	typedef BaseApp Parent;
	float timer = 0.0;
	float timerStop = 0.0;
	const int mFieldAbsoluteSizeX;
	const int mFieldAbsoluteSizeY;
	const int mFieldSizeX;
	const int mFieldSizeY;

	int dx = 0;
	int dxOld = 0;
	int dy = 0;
	int dyOld = 0;

	vector<int> queue;

	int figures[7][4] =
	{
		1,3,5,7,
		2,4,5,7,
		3,5,4,6,
		3,5,4,7,
		2,3,5,7,
		3,5,7,9,
		2,3,4,5,
	};

	struct Point
	{
		int x, y;
		
	}a[4], b[4];

	int figureGenerator();
	void fieldDraw();
	void figureCreator();
	void figureDraw(int figureType);

public:
	GameApp();
	virtual void KeyPressed(int btnCode);
	virtual void UpdateF(float deltaTime);
};
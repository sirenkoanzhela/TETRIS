#pragma once
#include "BaseApp.h"
#include "Field.h"
class GameApplication : public BaseApp
{
private:
	Field * m_field;

private:
	GameApplication();
	static GameApplication* gameApplication;
public:
	GameApplication(const GameApplication&) = delete;
	GameApplication(GameApplication&&) = delete;
	GameApplication& operator = (const GameApplication&) = delete;
	GameApplication& operator = (GameApplication&&) = delete;

	static GameApplication* GetInstance();

	virtual void KeyPressed(int btnCode);
	virtual void UpdateF(float deltaTime);

	void CreateField();

	~GameApplication();
};

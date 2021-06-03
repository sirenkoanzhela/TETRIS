#include "GameApplication.h"


GameApplication* GameApplication::gameApplication = nullptr;
GameApplication::GameApplication() : BaseApp(25,25), m_field(nullptr)
{
	std::cout << "Default constructor was called." << std::endl;
}
GameApplication* GameApplication::GetInstance()
{
	if (gameApplication == nullptr)
	{
		std::cout << "Created new instance of GameApplication class." << std::endl;
		return gameApplication = new GameApplication;
	}
	std::cout << "Instance of GameApplication class already exists." << std::endl;
	return gameApplication;
}

void GameApplication::KeyPressed(int btnCode)
{
	// Handling the keystrokes.
}

void GameApplication::UpdateF(float deltaTime)
{
	GameApplication::CreateField();
	delete m_field;
}

void GameApplication::CreateField()
{
	m_field = new Field(this);
}

GameApplication::~GameApplication()
{
	//delete map;
}

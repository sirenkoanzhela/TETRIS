#include "Field.h"

Field::Field(BaseApp* _game)
{
	for (int x = 0; x < _game->X_SIZE + 1; x++)//
	{
		for (int y = 0; y < _game->Y_SIZE + 1; y++)//
		{
			if ((x == 0) || (x == _game->X_SIZE) || (x == _game->X_SIZE - 9) || (y == 0) || (y == _game->Y_SIZE - 5) || (y == _game->Y_SIZE))
			{
				_game->SetChar(x, y, L'#');
			}
		}
	}
}

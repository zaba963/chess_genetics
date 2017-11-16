#include "stdafx.h"
#include "GameMen.h"


GameMen::GameMen(){}

GameMen & GameMen::operator=(const GameMen &)
{
	return get();
}

GameMen::~GameMen(){}

GameMen & GameMen::get()
{
	static GameMen s;
	return s;
}

void GameMen::game(game_type type, size_t game_iteration)
{
	switch (type)
	{
	case GameMen::genetic:
		//TODO:
		break;
	case GameMen::singleplayer:
		//TODO:
		break;
	case GameMen::multiplayer:
		//TODO:
		break;
	default:
		break;
	}
}

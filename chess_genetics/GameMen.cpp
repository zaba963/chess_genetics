#include "stdafx.h"
#include "GameMen.h"
#include "PlayerMag.h"
#include "BoardMag.h"


GameMen::GameMen(){}

GameMen & GameMen::operator=(const GameMen &)
{
	return get();
}

GameMen::~GameMen(){}

void GameMen::playGenetic(size_t game_iteration)
{
	//TODO:
	PlayerMag::get().generatePlayersGenetics(5000);//25 000 000 games in generation
	for (size_t i = 0; i < game_iteration; i++) {
		BoardMag::get().creteBoards(8);
		generateTurns(5000);
		while (turns.size() > 0) {
			//play games
			turns.pop_back();
		}
		//get scores
		//get statistics
		//cut population
		//breed population
	}
	//save game status in file
}

void GameMen::playSingle()
{
	//TODO:
}

void GameMen::playMulti()
{
	//TODO:
}

void GameMen::generateTurns(size_t s)
{
	for (size_t i = 0; i < s; i++)
		for (size_t j = 0; j < s; j++)
			this->turns.push_back({i, j});
}

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
		playGenetic(game_iteration);
		break;
	case GameMen::singleplayer:
		playSingle();
		break;
	case GameMen::multiplayer:
		playMulti();
		break;
	default:
		break;
	}
}

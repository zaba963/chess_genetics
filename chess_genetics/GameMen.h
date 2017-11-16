#include <vector>

#ifndef CHG_GAME_MEN
#define CHG_GAME_MEN

struct players_turn {
	size_t player_num_1;
	size_t player_num_2;
};

class GameMen
{
	GameMen();
	GameMen(const GameMen &);
	GameMen& operator=(const GameMen&);
	~GameMen();

	void playGenetic(size_t game_iteration);
	void playSingle();
	void playMulti();

	std::vector<players_turn> turns;

	void generateTurns(size_t s);

public:
	enum game_type{genetic, singleplayer, multiplayer};

	static GameMen& get();

	void game(game_type type, size_t game_iteration = 0);
};

#endif
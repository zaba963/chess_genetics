#ifndef CHG_GAME_MEN
#define CHG_GAME_MEN

class GameMen
{
	GameMen();
	GameMen(const GameMen &);
	GameMen& operator=(const GameMen&);
	~GameMen();
public:
	enum game_type{genetic, singleplayer, multiplayer};

	static GameMen& get();

	void game(game_type type, size_t game_iteration = 0);
};

#endif
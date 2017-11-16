#include "Player.h"
#include "PlayerGenetics.h"
#include "utility.h"

#ifndef CHG_PLAYER_FACTORY
#define CHG_PLAYER_FACTORY

class PlayerFac
{
public:
	PlayerFac();
	~PlayerFac();

	static Player* makePlayer(player_type type);
};

#endif
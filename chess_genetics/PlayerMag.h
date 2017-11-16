#include <vector>
#include "Player.h"

#ifndef CHG_PLAYER_MAG
#define CHG_PLAYER_MAG

class PlayerMag
{
	PlayerMag();
	PlayerMag(const PlayerMag &);
	PlayerMag& operator=(const PlayerMag&);
	~PlayerMag();

	std::vector<Player*> players;
public:
	static PlayerMag& get();

	void generatePlayersGenetics(size_t e);
};

#endif
#include "stdafx.h"
#include "PlayerMag.h"
#include "Player.h"
#include "PlayerGenetics.h"
#include "PlayerFac.h"
#include "utility.h"20


PlayerMag::PlayerMag(){}

PlayerMag & PlayerMag::operator=(const PlayerMag &)
{
	return get();
}

PlayerMag::~PlayerMag(){}

PlayerMag & PlayerMag::get()
{
	static PlayerMag s;
	return s;
}

void PlayerMag::generatePlayersGenetics(size_t e)
{
	for (size_t i = 0; i < e; i++) {
		players.push_back(PlayerFac::makePlayer(player_type::genetics));
	}
}

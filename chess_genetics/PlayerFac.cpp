#include "stdafx.h"
#include "PlayerFac.h"
#include "Player.h"
#include "PlayerGenetics.h"

PlayerFac::PlayerFac(){}

PlayerFac::~PlayerFac(){}

Player * PlayerFac::makePlayer(player_type type)
{
	//TODO:
	return new Player();
}

#include "stdafx.h"
#include "PlayerMag.h"


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

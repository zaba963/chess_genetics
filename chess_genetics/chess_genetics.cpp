// chess_genetics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GameMen.h"

int main()
{
	GameMen::get().game(GameMen::genetic, 10);
    return 0;
}


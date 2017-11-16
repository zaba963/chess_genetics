#include "stdafx.h"
#include "BoardMag.h"

BoardMag::BoardMag(){}

BoardMag & BoardMag::operator=(const BoardMag &)
{
	return get();
}

BoardMag::~BoardMag(){}

BoardMag & BoardMag::get()
{
	static BoardMag s;
	return s;
}

void BoardMag::creteBoards(size_t s)
{
	for (size_t i = 0; i < s; i++)
	{
		b.push_back(BoardFac::creteBoard());
	}
}

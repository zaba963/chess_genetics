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

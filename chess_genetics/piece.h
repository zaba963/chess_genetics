#include "utility.h"

#ifndef CHG_PIECE
#define CHG_PIECE

class Piece
{
protected:
	size_t points;
public:
	Piece();
	~Piece();

	size_t getPoints();

	virtual bool checkMove(const posytion p_to_move, const ch_board* b) = 0;
};

#endif
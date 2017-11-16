#include "Piece.h"

#ifndef CHG_PIECE_KNIGHT
#define CHG_PIECE_KNIGHT

class Knight :
	public Piece
{
public:
	Knight();
	~Knight();
	bool checkMove(const posytion p_to_move, const ch_board* b);
};

#endif
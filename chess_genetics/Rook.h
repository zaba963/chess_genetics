#include "Piece.h"

#ifndef CHG_PIECE_ROOK
#define CHG_PIECE_ROOK

class Rook :
	public Piece
{
public:
	Rook();
	~Rook();
	bool checkMove(const posytion p_to_move, const ch_board* b);
};

#endif
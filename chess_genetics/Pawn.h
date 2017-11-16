#include "Piece.h"

#ifndef CHG_PIECE_PAWN
#define CHG_PIECE_PAWN

class Pawn :
	public Piece
{
public:
	Pawn();
	~Pawn();
	bool checkMove(const posytion p_to_move, const ch_board* b);
};

#endif
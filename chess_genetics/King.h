#include "Piece.h"

#ifndef CHG_PIECE_KING
#define CHG_PIECE_KING

class King :
	public Piece
{
public:
	King();
	~King();
	bool checkMove(const posytion p_to_move, const ch_board* b);
};

#endif
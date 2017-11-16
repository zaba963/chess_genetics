#include "Piece.h"

#ifndef CHG_PIECE_QUEEN
#define CHG_PIECE_QUEEN

class Queen :
	public Piece
{
public:
	Queen();
	~Queen();
	bool checkMove(const posytion p_to_move, const ch_board* b);
};

#endif
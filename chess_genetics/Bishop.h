#include "Piece.h"

#ifndef CHG_PIECE_BISHOP
#define CHG_PIECE_BISHOP

class Bishop :
	public Piece
{
public:
	Bishop();
	~Bishop();
	bool checkMove(const posytion p_to_move, const ch_board* b);
};

#endif
#include "Board.h"

#ifndef CHG_BOARD_FAC
#define CHG_BOARD_FAC

class BoardFac
{
public:
	BoardFac();
	~BoardFac();

	static Board* creteBoard();
};

#endif
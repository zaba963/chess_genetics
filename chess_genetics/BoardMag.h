#include <vector>
#include "Board.h"
#include "BoardFac.h"

#ifndef CHG_BOARD_MAG
#define CHG_BOARD_MAG

class BoardMag
{
	BoardMag();
	BoardMag(const BoardMag &);
	BoardMag& operator=(const BoardMag&);
	~BoardMag();

	std::vector<Board*> b;
public:
	static BoardMag& get();

	void creteBoards(size_t s);
};

#endif
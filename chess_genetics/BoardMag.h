#ifndef CHG_BOARD_MAG
#define CHG_BOARD_MAG

class BoardMag
{
	BoardMag();
	BoardMag(const BoardMag &);
	BoardMag& operator=(const BoardMag&);
	~BoardMag();
public:
	static BoardMag& get();
};

#endif
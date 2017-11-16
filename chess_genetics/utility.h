#ifndef CHG_UTILITY
#define CHG_UTILITY

enum player_type{genetics, normal};

enum piece_type {B, K, k, Q, p, R, n};
enum ch_color {white, black};

struct square {
	piece_type p;
	ch_color c;
};

struct posytion{
	size_t x;
	size_t y;
};

struct ch_board {
	square b[8][8];
	size_t white_score;
	size_t black_score;
};

#endif
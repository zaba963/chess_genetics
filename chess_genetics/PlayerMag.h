#ifndef CHG_PLAYER_MAG
#define CHG_PLAYER_MAG

class PlayerMag
{
	PlayerMag();
	PlayerMag(const PlayerMag &);
	PlayerMag& operator=(const PlayerMag&);
	~PlayerMag();
public:
	static PlayerMag& get();
};

#endif
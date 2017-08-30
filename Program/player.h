#ifndef __PLAYER_H__
#def __PLAYER_H__

#include <string>
#include "piece.h"

struct Player{
	struct Piece * pieces[40];
	char colour;
	Player(char clr);
	~Player();
}
#endif

#ifndef __BOMB_H__
#define __BOMB_H__

#include "piece.h"
#include "tile.h"

class Bomb : public Piece{
	public:
	Bomb(int colour,int type);
	~Bomb();
	void display();
}

#endif 

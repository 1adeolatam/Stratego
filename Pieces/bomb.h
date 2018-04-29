#ifndef __BOMB_H__
#define __BOMB_H__

#include "piece.h"
#include "tile.h"

class Bomb : public Piece{
	public:
	Bomb(char c);
	~Bomb();
	int value();
	bool canMoveTo(Tile& trgt);
	void display();	
}

#endif 

#ifndef __WATER_H__
#define __WATER_H__

#include "piece.h"
#include "tile.h"

class Water : public Piece{
	public:
	Water(char c);
	~Water();
	int value();
	bool canMoveTo(Tile& trgt);
	void display();	
}

#endif 

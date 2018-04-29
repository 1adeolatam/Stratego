#ifndef __LIEUTENANT_H__
#define __LIEUTENANT_H__

#include "piece.h"
#include "tile.h"

class Lieutenant : public Piece{
	public:
	Lieutenant(char c);
	~Lieutenant();
	int value();
	bool canMoveTo(Tile& trgt);
	void display();	
}

#endif 

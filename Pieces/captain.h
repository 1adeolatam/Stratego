#ifndef __CAPTAIN_H__
#define __CAPTAIN_H__

#include "piece.h"
#include "tile.h"

class Captain : public Piece{
	public:
	Captain(char c);
	~Captain();
	int value();
	bool canMoveTo(Tile& trgt);
	void display();	
}

#endif 

#ifndef __COLONEL_H__
#define __COLONEL_H__

#include "piece.h"
#include "tile.h"

class Colonel : public Piece{
	public:
	Colonel(char c);
	~Colonel();
	int value();
	bool canMoveTo(Tile& trgt);
	void display();	
}

#endif 

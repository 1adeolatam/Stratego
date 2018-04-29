#ifndef __FLAG_H__
#define __FLAG_H__

#include "piece.h"
#include "tile.h"

class Flag : public Piece{
	public:
	Flag(char c);
	~Flag();
	int value();
	bool canMoveTo(Tile& trgt);
	void display();	
}

#endif 

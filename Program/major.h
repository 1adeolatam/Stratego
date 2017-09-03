#ifndef __MAJOR_H__
#define __MAJOR_H__

#include "piece.h"
#include "tile.h"

class Major : public Piece{
	public:
	Major(char c);
	~Major();
	int value();
	bool canMoveTo(Tile& trgt);
	void display();	
}

#endif 

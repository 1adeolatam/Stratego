#ifndef __GENERAL_H__
#define __GENERAL_H__

#include "piece.h"
#include "tile.h"

class General : public Piece{
	public:
	General(char c);
	~General();
	int value();
	bool canMoveTo(Tile& trgt);
	void display();	
}

#endif 

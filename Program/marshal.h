#ifndef __MARSHAL_H__
#define __MARSHAL_H__

#include "piece.h"
#include "tile.h"

class Marshal : public Piece{
	public:
	Marshal(char c);
	~Marshal();
	int value();
	bool canMoveTo(Tile& trgt);
	void display();	
}

#endif 

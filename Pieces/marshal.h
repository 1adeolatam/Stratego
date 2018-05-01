#ifndef __MARSHAL_H__
#define __MARSHAL_H__

#include "piece.h"
#include "tile.h"

class Marshal : public Piece{
	public:
	Marshal(int,int);
	~Marshal();
	void display();	
}

#endif 

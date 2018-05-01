#ifndef __LIEUTENANT_H__
#define __LIEUTENANT_H__

#include "piece.h"
#include "tile.h"

class Lieutenant : public Piece{
	public:
	Lieutenant(int,int);
	~Lieutenant();
	void display();	
}

#endif 

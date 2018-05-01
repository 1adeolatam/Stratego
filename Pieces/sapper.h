#ifndef __SAPPER_H__
#define __SAPPER_H__

#include "piece.h"
#include "tile.h"

class Sapper : public Piece{
	public:
	Sapper(char c);
	~Sapper();
	void display();	
}

#endif 

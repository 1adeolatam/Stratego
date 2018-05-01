#ifndef __FLAG_H__
#define __FLAG_H__

#include "piece.h"
#include "tile.h"

class Flag : public Piece{
	public:
	Flag(int,int);
	~Flag();
	void display();	
}

#endif 

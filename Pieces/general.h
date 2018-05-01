#ifndef __GENERAL_H__
#define __GENERAL_H__

#include "piece.h"
#include "tile.h"

class General : public Piece{
	public:
	General(int,int);
	~General();
	void display();	
}

#endif 

#ifndef __SPY_H__
#define __SPY_H__

#include "piece.h"
#include "tile.h"

class Spy : public Piece{
	public:
	Spy(char c);
	~Spy();
	void display();	
}

#endif 

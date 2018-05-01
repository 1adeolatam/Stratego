#ifndef __SERGEANT_H__
#define __SERGEANT_H__

#include "piece.h"
#include "tile.h"

class Sergeant : public Piece{
	public:
	Sergeant(char c);
	~Sergeant();
	void display();	
}

#endif 

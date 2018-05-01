#ifndef __CAPTAIN_H__
#define __CAPTAIN_H__

#include "piece.h"
#include "tile.h"

class Captain : public Piece{
	public:
	Captain(int ,int);
	~Captain();
	void display();
}

#endif 

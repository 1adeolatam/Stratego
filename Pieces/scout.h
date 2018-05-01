#ifndef __SCOUT_H__
#define __SCOUT_H__

#include "piece.h"
#include "tile.h"

class Scout : public Piece{
	public:
	Scout(char c);
	~Scout();
	void display();	
}

#endif 

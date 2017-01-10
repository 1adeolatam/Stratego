#ifndef PIECE_H
#define PIECE_H
#include "Position.h"
class Piece{
	Position pos;
	char ID;
public:
	virtual Piece(Position) = 0;
	void setPosition(Position);
	char pieceID();
};
#endif

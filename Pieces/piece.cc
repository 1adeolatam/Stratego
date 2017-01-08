#include "piece.h"
class Piece{
	Position pos;
	char ID;
public:
	void setPosition(Position p){
		if(isValidPosition(p)){pos = p;}
	}
	char pieceID(){
		return ID;
	}
};

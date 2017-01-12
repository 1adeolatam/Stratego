#include "piece.h"
void Piece::setPosition(Position p){
		if(isValidPosition(p)){pos = p;}
	}
char Piece::pieceID(){
		return ID;
	}

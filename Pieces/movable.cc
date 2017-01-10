#include "movable.h"
bool Movable::isLegalMove(Position p){
	if( abs(p.xVal() - this.getPosition().xVal()) > 1 || abs(p.yVal() - 
	this.getPosition().yVal()) > 1 ){
		return false
	}
	if(Movable::isBlockedPath(p)){
		return false;
	}
	
	return true;
}
bool Movable::isBlockedPath(Position p){
	
}
void Movable::move(Position p){


	
if(this.isLegalMove(p)){
	throw illegalMoveExc;
}


}


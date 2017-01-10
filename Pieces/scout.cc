#include "scout.h"
override
void Scout:: isLegalMove(Position p){
	if( abs(p.xVal() - this.getPosition().xVal()) > 9 || abs(p.yVal() - 
	this.getPosition().yVal()) > 9 ){
		return false
	}
	if(Movable::isBlockedPath(p)){
		return false;
	}
	
	return true;
}

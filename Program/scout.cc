#include "scout.h"
Scout :: Scout(char c) : Piece(c){
}
Scout :: ~Scout(){
}
int Scout :: value(){
	return 2;
}
bool Scout ::canMoveTo(Tile& trgt){
	bool isVal = false;
	if(Board::getBoard()->isClearHorizontal(*(this->getTile()) ,trgt)){
		isVal = true;
	}else if(Board::getBoard()->isClearHorizontal(*(this->getTile()) ,trgt)){
		isVal = true;
	}
	return isVal;
}
void Scout :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mSCO\033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44mSCO\033[0m";
	}
}

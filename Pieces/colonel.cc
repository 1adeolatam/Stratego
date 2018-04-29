#include "colonel.h"

Colonel :: Colonel(char c) : Piece(c){
}
Colonel :: ~Colonel(){
}
int Colonel :: value(){
	return 8;
}
bool Colonel ::canMoveTo(Tile& trgt){
	Piece::canMoveTo(trgt);
}
void Colonel :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mCOL\033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44mCOL\033[0m";
	}
}

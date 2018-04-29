#include "lieutenant.h"

Lieutenant :: Lieutenant(char c) : Piece(c){
}
Lieutenant :: ~Lieutenant(){
}
int Lieutenant :: value(){
	return 5;
}
bool Lieutenant ::canMoveTo(Tile& trgt){
	Piece::canMoveTo(trgt);
}
void Lieutenant :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mLIE\033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44mLIE\033[0m";
	}
}

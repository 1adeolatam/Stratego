#include "captain.h"

Captain :: Captain(char c) : Piece(c){
}
Captain :: ~Captain(){
}
int Captain :: value(){
	return 6;
}
bool Captain ::canMoveTo(Tile& trgt){
	Piece::canMoveTo(trgt);
}
void Captain :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mCAP\033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44mCAP\033[0m";
	}
}

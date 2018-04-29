#include "marshal.h"

Marshal :: Marshal(char c) : Piece(c){
}
Marshal :: ~Marshal(){
}
int Marshal :: value(){
	return 10;
}
bool Marshal ::canMoveTo(Tile& trgt){
	Piece::canMoveTo(trgt);
}
void Marshal :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mMAR\033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44mMAR\033[0m";
	}
}

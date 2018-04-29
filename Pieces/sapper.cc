#include "sapper.h"

Sapper :: Sapper(char c) : Piece(c){
}
Sapper :: ~Sapper(){
}
int Sapper :: value(){
	return 3;
}
bool Sapper ::canMoveTo(Tile& trgt){
	Piece::canMoveTo(trgt);
}
void Sapper :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mSAP\033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44mSAP\033[0m";
	}
}

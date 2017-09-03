#include "spy.h"

Spy :: Spy(char c) : Piece(c){
}
Spy :: ~Spy(){
}
int Spy :: value(){
	return 1;
}
bool Spy ::canMoveTo(Tile& trgt){
	Piece::canMoveTo(trgt);
}
void Spy :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mSPY\033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44mSPY\033[0m";
	}
}

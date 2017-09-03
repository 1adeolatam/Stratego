#include "sergeant.h"

Sergeant :: Sergeant(char c) : Piece(c){
}
Sergeant :: ~Sergeant(){
}
int Sergeant :: value(){
	return 4;
}
bool Sergeant ::canMoveTo(Tile& trgt){
	Piece::canMoveTo(trgt);
}
void Sergeant :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mSER\033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44mSER\033[0m";
	}
}

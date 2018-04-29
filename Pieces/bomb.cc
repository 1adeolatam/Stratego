#include "bomb.h"

Bomb :: Bomb(char c) : Piece(c){
}
Bomb :: ~Bomb(){
}
int Bomb :: value(){
	return 'B';
}
bool Bomb ::canMoveTo(Tile& trgt){
	return false;
}
void Bomb :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41m B \033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44m B \033[0m";
	}
}

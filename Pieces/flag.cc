#include "flag.h"

Flag :: Flag(char c) : Piece(c){
}
Flag :: ~Flag(){
}
int Flag :: value(){
	return 'F';
}
bool Flag ::canMoveTo(Tile& trgt){
	return false;
}
void Flag :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41m F \033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44m F \033[0m";
	}
}

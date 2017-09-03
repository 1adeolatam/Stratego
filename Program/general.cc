#include "general.h"

General :: General(char c) : Piece(c){
}
General :: ~General(){
}
int General :: value(){
	return 9;
}
bool General ::canMoveTo(Tile& trgt){
	Piece::canMoveTo(trgt);
}
void General :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mGEN\033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44mGEN\033[0m";
	}
}

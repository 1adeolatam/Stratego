#include "major.h"

Major :: Major(char c) : Piece(c){
}
Major :: ~Major(){
}
int Major :: value(){
	return 7;
}
bool Major ::canMoveTo(Tile& trgt){
	Piece::canMoveTo(trgt);
}
void Major :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mMAJ\033[0m";
	}elseif(color == 'b'){
		cout << "\033[1;44mMAJ\033[0m";
	}
}

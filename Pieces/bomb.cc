#include "bomb.h"

Bomb :: Bomb(int colour, int type): colour(colour), type(type){
}


Bomb :: ~Bomb(){
}
void Bomb :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41m B \033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44m B \033[0m";
	}
}

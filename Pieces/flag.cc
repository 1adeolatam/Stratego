#include "flag.h"

Flag :: Flag(int colour, int type): colour(colour), type(type){
}

Flag :: ~Flag(){
}
void Flag :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41m F \033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44m F \033[0m";
	}
}

#include "captain.h"

Captain :: Captain(int colour, int type): colour(colour), type(type){
}


Captain :: ~Captain(){
}
void Captain :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mCAP\033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44mCAP\033[0m";
	}
}

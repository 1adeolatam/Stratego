#include "marshal.h"

Marshal :: Marshal(int colour, int type): colour(colour), type(type){
}

Marshal :: ~Marshal(){
}
void Marshal :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mMAR\033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44mMAR\033[0m";
	}
}

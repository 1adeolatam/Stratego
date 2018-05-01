#include "general.h"

General :: General(int colour, int type): colour(colour), type(type){
}

General :: ~General(){
}
void General :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mGEN\033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44mGEN\033[0m";
	}
}

#include "sapper.h"

Sapper :: Sapper(int colour, int type): colour(colour), type(type){
}

Sapper :: ~Sapper(){
}
void Sapper :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mSAP\033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44mSAP\033[0m";
	}
}

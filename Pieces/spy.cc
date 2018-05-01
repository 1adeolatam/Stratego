#include "spy.h"

Spy :: Spy(int colour, int type): colour(colour), type(type){
}

Spy :: ~Spy(){
}
void Spy :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mSPY\033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44mSPY\033[0m";
	}
}

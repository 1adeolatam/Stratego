#include "colonel.h"

Colonel :: Colonel(int colour, int type): colour(colour), type(type){
}

Colonel :: ~Colonel(){
}
void Colonel :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mCOL\033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44mCOL\033[0m";
	}
}

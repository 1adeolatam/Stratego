#include "lieutenant.h"

Lieutenant :: Lieutenant(int colour, int type): colour(colour), type(type){
}

Lieutenant :: ~Lieutenant(){
}
void Lieutenant :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mLIE\033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44mLIE\033[0m";
	}
}

#include "scout.h"
Scout :: Scout(int colour, int type): colour(colour), type(type){
}

Scout :: ~Scout(){
}
void Scout :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mSCO\033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44mSCO\033[0m";
	}
}

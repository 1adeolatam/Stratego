#include "major.h"

Major :: Major(int colour, int type): colour(colour), type(type){
}

Major :: ~Major(){
}
void Major :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mMAJ\033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44mMAJ\033[0m";
	}
}

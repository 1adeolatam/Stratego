#include "sergeant.h"

Sergeant :: Sergeant(int colour, int type): colour(colour), type(type){
}

Sergeant :: ~Sergeant(){
}
void Sergeant :: display(){
	//red and blue
	if(color == 'r'){
		cout << "\033[1;41mSER\033[0m";
	}else if(color == 'b'){
		cout << "\033[1;44mSER\033[0m";
	}
}

#include "player.h"


Player :: Player(char clr){
	colour = clr;
	for(int i = 0; i < 40; ++i){
		pieces[i] = NULL;
	}
	
}

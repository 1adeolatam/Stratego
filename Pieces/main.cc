#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <ctype.h>

using namespace std;

// Strength of piece

const int BOMB =  'B';
const int MARSHAL = 1;
const int GENERAL = 2;
const int COLONEL = 3;
const int MAJOR = 4;
const int CAPTAIN = 5;
const int LIEUTENANT = 6;
const int SERGEANT = 7;
const int SAPPER = 8;
const int SCOUT = 9;
const int SPY = 'S';
const int FLAG = 'F';
const int WATER = -3;

int Board[11][11];
int redsetup[4][10];//p1
int bluesetup[4][10];//p2

const int amtBOMB =  6;
const int amtMARSHAL = 1;
const int amtGENERAL = 1;
const int amtCOLONEL = 2;
const int amtMAJOR = 3;
const int amtCAPTAIN = 4;
const int amtLIEUTENANT = 4;
const int amtSERGEANT = 4;
const int amtSAPPER = 5;
const int amtSCOUT = 8;
const int amtSPY = 1;


//Setup board from given starts
void initpos(void){
		//Setup red pieces on board
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 10; ++j){
			Board[6+i][j] = redsetup[i][j];			
		}
	}
	//Setup blue pieces on board
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 10; ++j){
			Board[3-i][9-j] = bluesetup[i][j];	
		}
	}
	//Setup impasses (water in middle of map
	Board[4][2] = WATER;
	Board[4][3] = WATER;
	Board[5][2] = WATER;
	Board[5][3] = WATER;

	Board[4][6] = WATER;
	Board[4][7] = WATER;
	Board[5][6] = WATER;
	Board[5][7] = WATER;
	
	
}


void setup(void){
	for(int i = 0; i < 10; ++i){
		for(int j = 0; j < 10; ++j){
			Board[i][j] = 0;
		}
		Board[i][10] = 10 - i;
	}
	for(int i = 0; i < 10; ++i){
		Board[10][i] = 'a'+i;
	}
		
	initpos();	
}

	
int main(int argc, char **argv)
{
	// take in the setup for red team and blue team from individual files
	 be saved in separate txt files   "  << endl;
	     
	string inp;
	while(true){
		 getline (cin, inp);
		if (inp.substr(0, 4) == "exit")   {
	          break;
	         }
		if(inp.substr(0,3) == "new"){
			setup();
		}
		if(inp.substr(0,4) == "disp"){
			displayBoard();
		}
		
		
	}
	
	
	
	
	
	return 0;
}
	
	

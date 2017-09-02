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


void displayBoard(){
	string disp;
	for(int i = 0; i < 11; ++i){
		cout << endl;
		Board[i][10] = 10 - i;
		for(int j = 0; j < 11; ++j){
			if(i < 10 && j < 10){
			switch(Board[i][j]){
			case 0:
			disp = " - ";
			break;
			case BOMB:
			disp = " B ";
			break;
			case MARSHAL:
			disp = "MAR";
			break;
			case GENERAL:
			disp = "GEN";
			break;
			case COLONEL:
			disp = "COL";
			break;
			case MAJOR:
			disp = "MAJ";
			break;
			case CAPTAIN:
			disp = "CAP";
			break;
			case LIEUTENANT:
			disp = "LIE";
			break;
			case SERGEANT:
			disp = "SER";
			break;
			case SAPPER:
			disp = "SAP";
			break;
			case SCOUT:
			disp = "SCO";
			break;
			case SPY:
			disp = "SPY";
			break;
			case 'F':
			disp = " F ";
			break;
			case WATER:
			disp = " W ";
			break;
		}
		 }else{
			 for(int k = 0; k < 10; ++k){
				Board[10][k] = 'a'+k;
			 }
			if(i == 10){
				 disp = " ";
				 disp += (char) Board[i][j];
				 disp += " ";
			 }else if(j == 10){
				 disp = " ";
				 disp += (char) '0' + Board[i][j];
				 disp += " ";
				 if(i == 0){
					 disp = " 10";
				 }
			 }
			 
		 }
			 
			 cout << " " << disp << " ";
			//cout << " " << Board[i][j]	 << " ";
			 
			}
		}
		
		 cout << endl << endl;
	}
	
int main(int argc, char **argv)
{
	// take in the setup for red team and blue team from individual files
	ifstream p1Setup(argv[1]);
	ifstream p2Setup(argv[2]);
	
	//Sey red player
	if(!p1Setup){
		cerr << "COULD NOT OPEN PLAYER 1 SETUP" << endl;
		return 1;
	}
	string ln;
	int rank = 0;
	while(getline(p1Setup,ln)){
		stringstream lnstrm(ln);
		char value;
		int file = 0;
		while(lnstrm >> value){
			if(isdigit(value)){
				redsetup[rank][file] = value - '0';
			}
			if(isalpha(value)){
				redsetup[rank][file] = value;
			}
			file++;			
		}
		rank++;
	}
	if(!p2Setup){
		cerr << "COULD NOT OPEN PLAYER 2 SETUP" << endl;
		return 1;
	}
	//Blue Player setup
	rank = 0;
	while(getline(p2Setup,ln)){
		stringstream lnstrm(ln);
		char value;
		int file = 0;
		while(lnstrm >> value){
			if(isdigit(value)){
				bluesetup[rank][file] = value - '0';
			}
			if(isalpha(value)){
				bluesetup[rank][file] = value;
			}
			file++;			
		}
		rank++;
	}
	
	
	cout << "        S T R A T E G O 1 . 0                            "  << endl
	     << " A command-line iteration of the underrated board game.  "  << endl
	     << " Menu:                                                   "  << endl
	     << " 'exit' to leave the program.             "  << endl
	     << " 'disp' to display the current state of the board.     "  << endl
	     << " 'new' to request a new game.                          "  << endl
	     << " The player setups must be saved in separate txt files   "  << endl;
	     
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
	
	

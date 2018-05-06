#include <string>
#include <fstream>
#include <sstream>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#include "../Pieces/piece.h"
#include "game.h"
#include "player.h"

Game :: Game(char **argv){
	init(char **argv);
}

Game :: ~Game(){
	for (vector<Piece*>::iterator itr = redPieces.begin();
         itr != RedPieces.end(); ++itr)
    {
        delete *itr;
    }
    RedPieces.clear();
    for (vector<Piece*>::iterator itr = bluePieces.begin();
         itr != BluePieces.end(); ++itr)
    {
        delete *itr;
    }
    bluePieces.clear();

    // Delete players
    delete &RedP;
	delete &BlueP;

}

void Game :: displayBoard(){
	for(int rank = 9; rank > -1; rank--){
		for(int file = 0; file < 10; file++){
			board[rank][file]->display();
		}
	}
	}
void Game :: setUpplayer(int colour, ifstream pSetup){
	//Set up the red player
	// then the blue player
	Piece *aP;
	Tile *aT;
	int rank;
	int file;
	//RED
	if(colour == 0){
		rank = 3;
		while(getline(pSetup,ln)){
			stringstream lnstrm(ln);
			char value;
			int file = 0;
			while(lnstrm >> value){
				aT = board[rank][file];
				aP = new Piece(int(char), colour)
				aT->Occupant == aP;
				aP->setLocation() = aT;
				file++;
			}
			rank--;
		}
	}else{
	//BLUE
		rank = 6;
		while(getline(pSetup,ln)){
			stringstream lnstrm(ln);
			char value;
			file = 9;
			while(lnstrm >> value){
				aT = board[rank][file];
				aP = new Piece(int(char), colour)
				aT->Occupant == aP;
				aP->setLocation() = aT;
				file--;
			}
			rank++;
		}
	}

	}

void Game :: menu(){
	//Menu
	cout << "\033[1;41mbold \033[0m" << "red text";
	cout << "        S T R A T E G O                             "  << endl
	     << " A command-line iteration of the game stratego.  "  << endl
	     << " '1' to play stratego.             "  << endl
	     << " '2' to exit.                          "  << endl
	
	int inp;
	loopstart:
		 cin >> inp;
		 switch(inp){
		 case 1:
		 play();
		 break;
		 case 2:
		
		 default:
		 goto loopstart; 
		 break;
		 }
		 
		
	
	}
	
void Game :: init(char **argv){
	//setup tiles
	for(int i = 0; i < 10; ++i){
		for(int j = 0; j < 10; ++j){
			board[i][j] = new Tile(i,j);
		}
	}
	//get input for the player setup
	ifstream p1Setup(argv[1]);
	ifstream p2Setup(argv[2]);
	setUpplayer(0,p1Setup);
	setUpplayer(1,p2Setup);
	running = true;
	menu();
}

void Game :: play(){
		
		while(running){
			//Get input for user
			// could be a valid move
			// exit 
			
			//move second player
			
		
		
		
		//switch to next player
		curPlayer = curPlayer == RedP ? BlueP: RedP;
		}
		
		}

#include <string>
#include <fstream>
#include <sstream>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#inclide "board.h"
#inclide "colonel.h"
#inclide "general.h"  
#inclide "marshal.h" 
#inclide "sapper.h"  
#inclide "spy.h"
#inclide "bomb.h"
#inclide "flag.h"
#inclide "lieutenant.h"
#inclide "piece.h"
#inclide "scout.h"
#inclide "tile.h"
#inclide "captain.h"
#inclide "game.h"
#inclide "major.h"
#inclide "player.h"
#inclide "sergeant.h"
#inclide "water.h"



Game :: Game(){
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


void Game :: init(){
	ifstream p1Setup(argv[1]);
	ifstream p2Setup(argv[2]);
	Piece *aPiece;
	Tile *aTile;
	int id;
	//Set up red player
	if(!p1Setup){
		cerr << "COULD NOT OPEN PLAYER 1 SETUP" << endl;
		return 1;
	}
	string ln;
	int rank = 0;
	int pieceCounter = 0;
	while(getline(p1Setup,ln)){
		stringstream lnstrm(ln);
		char value;
		int file = 0;
		while(lnstrm >> value){
			if(isdigit(value)){
				// create  correct red pieces
				id = value - '0';				
				switch(id){
			case MARSHAL:
			aPiece = new Marshal('r');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			redPieces[pieceCounter++] = aPiece;
			break;
			case GENERAL:
			aPiece = new General('r');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			redPieces[pieceCounter++] = aPiece;
			break;
			case COLONEL:
			aPiece = new Colonel('r');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			redPieces[pieceCounter++] = aPiece;
			break;
			case MAJOR:
			aPiece = new Major('r');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			redPieces[pieceCounter++] = aPiece;
			break;
			case CAPTAIN:
			aPiece = new Captain('r');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			redPieces[pieceCounter++] = aPiece;
			break;
			case LIEUTENANT:
			aPiece = new Lieutenant('r');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			redPieces[pieceCounter++] = aPiece;
			break;
			case SERGEANT:
			aPiece = new Sergeant('r');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			redPieces[pieceCounter++] = aPiece;
			break;
			case SAPPER:
			aPiece = new Sapper('r');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			redPieces[pieceCounter++] = aPiece;
			break;
			case SCOUT:
			aPiece = new Scout('r');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			redPieces[pieceCounter++] = aPiece;
			break;
			case SPY:
			aPiece = new Spy('r');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			redPieces[pieceCounter++] = aPiece;
			break;
				}
			}
		
			if(isalpha(value)){
				id = value;
				switch(id){
				case BOMB:
				aPiece = new Bomb('r');
				aTile = Board::getBoard()->getTile(rank,file);
				aTile->setPiece(aPiece);
				aPiece->setLocation(aTile);
				redPieces[pieceCounter++] = aPiece;
				break;
				case FLAG:
				aPiece = new Flag('r');
				aTile = Board::getBoard()->getTile(rank,file);
				aTile->setPiece(aPiece);
				aPiece->setLocation(aTile);
				redPieces[pieceCounter++] = aPiece;
				break;				
			}
		}
			file++;			
		}
		rank++;
	}
	cout << pieceCounter << " PIECE COUNTER FOR RED <-" << endl;
	pieceCounter = 0;
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
				// create  correct blue pieces
				id = value - '0';				
				switch(id){
			case MARSHAL:
			aPiece = new Marshal('b');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			bluePieces[pieceCounter++] = aPiece;
			break;
			case GENERAL:
			aPiece = new General('b');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			bluePieces[pieceCounter++] = aPiece;
			break;
			case COLONEL:
			aPiece = new Colonel('b');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			bluePieces[pieceCounter++] = aPiece;
			break;
			case MAJOR:
			aPiece = new Major('b');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			bluePieces[pieceCounter++] = aPiece;
			break;
			case CAPTAIN:
			aPiece = new Captain('b');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			bluePieces[pieceCounter++] = aPiece;
			break;
			case LIEUTENANT:
			aPiece = new Lieutenant('b');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			bluePieces[pieceCounter++] = aPiece;
			break;
			case SERGEANT:
			aPiece = new Sergeant('b');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			bluePieces[pieceCounter++] = aPiece;
			break;
			case SAPPER:
			aPiece = new Sapper('b');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			bluePieces[pieceCounter++] = aPiece;
			break;
			case SCOUT:
			aPiece = new Scout('b');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			bluePieces[pieceCounter++] = aPiece;
			break;
			case SPY:
			aPiece = new Spy('b');
			aTile = Board::getBoard()->getTile(rank,file);
			aTile->setPiece(aPiece);
			aPiece->setLocation(aTile);
			bluePieces[pieceCounter++] = aPiece;
			break;
				}
			}
		
			if(isalpha(value)){
				id = value;
				switch(id){
				case BOMB:
				aPiece = new Bomb('b');
				aTile = Board::getBoard()->getTile(rank,file);
				aTile->setPiece(aPiece);
				aPiece->setLocation(aTile);
				bluePieces[pieceCounter++] = aPiece;
				break;
				case FLAG:
				aPiece = new Flag('b');
				aTile = Board::getBoard()->getTile(rank,file);
				aTile->setPiece(aPiece);
				aPiece->setLocation(aTile);
				bluePieces[pieceCounter++] = aPiece;
				break;				
			}
		}
			file++;			
		}
		rank++;
	}
	
	 cout << "\033[1;41mbold \033[0m" << "red text";
	cout << "        S T R A T E G O 1 . 0                            "  << endl
	     << " A command-line iteration of the underrated board game.  "  << endl
	     << " Menu:                                                   "  << endl
	     << " 'exit' to leave the program.             "  << endl
	     << " 'disp' to display the current state of the board.     "  << endl
	     << " 'new' to request a new game.                          "  << endl
	
	
	
	
}

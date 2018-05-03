#ifndef __PIECE_H__
#define __PIECE_H_

#include <ostream>
#include "tile.h"
#include <string>
#include <vector>
// The identification number of Piece types
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

// Total number of each Piece type at the start of game
//const int amtBOMB =  6;
//const int amtMARSHAL = 1;
//const int amtGENERAL = 1;
//const int amtCOLONEL = 2;
//const int amtMAJOR = 3;
//const int amtCAPTAIN = 4;
//const int amtLIEUTENANT = 4;
//const int amtSERGEANT = 4;
//const int amtSAPPER = 5;
//const int amtSCOUT = 8;
//const int amtSPY = 1;


struct Piece{
	private:
	int type;
	int colour;
	bool isVisible;
	Tile* location;
	protected:
	vector<Tile*> possibleDestiations;
	public:
	Piece(int colour, int type);
	~Piece();
	Tile* getLocation();
	void setLocation(Tile*);
	char getColour();
	bool getVisibility();
	void setVisibliity(bool);
	//display either red or blue
	void display();
	vector<Tile*> move(Tile[][],int rank, int file);
 };
#endif





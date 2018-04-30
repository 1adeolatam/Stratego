#ifndef __PIECE_H__
#define __PIECE_H_

#include <ostream>
#include "tile.h"
#include <string>

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


struct Piece{
	private:
	Tile * tile;
	protected:
	char color;
	public:
	Piece(char c);
	virtual ~Piece();
	virtual bool moveTo(Player& moveMaker, Tile& trgt);
	virtual void setLocation(Tile* trgt);
	virtual int value() const = 0;
	char color() const;
	//display either red or blue
	void display() const = 0;
	bool canMoveTo(Tile& trgt) const = 0;
	Tile* location()const;
 };
#endif



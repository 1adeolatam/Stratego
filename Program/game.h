#ifndef __GAME_H__
#define __GAME_H__

#include <iostream>
#include <string>

#include "../Pieces/piece.h"
#include "player.h"
#include <vector>
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

class Game{
	private:
	Game();
	static Player* RedP;
	static Player* BlueP;
	static Player* nextPlayer;
	static std::vector<Piece *> redPieces;
	static std::vector<Piece *> bluePieces;
	public:
	~Game();
	static void init();
	static void chooseRandPiece(char playerColor,int randnum );
	static Player* getNextPlayer();
	static Player* getOpponent();
	
};
#endif

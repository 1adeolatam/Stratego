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
	Tile* board[10][10];
	//bool running;
	Game(char **argv);
	static Player* RedP;
	static Player* BlueP;
	static Player* curPlayer;
	public:
	~Game();
	static void init(char **argv);
	static Player* getNextPlayer();
	static Player* getOpponent();
	static displayBoard();
	static void setUpplayer(int color, ifstream pSetup);
	static void menu();
	int gamesPlayed =0;
	static void play();
};
#endif

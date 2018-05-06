#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>
#include "../Pieces/piece.h"
#include <vector>

class Player{
private:
vector<Piece*> Pieces;
int colour;
bool isHuman;
int wins = 0;

public:
	Player(std::string name,int colour,vector<Piece*>&Pieces,bool isHuman);
	~Player();
	bool makeMove();
	char getColor() const;
	std::vector<Piece*>* getPieces() const;	
};
#endif

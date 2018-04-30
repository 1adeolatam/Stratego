#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>
#include "../Pieces/piece.h"
#include <vector>

class Player{
private:
std::string name;
vector<Piece*> Pieces;
char color;
bool isHuman;

public:
	Player(std::string name,char color,vector<Piece*>&Pieces,bool isHuman);
	~Player();
	bool makeMove();
	std::string getName() const;
	char getColor() const;
	std::vector<Piece*>* getPieces() const;	
};
#endif

#ifndef __PLAYER_H__
#def __PLAYER_H__

#include <string>
#include "piece.h"
#include <vector>

class Player{
private:
std::string name;
vector<Piece*> Pieces;
Flag& Flag;
char color;
bool isHuman;

public:
	Player(std::string name,char color,vector<Piece*>&Pieces,bool isHuman);
	~Player();
	bool makeMove();
	void capture(Piece* trgt);
	std::string getName() const;
	char getColor const;
	std::vector<Piece*>* getPieces() const;
	Flag* Flag() const;
	
};
#endif

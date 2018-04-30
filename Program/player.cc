#include "player.h"
#include "board.h"
#include "game.h"
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

Player :: Player(std::string name,char color,vector<Piece*>&Pieces,bool isHuman):
name(name),color(color), Pieces(Pieces), isHuman(isHuman)
{	
}

Player ::~Player(){
}

char Player :: getColor()const{
	return color;
}
vector<Piece*>* Player::Pieces() const{
	return &Pieces;	
}
string Player::getName() const{
	return name;
}

bool

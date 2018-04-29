#include "piece.h"
#include "player.h"
#include <stdlib.h>

Piece :: Piece(char c): tile(NULL), color(c){
}
Piece :: ~Piece(){
}
bool Piece :: moveTo(Player& moveMaker, Tile& trgt){

Piece* potCapture = NULL:
Tile* src = tile;
bool validMove = false;
if(color == moveMaker.getColor()){
	if(canMoveTo(trgt){
		if(trgt.isOccupied()){
			potCapture = trgt.getOccupant();
			if(potCapture->getColor() != moveMaker.getColor()){
					validMove = true;
			}
		}else{
			validMove = true;
		}
		if(validMove){
			if(potCapture){
				potCapture->setLocation(NULL);
			}
			tile->setPiece(NULL);
			tile = &trgt;
			tile->setPiece(this);
		}
		}		
	}	
	return validMove;
}	
void Piece :: setLocation(Tile* trgt){
	tile = trgt;
}
char Piece :: color() const{
	return color;
}
Tile* Piece :: location()const{
	return tile;
}

bool Piece ::canMoveTo(Tile& trgt){
	bool isVal = false;
	int deltaFile = abs(this->location()->getFile() - trgt.getFile());
	int deltaRank = abs(this->location()->getRank() - trgt.getRank());
	if(deltaFile == 0 && deltaRank == 1){
		isVal = true;
	}else if(deltaRank == 1 && deltaFile == 0){
		isVal = true;
	}
	return isVal;
}

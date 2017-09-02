#include "piece.h"
#include "player.h"

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
			//TODO make attacking a square pssible			
		}
		}		
	}	
	return validMove;
}	
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

#include "piece.h"
#include "player.h"

Piece :: Piece(char c): tile(NULL), color(c){
	
}
Piece :: ~Piece(){
}

Piece :: bool moveTo(Player& moveMaker, Tile& trgt){

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
			
			//TODO make attacking a square pssible
			
			
			
			
		}
		
	}	
	
}
	
	
}


	virtual void setLocation(Tile* trgt);
	virtual int value() const = 0;
	char color() const;
	virtual void display() const = 0;
	virtual bool canMoveTo(Tile& trgt) const = 0;
	Tile* location()const;

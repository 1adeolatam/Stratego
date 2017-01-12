#include "tile.h"
Tile :: Tile(int x, int y, char display) : x(x), y(x), display(display){
	
}

int Tile::xPos(){return x;}
int Tile::yPos(){return y;}
char Tile::getDisplay(){return display;}
Piece* Tile::getPiece(){return curPiece;}
void Tile::setPiece(Piece* p){
	curPiece = p;
	occupied = true;
	display = p->pieceID();
	}
bool Tile::hasPiece(){return occupied;}
void Tile::rmPiece(){
		if(curPiece){
			curPiece = nullptr;
			occupied = false;
			display = '.';
		}
	}

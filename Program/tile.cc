#include "tile.h"
#include "piece.h"


Tile::Tile(int x, int y): x(x), y(y) Occupant(NULL)
{
} 

Tile :: ~Tile(){
}
Tile :: void setPiece(Piece * p){
	Occupant = p;
}

Tile :: bool isOccupied()const{
	return Occupant;
}
Tile :: Piece* getOccupant()const{
	return Occupant;
}
Tile :: int getX()const{
	return x;
}
Tile :: int getY()const{
	return y;
}

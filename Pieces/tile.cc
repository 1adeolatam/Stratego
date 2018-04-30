#include "tile.h"
#include "piece.h"


Tile::Tile(int rank, int file): rank(rank), file(file) Occupant(NULL)
{
} 

Tile :: ~Tile(){
}
void Tile :: setPiece(Piece * p){
	Occupant = p;
}
bool Tile :: isOccupied()const{
	return Occupant;
}
Piece* Tile ::  getOccupant()const{
	return Occupant;
}
int Tile ::  getRank()const{
	return rank;
}
int  Tile :: getFile()const{
	return file;
}

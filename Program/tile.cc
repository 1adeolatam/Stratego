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
	return !(Occupant == NULL);
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
void Tile :: display(){
	if(isOccupied(){
		Occupant->display();
		return;
	}
	if(rank == 4 || rank == 5){
		 if(file == 2 || file == 3 || file == 6 || file == 7){	
			cout << "~~~";
			return;
		 }
	}
	cout << " - ";
	
	}

#include "piece.h"

Piece :: Piece(int type, int file, int rank, struct player* owner){
	this.type = type;
	this.file = file;
	this.rank = rank;
	this.owner = owner;
}
int Piece :: getFile(){
	return this.file;
}
int Piece :: getRank(){
	return this.rank();
}
int Piece :: getType(){
	return this.type();
}
struct player * Piece :: getOwner(){
	return this.owner;
}

void Piece :: void moveTo(int f , int r){
	file = f;
	rank = r;
}

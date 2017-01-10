#ifndef TILE_H
#define TILE_H
#include "../Pieces/piece.h"
class Tile{
	Piece* curPiece;
	bool occupied;
	int x,y;
	char display;
	public:
	Tile(int x, int y);
	int xPos();
	int yPos();
	char getDisplay();
	
	Piece* getPiece();
	void setPiece(Piece*);
	bool hasPiece();
	void rmPiece();
	
};
#endif

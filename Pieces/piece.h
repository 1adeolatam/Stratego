#ifndef PIECE_H
#define PIECE_H
class Piece{
	int x,y;
	char ID;
public:
	virtual Piece() = 0;
	Position getPosition();
	void setPosition(int x, int y);
	char pieceID();
};
#endif

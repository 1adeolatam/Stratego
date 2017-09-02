#ifndef __TILE_H__
#define __TILE_H__
class Piece;

class Tile{
	private:
	int x;
	int y;
	Piece* Occupant;
	
	public:
	Tile();
	Tile(int x, int y);
	~Tile();
	void setPiece(Piece * p);
	bool isOccupied()const;
	Piece* getOccupant()const;
	int getX()const;
	int getY()const;
};
#endif

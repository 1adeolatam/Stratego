#ifndef __TILE_H__
#define __TILE_H__
class Piece;

class Tile{
	private:
	int rank;
	int file;
	Piece* Occupant;
	
	public:
	Tile();
	Tile(int rank, int file);
	~Tile();
	void setPiece(Piece * p);
	bool isOccupied()const;
	Piece* getOccupant()const;
	int getRank()const;
	int getFile()const;
};
#endif

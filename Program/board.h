#ifnef __BOARD_H__
#define __BOARD_H__

#include "ostream"
#include "tile.h"

class Board{
	Board();
	private:
	static const int len = 10;
	Tile* grid[len][len];
	static Board* b;
	public:
	~Board();
	Tile* getTile(int rank,int file)const;
	bool isClearVertical(Tile& src, Tile& trgt)const;
	bool isClearHorizontal(Tile& src, Tile& trgt)const;
	void displayBoard()const;
	static Board* getBoard();
}

#endif

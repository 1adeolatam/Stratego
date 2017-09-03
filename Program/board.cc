#include "board.h"



Board :: Board(){
	for(int rank = 0; rank < len; ++rank){
		for(int file = 0; file < len; ++file){
			grid[rank][file] = new Tile(rank,file);		
		}		
	}
}
Board::~Board(){
	for(int rank = 0; rank < len; ++rank){
		for(int file = 0; file < len; ++file){
			delete[] grid[rank][file]
		}		
		delete[] grid[rank]
	}	
	delete[] grid;	
}	

Tile* Board :: getTile(int rank, int file){
		return grid[rank][file];
}

bool Board ::  isClearVertical(Tile& src, Tile& trgt)const{
	Tile* start =  &src;
	Tile* desti = &trgt;
	bool valid = true;
	
	if(src.getRank() > trgt.getRank()){
		start = &trgt;
		desti = &src;		
	}
	if(start->getFile() != desti->getFile()){
		valid = false;
	}else{
		for(int i = start->getRank()+1; i < dest->getRank();++i){
			if(getTile(start->getFile(),i)->isOccupied()){
				valid = false;
			}
		}
	}	
	return valid;
}
bool Board :: isClearHorizontal(Tile& src, Tile& trgt)const{
	Tile* start =  &src;
	Tile* desti = &trgt;
	bool valid = true;
	
	if(src.getFile() > trgt.getFile()){
		start = &trgt;
		desti = &src;		
	}
	if(start->getRank() != desti->getRank()){
		valid = false;
	}else{
		for(int i = start->getFile()+1; i < dest->getFile();++i){
			if(getTile(start->getRank(),i)->isOccupied()){
				valid = false;
			}
		}
	}	
	return valid;
}

void Board :: displayBoard()const{
		//All Tiles will be 3 chars wide "xxx"
		
		cout <<endl<<" #A# #B# #C# #D# #E# #F# #G# #H# #I# #J#"<< endl;
		for(int rank = len-1;rank >= 0; --rank){
			for(int file = 0; file < len; ++file){
					cout << " ";
					if(grid[rank][file]->getOccupant){
					grid[rank][file]->getOccupant()->display();
					}else{
						cout << "---";
					}
					cout << " ";
			}
			cout << " "<< rank +1 << " " <<endl;
		}		
		
		cout <<" #A# #B# #C# #D# #E# #F# #G# #H# #I# #J#"<< endl<<endl;
		
	}

Board* Board :: getBoard(){
	if(!b){
		b = new Board();
	}
	return b;
}

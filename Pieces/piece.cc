#include "piece.h"
#include "player.h"
#include <stdlib.h>

Piece :: Piece(int colour, int type): colour(colour), type(type){
}
Piece :: ~Piece(){
}

char Piece :: getColour() const{
	return colour;
}
Tile* Piece :: location()const{
	return tile;
}
//Almost all the stratego pieces move 1 unit in either forward
//backward, left or right.
//So only overriding required is for Bomb,Flag and Scout(which is only constrained by the board).

bool Piece ::move(Tile board[][],int rank, int file){
	possibleDestinations.clear();
	switch(type){
	case BOMB:
	case FLAG:
		return possibleDestinations;
	// No possible moves at any time for The bomb and the flag
	}
	int potRank[4] = {rank, rank,rank+1,rank-1};
	int potFile[4] = {file+1,file-1,file,file};

	//enumerate throught the four possible moves
	//The board is a [10][10] Tile matrix
	//possible ranges are [0-9][0-9]
	//with the exclusion of the water tiles
	//which are 2 2x2 sqaures in the middle of the field
	
	for(int i = 0; i < 4; ++i){
	 if((potRank[i] >=0 && potRank < 10){
	  if(potFile[i] >=0 && potFile < 10){
	//Destination is on the board
	   if(board[potRank[i]][potFile[i]] != NULL && board[potRank[i]][potFile[i]]->getPiece.getColour() != colour){
	    //Destination has enemy piece
	          //TODO:Prevent addition of water tiles
		if(potRank[i] == 4 || potRank[i] == 5){
		 if(potFile[i] == 2 || potFile[i] == 3 || potFile[i] == 6 || potFile[i] == 7){
		}else{
			possibleDestinations.add(board[potRank[i]][potFile[i]]);
		}
	       }
	 possibleDestinations.add(board[potRank[i]][potFile[i]]);
	   }
	  }
	 }
	}

	return possibleDestinations;
}


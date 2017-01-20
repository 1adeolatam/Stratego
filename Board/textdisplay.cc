#include "TextDisplay.h"

using namespace std;
TextDisplay::TextDisplay(): {}

char TextDisplay::returnChar(int r, int c){
return grid[r][c];
}
void TextDisplay::notify(int r, int c, char symbol){
grid[r][c] = symbol;
}
void TextDisplay::notify(vector<char> rows){
grid.push_back(rows);
}

ostream & operator<<(ostream & out, TextDisplay & td){
for(int i = 0; i < td.theGrid.size(); i++){
for(int j = 0; j < td.theGrid[i].size(); j++){
out<<td.theGrid[i][j];
}
out<<endl;
}
return out;
}

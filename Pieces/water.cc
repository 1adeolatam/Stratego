#include "water.h"

Water :: Water(char c){
}
Water :: Water(){
}
Water :: ~Water(){
}
int Water :: value(){
	return 'F';
}
bool Water ::canMoveTo(Tile& trgt){
	return false;
}
void Water :: display(){
	cout << "WWW";
}

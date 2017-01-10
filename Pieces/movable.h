#ifndef MOVABLE_H
#define MOVABLE_H
#include "pieces.h"
class Movable : public Piece{
public:
bool isLegalMove(Position);
bool isBlockedPath(Position);
void move(Position);
};
#endif

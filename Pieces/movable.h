#ifndef MOVABLE_H
#define MOVABLE_H
#include "piece.h"
#include <stdlib.h>

class Movable : public Piece{
public:
Movable(Position);
virutal bool isLegalMove(Position);
bool isBlockedPath(Position);
void move(Position);
};
#endif

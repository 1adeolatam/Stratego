#ifndef MOVABLE_H
#define MOVABLE_H
#include "piece.h"
#include <stdlib.h>

class Movable : public Piece{
public:
Movable();
virutal bool isLegalMove();
bool isBlockedPath();
void move();
};
#endif

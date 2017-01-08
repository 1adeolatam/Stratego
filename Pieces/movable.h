#ifndef MOVABLE_H
#define MOVABLE_H

#include "pieces.h"
class Movable{

public:
bool isLegalMove();
bool isBlockedPath();
void move(Position);
}
#endif

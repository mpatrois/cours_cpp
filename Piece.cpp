#include "Piece.h"

Piece::Piece(int x, int y){
    this->x = x;
    this->y = y;
};

int Piece::getX()
{
    return x;
}

int Piece::getY()
{
    return y;
}
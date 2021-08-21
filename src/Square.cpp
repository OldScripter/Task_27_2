#include "../include/Square.h"

Square::Square()
{
    this->figureType = SQUARE;
}

Square::Square(double side) : Square()
{
    this->side = side;
    this->width = side;
    this->height = side;
}

Square::Square(double side, int centerX, int centerY) : Square(side)
{
    this->centerX = centerX;
    this->centerY = centerY;
}

double Square::getSide() const
{
    return this->side;
}

void Square::setSide(const double side)
{
    this->side = side;
    this->width = side;
    this->height = side;
}
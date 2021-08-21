#include "../include/Triangle.h"

Triangle::Triangle()
{
    this->figureType = TRIANGLE;
    this->side = MINIMAL_SIDE;
}

Triangle::Triangle(double side) : Triangle()
{
    this->side = (side < MINIMAL_SIDE ? MINIMAL_SIDE : side);
}

Triangle::Triangle(double side, int centerX, int centerY) : Triangle(side)
{
    this->centerX = centerX;
    this->centerY = centerY;
}

double Triangle::getSide() const
{
    return this->side;
}

double Triangle::getArea()
{
    return (std::pow(side, 2) * std::pow(3, 0.5) / 4);
}

void Triangle::setSide(const double side)
{
    this->side = (side < MINIMAL_SIDE ? MINIMAL_SIDE : side);
}

Borders *Triangle::getOuterRect()
{
    Borders* rect = new Borders(side, side * std::pow(3, 0.5) / 2);
    return rect;
}

#include "../include/Rectangle.h"

Rectangle::Rectangle()
{
    this->figureType = RECTANGLE;
}

Rectangle::Rectangle(double width, double height) : Rectangle()
{
    this->width = width;
    this->height = height;
}

Rectangle::Rectangle(double width, double height, int centerX, int centerY) : Rectangle(width, height)
{
    this->centerX = centerX;
    this->centerY = centerY;
}

double Rectangle::getArea()
{
    return (width * height);
}

Borders *Rectangle::getOuterRect()
{
    Borders* rect = new Borders(width, height);
    return rect;
}





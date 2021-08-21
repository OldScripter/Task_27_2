#include "../include/Circle.h"

Circle::Circle()
{
    this->figureType = CIRCLE;
    this->radius = MINIMAL_RADIUS;
}

Circle::Circle(double radius) : Circle()
{
    this->radius = (radius < MINIMAL_RADIUS ? MINIMAL_RADIUS : radius);
}

Circle::Circle(double radius, int centerX, int centerY) : Circle(radius)
{
    this->centerX = centerX;
    this->centerY = centerY;
}

double Circle::getRadius() const
{
    return this->radius;
}

double Circle::getArea()
{
    return (M_PI * std::pow(radius, 2));
}

void Circle::setRadius(const double radius)
{
    this->radius = (radius < MINIMAL_RADIUS ? MINIMAL_RADIUS : radius);
}

Borders* Circle::getOuterRect()
{
    Borders* rect = new Borders(2 * radius, 2 * radius);
    return rect;
}

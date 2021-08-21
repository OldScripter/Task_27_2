#include "../include/Borders.h"

Borders::Borders(double width, double height)
{
    this->width = (width < 0 ? 0 : width);
    this->height = (height < 0 ? 0 : height);
}

double Borders::getWidth() const
{
    return this->width;
}

double Borders::getHeight() const
{
    return this->height;
}

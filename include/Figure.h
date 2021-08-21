#ifndef TASK_27_2_FIGURE_H
#define TASK_27_2_FIGURE_H

#include <iostream>
#include <cmath>
#include "Borders.h"

enum Color
{
    NONE,
    RED,
    BLUE,
    GREEN
};

enum FigureType
{
    NOT_DEFINED,
    TRIANGLE,
    SQUARE,
    CIRCLE,
    RECTANGLE
};

class Figure {

protected:
    Figure(){};
    FigureType figureType {NOT_DEFINED};
    Color color {NONE};
    int centerX {0};
    int centerY {0};
    double area {0};

public:
    Color getColor() const;
    std::string getColorString();
    int getCenterX() const;
    int getCenterY() const;
    FigureType getFigureType() const;
    std::string getFigureTypeString();

    virtual double getArea() = 0;
    virtual Borders* getOuterRect() = 0;

    void setColor(const Color color);
    void setCenterX(const int centerX);
    void setCenterY(const int centerY);
};

#endif //TASK_27_2_FIGURE_H
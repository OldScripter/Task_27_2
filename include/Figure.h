#ifndef TASK_27_2_FIGURE_H
#define TASK_27_2_FIGURE_H

#include <iostream>
#include <cmath>

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
    int centerX;
    int centerY;
    double width;
    double height;

public:
    Color getColor() const;
    std::string getColorString();
    int getCenterX() const;
    int getCenterY() const;

    FigureType getFigureType() const;
    std::string getFigureTypeString();

    /**
     * @method Get the figure area.
     * @return area int
     */
    virtual double getArea() = 0;
    /**
     * @method Print the figure info.
     */
    virtual void printInfo() = 0;
    /**
     * @method Config the Circle via command line input.
     */
    virtual void configure() = 0;

    void setColor(const Color color);
    void setCenterX(const int centerX);
    void setCenterY(const int centerY);

    double getWidth() const;
    double getHeight() const;

    /**
     * @method Get int value from command line input. Print the label before input.
     * @param [in] label std::string
     * @return value int
     */
    static int getIntFromInput(std::string label);
    /**
     * @method Get double value from command line input. Print the label before input.
     * @param [in] label std::string
     * @return value double
     */
    static double getDoubleFromInput(std::string label);
};

#endif //TASK_27_2_FIGURE_H
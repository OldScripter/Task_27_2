#ifndef TASK_27_2_SQUARE_H
#define TASK_27_2_SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {

private:
    double side {MINIMAL_SIDE};

public:
    Square();
    Square(double side);
    Square(double side, int centerX, int centerY);

    double getSide() const;
    void setSide(const double side);
};

#endif //TASK_27_2_SQUARE_H
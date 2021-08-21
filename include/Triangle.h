#ifndef TASK_27_2_TRIANGLE_H
#define TASK_27_2_TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {

private:
    const double MINIMAL_SIDE = 0.1;
    double side {MINIMAL_SIDE};

public:
    Triangle();
    Triangle(double side);
    Triangle(double side, int centerX, int centerY);

    double getArea() override;
    Borders * getOuterRect() override;

    double getSide() const;
    void setSide(const double side);

};

#endif //TASK_27_2_TRIANGLE_H
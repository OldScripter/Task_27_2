#ifndef TASK_27_2_BORDERS_H
#define TASK_27_2_BORDERS_H

class Borders {

private:
    double width {0};
    double height {0};

public:
    Borders(){};
    Borders(double width, double height);
    double getWidth() const;
    double getHeight() const;
};

#endif //TASK_27_2_BORDERS_H
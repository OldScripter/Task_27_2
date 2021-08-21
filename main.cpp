#include <iostream>

#include "include/Circle.h"
#include "include/Triangle.h"
#include "include/Square.h"

double getDoubleFromInput(std::string label)
{
    std::cout << label << "\n";
    std::string input;
    std::getline(std::cin, input);
    try
    {
        double result = std::stod(input);
        return result;
    } catch (std::invalid_argument& ex)
    {
        std::cerr << "Invalid argument.\n";
        return -1;
    }
}

int getIntFromInput(std::string label)
{
    std::cout << label << "\n";
    std::string input;
    std::getline(std::cin, input);
    try
    {
        int result = std::stoi(input);
        return result;
    } catch (std::invalid_argument& ex)
    {
        std::cerr << "Invalid argument.\n";
        return -1;
    }
}

void getFigureData(Figure* f)
{
    std::cout << "---------Figure data---------\n";
    std::cout << "\t - Type: " << f->getFigureTypeString() << "\n";
    std::cout << "\t - Color: " << f->getColorString() << "\n";
    std::cout << "\t - Area: " << f->getArea() << "\n";
    std::cout << "\t - Outer rect width: " << f->getOuterRect()->getWidth() << "\n";
    std::cout << "\t - Outer rect height: " << f->getOuterRect()->getHeight() << "\n";
    std::cout << "\t - Center X: " << f->getCenterX() << "\n";
    std::cout << "\t - Center Y: " << f->getCenterY() << "\n";

    std::cout << "------------------------------\n";
}

void createAndTestFigure(FigureType figureType)
{
    std::cout << "--== Creation ==--\n";
    int centerX = getIntFromInput("\t - Please enter center X:");
    if (centerX == -1) return;

    int centerY = getIntFromInput("\t - Please enter center Y:");
    if (centerY == -1) return;

    int color = getIntFromInput("\t - Please enter the color (1 - RED, 2 - BLUE, 3 - GREEN):");
    if (color == -1) return;
    else if (color > 3) color = 3;
    else if (color < 0) color = 0;

    if (figureType == CIRCLE)
    {
        int r = getDoubleFromInput("\t - Please enter the radius:");
        if (r == -1) return;

        Circle* c = new Circle(r, centerX, centerY);
        c->setColor((Color)color);
        getFigureData(c);
        delete c;
        c = nullptr;
    }
    else if (figureType == TRIANGLE)
    {
        int s = getDoubleFromInput("\t - Please enter the side:");
        if (s == -1) return;

        Triangle* t = new Triangle(s, centerX, centerY);
        t->setColor((Color)color);
        getFigureData(t);
        delete t;
        t = nullptr;
    }
    else if (figureType == RECTANGLE)
    {
        int w = getDoubleFromInput("\t - Please enter the width:");
        if (w == -1) return;

        int h = getDoubleFromInput("\t - Please enter the height:");
        if (h == -1) return;

        Rectangle* r = new Rectangle(w, h, centerX, centerY);
        r->setColor((Color)color);
        getFigureData(r);
        delete r;
        r = nullptr;
    }
    else if (figureType == SQUARE)
    {
        int s = getDoubleFromInput("\t - Please enter the side:");
        if (s != -1)
        {
            Square* sq = new Square(s, centerX, centerY);
            sq->setColor((Color)color);
            getFigureData(sq);
            delete sq;
            sq = nullptr;
        }
    }
}

int main() {
    std::string cmd {" "};
    do
    {
        std::cout << "Please enter the command:\n";
        std::cout << "\t - circle\n";
        std::cout << "\t - triangle\n";
        std::cout << "\t - rectangle\n";
        std::cout << "\t - square\n";
        std::cout << "\t - break (to exit)\n";

        std::getline(std::cin, cmd);

        if (cmd == "circle")
        {
            createAndTestFigure(CIRCLE);
        }
        else if (cmd == "triangle")
        {
           createAndTestFigure(TRIANGLE);
        }
        else if (cmd == "rectangle")
        {
            createAndTestFigure(RECTANGLE);
        }
        else if (cmd == "square")
        {
            createAndTestFigure(SQUARE);
        }
        else if (cmd == "break")
        {
            std::cout << "Finishing the program...\n";
        }
        else
        {
            std::cout << "Unknown command. Try again.\n";
        }
    } while (cmd != "break");
    std::cout << "Program is finished.\n";

    return 0;
}
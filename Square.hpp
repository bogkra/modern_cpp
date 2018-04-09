#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    Square(double x, Color c = GREEN);
    Square(const Square & other) = default;

    double getArea();
    double getPerimeter();
    void print();
    Square() = delete;

private:
    double getY(); // should not have Y dimension
};

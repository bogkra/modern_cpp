#pragma once

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle(double x, double y);
    Rectangle(const Rectangle & other) = default;
    Rectangle() = delete;

    double getArea() const;
    double getPerimeter() const;
    double getX() const;
    double getY() const;
    void print() const;

private:
    double x_;
    double y_;
};

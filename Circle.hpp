#pragma once

#include "Shape.hpp"

class alignas(2) Circle final : public Shape 
{
public:
    Circle(double r, Color c = BLUE);
    Circle(const Circle & other) = default;
    double getArea() const;
    double getPerimeter() const;
    double getRadius() const;
    double getPi();
    void print() const;
    Circle()=delete; // doesn't allow to call default constructor

private:
  double r_;
};



#include "Circle.hpp"
#include <math.h>
#include <iostream>

Circle::Circle(double r, Color c)
{
  r_ = std::move(r);
  color = c;
}


double Circle::getArea() const
{
    return M_PI * r_ * r_;
}

double Circle::getPerimeter() const
{
    return 2 * M_PI * r_;
}

double Circle::getRadius() const
{
    return r_;
}

void Circle::print() const
{
    std::cout << "Circle: radius: " << getRadius() << std::endl
              << "          area: " << getArea() << std::endl
              << "     perimeter: " << getPerimeter() << std::endl
              << "         color: " << strColor(color) << std::endl;
}

[[deprecated("Use M_PI")]]
double Circle::getPi()
{
   return 3.1415;
}

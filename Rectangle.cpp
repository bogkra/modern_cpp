#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(double x, double y, Color c) noexcept 
{
  x_ = std::move(x);
  y_ = std::move(y);
  color = c;
}

double Rectangle::getArea() const noexcept 
{
    return x_ * y_;
}

double Rectangle::getPerimeter() const noexcept 
{
    return 2 * (x_ + y_);
}

double Rectangle::getX() const
{
    return x_;
}

double Rectangle::getY() const
{
    return y_;
}


void Rectangle::print() const
{
    std::cout << "Rectangle:   x: " << getX() << std::endl
              << "             y: " << getY() << std::endl
              << "          area: " << getArea() << std::endl
              << "     perimeter: " << getPerimeter() << std::endl
              << "         color: " << strColor(color) << std::endl;
}

#pragma once
#include <string>

enum Color
{
  RED,
  GREEN,
  BLUE
};

std::string strColor(const Color c);

class Shape
{
public:
    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
    Color color = RED;
};

#pragma once

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle(double x, double y) noexcept;
    Rectangle(const Rectangle & other) = default;
    Rectangle() = delete;

    double getArea() const noexcept override;
    double getPerimeter() const noexcept override;
    double getX() const;
    double getY() const;
    void print() const override;

private:
    double x_;
    double y_;
};

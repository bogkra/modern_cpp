#include "Shape.hpp"
#include <iostream>


std::string strColor(const Color c) 
{
 if (c==RED)   return "red";
 if (c==GREEN) return "green";
 if (c==BLUE)  return "blue";
}


void Shape::print() const
{
    std::cout << "Unknown Shape" << std::endl;
}



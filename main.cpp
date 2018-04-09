#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <memory>
#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Circle.hpp"

using namespace std;

using Collection = vector<shared_ptr<Shape>>;

bool sortByArea(shared_ptr<Shape> first, shared_ptr<Shape> second)
{
    if(first == nullptr || second == nullptr)
    {
        return false;
    }
    return (first->getArea() < second->getArea());
}

bool perimeterBiggerThan20(shared_ptr<Shape> s)
{
    if(s)
    {
        return (s->getPerimeter() > 20);
    }
    return false;
}

bool areaLessThan10(shared_ptr<Shape> s)
{
    if(s)
    {
        return (s->getArea() < 10);
    }
    return false;
}

void printCollectionElements(const Collection& collection)
{
    for(const auto element : collection)
    {
        if(element != nullptr)
        {
            element->print();
        }
    }
}

void printAreas(const Collection& collection)
{
    for(const auto element : collection)
    {
        if(element != nullptr)
        {
            cout << element->getArea() << std::endl;
        }
    }
}

void findFirstShapeMatchingPredicate(const Collection& collection,
                                     bool (*predicate)(std::shared_ptr<Shape> s),
                                     std::string info)
{
    auto iter = std::find_if(collection.begin(), collection.end(), predicate);
    if(*iter != nullptr)
    {
        cout << "First shape matching predicate: " << info << endl;
        (*iter)->print();
    }
    else
    {
        cout << "There is no shape matching predicate " << info << endl;
    }
}

constexpr int fibonacci(const int n)
{
    return n < 3 ? 1 : fibonacci(n-2) + fibonacci(n-1);
}

int main()
{
    cout << fibonacci(5) << "    " << alignof(Circle) << endl;
    Collection shapes;
    shapes = {
                     std::make_shared<Circle>(2.0),
                     std::make_shared<Circle>(3.0), 
                     nullptr, 
                     std::make_shared<Circle>(4.0), 
                     std::make_shared<Rectangle>(10.0, 5.0, GREEN), 
                     std::make_shared<Square>(3.0), 
                     std::make_shared<Circle>(4.7)
    };


    std::unique_ptr<Circle> uniqueCircle;
    shapes.push_back(move(uniqueCircle));

    printCollectionElements(shapes);

    cout << "Areas before sort: " << std::endl;
    printAreas(shapes);

    std::sort(shapes.begin(), shapes.end(), sortByArea);

    cout << "Areas after sort: " << std::endl;
    printAreas(shapes);

    auto square = std::make_shared<Square>(4.0);
    shapes.push_back(square);

    findFirstShapeMatchingPredicate(shapes, perimeterBiggerThan20, "perimeter bigger than 20");
    findFirstShapeMatchingPredicate(shapes, areaLessThan10, "area less than 10");

    return 0;
}


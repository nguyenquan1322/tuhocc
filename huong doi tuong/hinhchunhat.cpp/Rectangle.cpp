#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle()
    {
    }
    Rectangle(double lenght, double width)
    {
        this->length = lenght;
        this->width = width;
    }
    void setLength(double length)
    {
        this->length = length;
    }
    double getLength()
    {
        return length;
    }
    void setWidth(double width)
    {
        this->width = width;
    }
    double getWidh()
    {
        return width;
    }
    double getArea()
    {
        return length * width;
    }
    double getPperimeter()
    {
        return (length + width) * 2;
    }
};
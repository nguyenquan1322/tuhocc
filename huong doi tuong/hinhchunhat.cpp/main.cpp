#include <iostream>
#include "Rectangle.cpp"

using namespace std;
int main()
{
    Rectangle r(4, 5);
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPperimeter() << endl;
    r.setLength(2);
    r.setWidth(3);
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPperimeter() << endl;
    return 0;
}

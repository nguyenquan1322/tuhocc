#include <iostream>

using namespace std;

class Rectangle
{
public:
    double dai, rong;

    double chuvi()
    {
        return (dai + rong) * 2;
    }
    double dientich()
    {
        return dai * rong;
    }
    void getInformation()
    {
        cin >> dai >> rong;
    }

    void display()
    {
        cout << "Area: " << dientich() << endl;
        cout << "Perimeter: " << chuvi();
    }
};

int main()
{
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}
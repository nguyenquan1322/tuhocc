#include <iostream>>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
int main()
{
    double r;
    cout << "mời bạn nhập bán kính hình tròn" << endl;
    cin >> r;
    double chuvi = 2 * M_PI * r;
    double dientich = M_PI * r * r;
    cout << "chu vi la: " << chuvi << endl;
    cout << "diện tích là: " << dientich << endl;
}
#include <iostream>>
using namespace std;
int main()
{
    int tong;
    int hieu;

    cout << "nhập tổng" << endl;
    cin >> tong;
    cout << "nhập hiệu" << endl;
    cin >> hieu;
    float x = (tong + hieu) / 2;
    float y = tong - x;
    cout << "X la " << x << endl;
    cout << "y la " << y;
}
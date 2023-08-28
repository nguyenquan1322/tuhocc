#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap ngay: ";
    cin >> n;
    cout << n / 365 << " " << n / 7 << " " << n % 7;
}
#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 1000)
    {
        cout << "nhap lai: ";
        cin >> n;
    }

    cout << n / 365 << " " << n / 7 << " " << n % 7;
}
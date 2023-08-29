#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "nhap so ";
    cin >> n;

    int sum = 0;
    int num = n < 0 ? -n : n;

    while (num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    cout << sum << endl;

    return 0;
}
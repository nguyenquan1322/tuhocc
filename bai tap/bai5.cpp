#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;

    while (n <= 10 || n > 99999999)
    {
        cout << "nhap lai" << endl;
        cin >> n;
    }

    string numberString = to_string(n);
    if (numberString.front() == numberString.back())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
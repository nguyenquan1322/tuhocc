#include <iostream>
#include <math.h>
using namespace std;
bool sochinhphuong(int n)
{
    int c = sqrt(n);
    if (c * c == n)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    if (sochinhphuong(n) == true)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}
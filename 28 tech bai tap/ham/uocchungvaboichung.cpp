#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
// giải thuật euclid
int gcd(int a, int b)
{
    while (b != 0)
    {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}
// TÌM BỘi chung nhỏ nhất
int lcm(int a, int b)
{
    return a * b / gcd(a, b); ///
    // trán chàn số a/gcd(a,b)*b
}
int main()
{
    int a, b;
    cin >> a >> b;

    // dùng thư viện có sẵn
    cout << __gcd(10, 15); // thư viện có sẵn
    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;
    return 0;
}
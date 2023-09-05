#include <iostream>
#include <cmath>
using namespace std;
bool checkSo(int num)
{
    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}
int main()
{
    int n;
    cout << "nhap so luong: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > 0 && num <= 999999999 && checkSo(num))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

#include <iostream>
using namespace std;
int main()
{
    int nam;
    cout << "mời bạn nhập năm" << endl;
    cin >> nam;
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
    {
        cout << "năm nhuận";
    }
    else
    {
        cout << "năm ko nhuận";
    }
}
#include <iostream>
using namespace std;
int main()
{
    int thang, nam;
    cout << "mời bạn nhập tháng: ";
    cin >> thang;
    if (thang > 12 && thang < 0)
    {
        cout << "bạn nhập sai tháng rồi";
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        cout << "tháng co 30 ngày";
    }
    else if (thang == 2)
    {
        cout << "nhập năm ";
        cin >> nam;
        if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
        {
            cout << "có 29 ngày";
        }
        else
        {
            cout << "có 28 ngày";
        }
    }
    else
    {
        cout << "có 31 ngày";
    }
}
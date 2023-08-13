#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Mời bạn lựa chọn " << endl;
    cout << "tìm tên " << endl;
    cout << "tìm tác giả" << endl;
    cout << "nhà xuất bản " << endl;
    cout << "tiêu đề " << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "nhập tên";
        break;
    case 2:
        cout << "nhập tác giả";
        break;

    default:
        cout << "nhập vớ vẩn nhập lại đi";
        break;
    }
}
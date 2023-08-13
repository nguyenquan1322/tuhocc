#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhập n";
    cin >> n;
    while (n < 1 || n > 99) // vong lặp kiểm tra xem nếu mà n mà sai thì sẽ chạy
    {
        cout << "nhập sai rôì";
        cin >> n;
    }
    cout << "số chính xác " << n;
}
// 2.Viết một chương trình C++ để nhận 5 giá trị nguyên từ bàn phím. 5 giá trị này sẽ được lưu trữ trong một mảng bởi sử dụng một con trỏ.
// Sau đó, in các phần tử của mảng trên màn hình.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
    return 0;
}
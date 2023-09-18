/*
Bài tập: Sắp xếp mảng sử dụng con trỏ và hàm
Viết một chương trình C++ với các yêu cầu sau:
1.	Xây dựng một hàm có tên là sortArray nhận vào một mảng số nguyên và kích thước của mảng. Hàm này sẽ sắp xếp mảng theo thứ tự tăng dần.
2.	Sử dụng cấp phát động để tạo mảng số nguyên (mảng này sẽ được nhập từ người dùng).
3.	Sử dụng một con trỏ để truy cập các phần tử trong mảng và thực hiện việc sắp xếp.
4.	Hiển thị mảng sau khi đã sắp xếp ra màn hình

*/
#include <iostream>
#include <algorithm>
using namespace std;
void sortArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    int n;
    cout << "nhap so phan tu cua mang: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    sortArray(arr, n);
    cout << "mang da sap xep la "
         << " ";
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}
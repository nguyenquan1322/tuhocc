/*
Viết một chương trình C++ với các yêu cầu sau:
1.	Xây dựng một hàm có tên là findMax nhận vào một mảng số nguyên và trả về giá trị lớn nhất trong mảng.
2.	Sử dụng cấp phát động để tạo mảng số nguyên (mảng này sẽ được nhập từ người dùng).
3.	Sử dụng một con trỏ để truy cập các phần tử trong mảng và chạy qua tất cả các phần tử để tìm giá trị lớn nhất.
4.	Hiển thị giá trị lớn nhất tìm thấy ra màn hình.

*/
#include <iostream>
using namespace std;
int findMax(int *arr, int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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
    cout << "Gia tri lon nhat trong mang la: " << findMax(arr, n);

    return 0;
}
// 1. Viết chương trình C++ nhập 10 giá trị nguyên, sau đó tìm giá trị lớn nhất, nhỏ nhất, tìm giá trị có tần suất xuất hiện nhiều nhất,
// sắp xếp mảng theo thứ tự tăng dần, giảm dần và hiển thị kết quả.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu: " << i + 1 << " ";
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "phan tu max la: " << max << endl;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Phan tu min la: " << min << endl;
    int dem = 1;
    int nhieu = arr[0];
    for (int i = 0; i < n; i++)
    {

        int mangnhieu = arr[i];
        int demmang = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == mangnhieu)
            {
                demmang++;
            }
        }

        if (demmang > dem)
        {
            dem = demmang;
            nhieu = mangnhieu;
        }
    }
    cout << "phan tu xuat hien nhieu nhat la: " << nhieu << " "
         << "so lan :" << dem << endl;

    // sắp xếp tăng dần
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "mang tang dan la: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// 5. Viết chương trình C++ để tính tổng mỗi hàng, mỗi cột của một ma trận có kích cỡ n x m, và nếu là ma trận vuông thì tính tổng đường chéo.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap so hang (n): ";
    cin >> n;
    int m;
    cout << "nhap so cot(m): ";
    cin >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sumHang = 0;
        for (int j = 0; j < m; j++)
        {
            sumHang += matrix[i][j];
        }
        cout << "tong hang: " << sumHang;
    }
    for (int i = 0; i < m; i++)
    {
        int sumCot = 0;
        for (int j = 0; j < n; j++)
        {
            sumCot += matrix[i][j];
        }
    }
    cout << "tong cot: " << sumCot << endl;
    if (n == m)
    {
        int diagonalSum = 0;
        for (int i = 0; i < n; i++)
        {
            diagonalSum += matrix[i][i];
        }
        cout << "Tong duong cheo chinh: " << diagonalSum << endl;
    }

    return 0;
}

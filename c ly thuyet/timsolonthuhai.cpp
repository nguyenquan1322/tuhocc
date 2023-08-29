#include <iostream>
using namespace std;
void findSecondMax(int *arr, int n, int *secondMax)
{
    int maxVal = arr[0];
    *secondMax = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            *secondMax = maxVal;
            maxVal = arr[i];
        }
        else if (arr[i] > *secondMax && *secondMax != maxVal)
        {
            *secondMax = arr[i];
        }
    }
}
int main()
{
    int n;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "nhap phan tu thu " << i + 1 << endl;
        cin >> arr[i];
    }
    int secondMaxVl;
    findSecondMax(arr, n, &secondMaxVl);
    cout << "gia tri lon thu 2 la: " << secondMaxVl;
    return 0;
}
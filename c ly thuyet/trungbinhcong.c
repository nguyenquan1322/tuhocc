#include <stdio.h>
float calculateAverage(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (float)sum / n;
}
int main()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)

    {
        printf("Nhap gia tri thu %d: ", i + 1);
        ;
        scanf("%d", &arr[i]);
    }

    printf("Trung binh cong cua mang: %.2f\n", calculateAverage(arr, n));
    return 0;
}
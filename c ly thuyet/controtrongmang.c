#include <stdio.h>

void findMax_min(int arr[], int n, int *minVl, int *maxvl)
{
    *minVl = arr[0];
    *maxvl = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *minVl)
        {
            *minVl = arr[i];
        }
        if (arr[i] > *maxvl)
        {
            *maxvl = arr[i];
        }
    }
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
    int minVal, maxVal;
    findMax_min(arr, n, &minVal, &maxVal);
    printf("Minimum value: %d\n", minVal);
    printf("Maximum value: %d\n", maxVal);
    return 0;
}
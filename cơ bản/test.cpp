
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 2, 4, 1, 9};
    short *p = (short *)&arr[0];
    cout << *(p + 4);
    return 0;
}
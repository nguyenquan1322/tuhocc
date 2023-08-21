/*int a = 1000;
int *x = &a;// con trỏ chỉ tới địa chỉ của a
*x++;///  sao ở đây là lấy giá trị của a và tăng lên một đơn vị nó khác với sao  ở khai báo là địa chỉ*
*/

#include <iostream>
using namespace std;

int double1(int *x)
{
    (*x) += 2;
}

int main()
{
    int n = 1000;
    double1(&n); ////nếu  ở đây muốn truyền n vào hàm double thì ta phải truyêfn điaj chỉ vào con trỏ
    cout << n;
}
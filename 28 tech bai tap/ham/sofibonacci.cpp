// dãy số quan trọng là lời giải của nhiều bài toán
// độ phức tạp 0(n)
//  là dãy số số sau là tổng 2 số đứng trước nó
#include <iostream>
using namespace std;
bool check(long long n)
{
    if (n == 0 || n == 1)
        return true;
    long long f1 = 1, f2 = 0;
    for (int i = 2; i <= 92; i++)
    {
        long long fn = f1 + f2;
        if (fn == n)
        {
            f2 = f1;
            f1 = fn;
        }
    }
    return false;
}
int main()
{
}
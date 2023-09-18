#include <iostream>
using namespace std;
// số nguyên tố là số nguyên dương chỉ có 2 ước là 1 và chính nó
// 1 ko phải là số nguyên tố
// phương pháp

// phương pháp khác làm nhanh hơn
// nếu n có thêm 1 ước ngoài 1 và chính nó thì kết luận ko phải số nguyên tố
bool ngto2(int n)
{
    for (int 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
    }
}
bool nguyento(int n)
{
    int uoc = 0;
    for (int i = 0; i <= n; i++)
    {
        if (n % i == 0)
        {
            uoc++;
        }
    }
    if (uoc == 2)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    if (nguyento(n) == true)
    {
        cout << "la so nguyen to";
    }
    else
    {
        cout << "khong phai";
    }
}
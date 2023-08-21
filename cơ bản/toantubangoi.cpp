#include <iostream>
using namespace std;
int main()
{
    float diemtb;
    cout << "nhập điểm tb ";
    cin >> diemtb;
    string hocluc = (diemtb >= 8) ? "giỏi" : (diemtb < 8 && diemtb >= 6.5) ? "khá"
                                                                           : "yếu";

    cout << hocluc;
}
#include <iostream>

using namespace std;

class Math
{
public:
    double pi = 3.14;
    int getMax(int a, int b)
    {
        return a > b ? a : b;
    }
    static int max(int a, int b)
    {
        return a > b ? a : b;
        //  return getMax(a,b);/// ở đây sẽ báo lỗi bởi vì phuơng thức tĩnh chỉ gọi được hàm giống nó là phương thức tĩnh
    }
    static int min(int a, int b)
    {
        return a < b ? a : b; ///
    }

    static double getPi()
    {
        return pi; //// ở đây cũng sẽ báo lỗi bởi vì nó cũng chỉ lấy được những biến là biến tĩnh , nếu muốn lấy được thì chúng ta phải khai báo pi là static, không tương tác với các thuộc tính thông thường
    }
};

int main()
{
    cout << Math::max(2, 3) << endl;
    cout << Math::min(2, 3) << endl;
    return 0;
}
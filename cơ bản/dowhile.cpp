#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int tong = 0;
    do
    {
        tong += a;    // khối lệnh này sẽ được lặp lại đến khi a đủ đủ điều kiện dưới while
        a++;          // a sẽ tăng thêm 1
    } while (a <= 5); // nếu mà a tăng lên đến 5 thì sẽ dừng và thoát khỏi vòng lặp như vậy  vòng lặp sẽ chỉ chạy khi nào a đến 5
    cout << "tong la: " << tong;
    /// với while true
    /*

    int n = 0
    while (true)
    {
        cout >> n
        n++   nếu ko có break thì nó sẽ chạy vô hạn vì vậy phải có break điều kiênj để vòng lặp được dừng
        if(n=10);
        break; : như vậy khi 5 bằng 10 thì nó sẽ được thoát chương trình
    }
    */
}

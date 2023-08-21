#include <iostream>
using namespace std;
int main()
{
    // int i = 0;
    // break dừng vòng lặp ,
    // continue sẽ bỏ qua điều khiện đó và đi qua
    for (int i; i < 10; i++)
    {
        if (i == 4)
        {
            break;    // dừng vòng lặp và thoát khi i =4 vậy sẽ chỉ in từ 1 đến 4
            continue; /// lệnh này sẽ bỏ qua điều kiện i =4 và in tiếp
        }
    }
}
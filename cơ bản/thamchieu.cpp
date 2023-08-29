#include <iostream>

int main()
{
    int i = 20;
    int &iRef = i;
    std::cout << "i: " << i << std::endl;
    std::cout << "iRef: " << iRef << std::endl;

    std::cout << std::endl;

    iRef = 30; // Thay đổi tham chiếu

    std::cout << "i: " << i << std::endl;
    std::cout << "iRef: " << iRef << std::endl;
}
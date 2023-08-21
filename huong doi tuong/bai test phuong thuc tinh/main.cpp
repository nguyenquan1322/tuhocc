#include <iostream>
#include "getMath.cpp"

using namespace std;
int main()
{
    cout << getMath::abs(-2) << endl;
    cout << getMath::add(2, 3) << endl;
    cout << getMath::subtract(2, 3) << endl;
    cout << getMath::min(2, 3) << endl;
    cout << getMath::max(2, 3) << endl;
    cout << getMath::pow(2, 3) << endl;
    return 0;
}


#include <iostream>

using namespace std;
/*
 int arr[5];
 cout<< arr;/// in ra địa chỉ của thằng đầu  tiên
 cout<< &a[0]/// con trỏ gọi tới địa chỉ a[0] ở trong mảng
  khi đó 2 giá trị điaj chỉ này sẽ bằng nhauu arr là mangr coi như có thể thay thế được cho con chỏ
   

(a+i) sẽ giống với a[i]  nếu muốn dung mảng thì dung (a+i) ví dụ dễ hiểu

int n
cin>>n
int a[n];
for(int i =0; i<n;i++){
    nếu dùng bình thường thì ta có thể viết là cin>>a[i]
    nhưng arr sẽ như một con trỏ rồi nên ta chỉ cần viết
    cin>>*(a+i); sao ở đây là sao của giá trị còn con trỏ là arr rồi
}


*/

int getMaxValue(int *p, int n)
{ /// con chỏ sẽ lấy địa chỉ của arr
    int max = p[0];
    for (int i = 0; i < n; i++)
    {
        if (p[i] > max)
        {
            max = p[i];
        }
    }
    return max;
}

int main()
{
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Max value = " << getMaxValue(arr, n); /// ta cũng có thể lấy điaj chỉ bằng cách &a[0[] nhưng mà arr đã bằng vậy rồi nên chỉ cần truyền vào arr  là được
    return 0;
}
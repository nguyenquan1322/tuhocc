#include <iostream>
using namespace std;
int main()
{
  string name;
  // cout << "tên của banj là gì" << endl;
  // cin>> name;
  // cin là nhập dữ liệu từ màn hình vào
  getline(cin, name); // cách viết có cả dấu cách
  cout << "heloo"
       << " " << name;
  const int age = 9;
  // cout << age;
  // nếu thêm const thì biến int ko thể thay đổi được

  // type promtion
  int a = 8;
  double b = 7.5;
  int d = 9;
  // xuất a +b
  cout << "a+b= " << a + b;
  // nếu mà thêm biến mới để gán thành kq thì sẽ theo kiểu khai báo
  int kq = a + b;
  // như vậy thì  kết qủa sẽ theo kiểu của biến kq

  // các phép toán
  // nhu java

  // a++, a-- postfix
  //++a.--a prefix
  // ưu tiên tinhs toán
  /*
  bước 1 tính prefix
  bước 2 các phép toán còn lại
  bước 3 gán gía trị cho biến ở trái dấu bằng
  bước 4 tính postfix
  */

  /// câu lệnh if else
  // giống như các câu lệnh đã học có gì đâu mà

  // toán tử ba ngôi : nó cũng như js nhưng phải gán biến vào đầu
  // ví dụ
  int n;
  cout << "nhập n";
  cin >> n;
  string traloi = (n % 2 == 0) ? "chẵn" : "lẻ";
  cout << traloi;
  /// switch case
  // switch ()
  // {
  // case /* constant-expression */:
  //   /* code */
  //   break;

  // default:
  //   break;
  // }

  // vòng lặp while
}
// phạm vi thuộc tính
/// thuộc tính để private
// phương thức để public
// đảm bảo tính chất đóng gói, dấu data của một class nào đó để các phương thức bên ngoài truy cập để thuộc tính đó
// ví dụ

#include <iostream>
using namespace std;

class Student
{
private: ///  thuộc tính cuả đóng gói để private
    string name, id, ns;
    double gpa;

public:
    Student(); /// hàm tạo contructor và ko có kiểu trả về
    void xinchao();
    void dihoc(); /// các phương thức và thông thường được xây dựng ở bên ngoài
};
Student::Student()// k xây dựng thi mặc đinh vẫn có
{
    cout << "Ham khởi tạo được gọi\n";
}
void Student::xinchao()
{
    cout << "Hello \n";
}
void Student::dihoc()
{
    cout << "Đi học \n";
}

int main()
{
    Student x; /// mỗi khi hàm này được gọi thì contructor sẽ được chạy
    x.dihoc();
    x.xinchao();

    // cout<<x.id;/// dòng lệnh này ko được tại vì nó thuộc tính đóng gói và là private nên ko truy cập được
}

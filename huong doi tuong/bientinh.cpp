// biến tĩnh là biến được khai báo bằng từ khoá static và có đặc điểm là biến của nó được chia sẻ bởi tất cả các đối tượng trong chương trình

#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    static int numberOfStudents; // khai báo biến tĩnh
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
        numberOfStudents++;
    }
};

int Student::numberOfStudents = 0; // truy xuất biến tĩnh

int main()
{
    Student s1("Manh", 19);
    Student s2("Trung", 19);
    Student s3("Trung", 19);
    cout << s1.numberOfStudents; /// mỗi khi khởi tạo đối tượng thì contructer được khởi tạo và gọi tới biến tĩnh , Các biến static thường được dùng để lưu các giá trị chung của các đối tượng hoặc các hằng số trong chương trình
    // s1.numberOfStudents = 2;
    // s2.numberOfStudents = 3;
    // cout << s1.numberOfStudents << " " << s2.numberOfStudents;
    return 0;
}
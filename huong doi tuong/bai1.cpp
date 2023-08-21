#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int age;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void getInformation()
    {
        cin >> name >> age;
    }
};

/*lass <tên_lớp> {
public:
    // Khai báo danh sách các thuộc tính
    <kiểu_dữ_liệu> <tên_thuộc_tính>;
    ...
    // Khai báo danh sách các phương thức
    <kiểu_trả_về> <tên_phương_thức>(<kiểu_tham_số> <tên_tham_số>, ...) {
        ...
    }
    ...
};*/

int main()
{
    Student s1;
    s1.getInformation();
    s1.display();
    return 0;
}
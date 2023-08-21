// tính chất quan trọng  để tránh dư thừa và sử dụng được lại code vì các class có các thuộc tính chung
//  các class có các phương thưcs chung thì mình sẽ tao class cha để chưas những phương thức đó. các class con sẽ được kế thừa tất cả các phương thức của class cha

#include <iostream>
using namespace std;
/// base class: class cha
/// dẻiver class: class con

//

class Person
{
private:
    string name;
    string address;

public:
    Person(string name, string address)
    {
        this->name = name;
        this->address = address;
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getAddress()
    {
        return address;
    }
    void setAdress(string address)
    {
        this->address = address;
    }
    void in()
    {
        cout << name << " " << address;
    }
};

class Student : public Person
{
private:
    float gpa;

public:
    Student(string name, string adress, float gpa) : Person(name, adress){/// cú pháp gọi contructor của tính kế thừa
                                                                          this->gpa = gpa}
    {
    }
    float getGpa()
    {
        return gpa;
    }
    void setGpa(float gpa)
    {
        this->gpa = gpa;
    }

    // funtion overridding ; ghi đè
    void in()
    { // nối từ lớp cha xuyống
        Person::in()
                cout
            << gpa; // như vậy sẽ ngắn hơn
        // nếu viết như thế này sẽ báo lỗi cout<<name<<""<<adress<<""<<gpa tại vì ko thể truy cập vào được private kể cả là lớp con (thông qua hàm set thì sẽ đưọc)
        cout << getName() << " " << getAddress() << " " << getGpa();
    }
};

class Teacher : public Person
{
private:
    double luong;

public:
    void setLuong(double luong)
    {
        this->luong = luong;
    }
    double getLuong()
    {
        return luong; //
    }
};
int main()
{
    Student s;
    s.setName("quân");
    s.setAdress("phu tho");
    s.setGpa(8);
    s.Person::in; // in của phần tử cha
    cout << s.getName() << " " << s.getAddress() << " " << s.getGpa();
}
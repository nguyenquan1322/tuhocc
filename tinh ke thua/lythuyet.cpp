Kế thừa trong lập trình hướng đối tượng chính là thừa hưởng lại những thuộc tính và phương thức của một lớp.Có nghĩa là nếu lớp A kế thừa lớp B thì lớp A sẽ có những thuộc tính và phương thức của lớp B.Do đó, từ sơ đồ trên bạn có thể tách các thuộc tính và phương thức trùng nhau
                                                                                                                                                                                                                     ra một lớp mới tên là Person và cho lớp Student và Teacher kế thừa lớp này giống như sau :

#include <iostream>

    using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int age)
    {
        this->age = age;
    }
};

// Khai báo lớp Student kế thừa từ lớp Person
class Student : public Person
{ /// đây là cách khai báo lớp kế thừa
private:
    double gpa;

public:
    double getGpa()
    {
        return gpa;
    }

    void setGpa(double gpa)
    {
        this->gpa = gpa;
    }
};

int main()
{
    Student s;
    s.setName("Thien");
    s.setAge(32);
    s.setGpa(7);
    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "Gpa: " << s.getGpa() << endl;

    class A
    {
    public:
        int x;

    protected:
        int y;

    private:
        int z;
    };

    class B : public A
    {
        // x: public
        // y: protected
        // z là private nên không thể được truy cập từ lớp B
    };

    class C : protected A
    {
        // x: protected
        // y: protected
        // z là private nên không thể được truy cập từ lớp C
    };

    class D : private A // 'private' is default for classes
    {
        // x: private
        // y: private
        // z là private nên không thể được truy cập từ lớp D
    };
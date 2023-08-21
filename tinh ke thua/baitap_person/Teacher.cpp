#include "Person.cpp"
#include <iostream>
using namespace std;
class Teacher : public Person
{
private:
    int salary;

public:
    Teacher(string name, int age, string adress, int salary) : Person(name, age, adress)
    {
        this->salary = salary;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getSalary()
    {
        return salary;
    }
    void display()
    {
        Person::display();
        cout << "Salary: " << salary << endl;
    }
};
#include <iostream>
using namespace std;
class Student
{
private:
    int id;
    string name;
    int age;
    string address;
    int score;

public:
    Student()
    {
    }
    Student(int id, string name, int age, string address, int score)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
        this->score = score;
    }
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return age;
    }
    void getAddress(string address)
    {
        this->address = address;
    }
    string getAddress()
    {
        return address;
    }
    void setScore(int score)
    {
        this->score = score;
    }
    int getScore()
    {
        score<0 ? score = 0 : score> 10 ? score = 10 : score;
        return score;
    }
};
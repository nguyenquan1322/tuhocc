#include <iostream>;
using namespace std;

class Sinhvien
{
private:
    int id;
    string name;
    int age;
    string adress;

public:
    Sinhvien();
    Sinhvien(int id, string name, int age, string adress);
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getAdress()
    {
        return adress;
    }
    void Nhap(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> id >> name >> age >> adress;
        }
    }
    void Xuat()
    {
        cout << "id : " << id << endl;
        cout << "Name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "adress: " << adress << endl;
    }
};
Sinhvien::Sinhvien()
{
    id = 0;
    name = "";
    age = 0;
    adress = "";
}

Sinhvien::Sinhvien(int id, string name, int age, string adress)
{
    this->id = id;
    this->name = name;
    this->age = age;
    this->adress = adress;
}
int main()
{
    int n;
    cout << "Nhập số sinh viên: ";
    cin >> n;

    Sinhvien *DanhsachSv = new Sinhvien[n];

    for (int i = 0; i < n; i++)
    {
        DanhsachSv[i].Nhap(1);
    }
    for (int i = 0; i < n; i++)
    {
        DanhsachSv[i].Xuat();
    }
    delete[] DanhsachSv;
    return 0;
}
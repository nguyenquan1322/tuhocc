/*Bài tập: Quản lý danh sách sinh viên sử dụng lớp và con trỏ
Viết một chương trình C++ với các yêu cầu sau:
1.	Xây dựng một lớp có tên là Student để đại diện cho thông tin của sinh viên. Lớp này nên có các thuộc tính như tên, điểm trung bình, và mã số sinh viên.
2.	Sử dụng cấp phát động để tạo một danh sách các đối tượng sinh viên (Student).
3.	Thực hiện các chức năng sau:
o	Thêm một sinh viên vào danh sách.
o	Hiển thị danh sách các sinh viên.
o	Tìm sinh viên có điểm trung bình cao nhất.
o	Tìm sinh viên theo mã số sinh viên.
4.	Sử dụng con trỏ để quản lý danh sách sinh viên và thực hiện các chức năng trên.
*/
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int id;
    string name;
    float gpa;
    Student(int id, string name, float gpa)
    {
        this->name = name;
        this->gpa = gpa;
        this->id = id;
    }
    static const int maxStudents = 100;
    static Student *studentList[maxStudents];
    static int numStudents;

    static void addStudent()
    {
        if (numStudents < maxStudents)
        {
            string name;
            float gpa;
            int id;
            cout << "Nhập tên sinh viên: ";
            cin.ignore();
            getline(cin, name);

            cout << "Nhập điểm trung bình: ";
            cin >> gpa;
            cout << "Nhập mã số sinh viên: ";
            cin >> id;
            studentList[Student::numStudents] = new Student(id, name, gpa);
            numStudents++;
            cout << "Sinh vieen da duoc them vao danh sach: " << endl;
        }
        else
        {
            cout << "danh sach da day";
        }
    }
    static void displayStudents()
    {
        cout << "danh sach sinh vien" << endl;
        for (int i = 0; i < numStudents; i++)
        {
            cout << "Id: " << studentList[i]->id << " "
                 << "||"
                 << "Ten: " << studentList[i]->name << " "
                 << "||"
                 << "Diem trung binh: " << studentList[i]->gpa << endl;
        }
    }
    static void findMaxGPAStudent()
    {
        double maxGpa = studentList[0]->gpa;
        for (int i = 0; i < numStudents; i++)
        {
            if (studentList[i]->gpa > maxGpa)
            {
                maxGpa = studentList[i]->gpa;
                cout << "Sinh vien co diem trung binh cao nhat la" << endl;
                cout << "Id: " << studentList[i]->id << " "
                     << "||"
                     << "Ten: " << studentList[i]->name << " "
                     << "||"
                     << "Diem trung binh: " << studentList[i]->gpa << endl;
            }
        }
    }
    static void findStudentByID()
    {
        cout << "Moi nhap vao id sinh vien: ";
        int findId;
        cin >> findId;
        for (int i = 0; i < numStudents; i++)
        {
            if (findId == studentList[i]->id)
            {
                cout << "Sinh vien co id la " << findId << endl;
                cout
                    << "Ten: " << studentList[i]->name << " "
                    << "||"
                    << "Diem trung binh: " << studentList[i]->gpa << endl;
            }
            else
            {
                cout << "Ko co sinh vien nao co id la " << findId << endl;
            }
        }
    }
};
Student *Student::studentList[Student::maxStudents];
int Student::numStudents = 0;
int main()
{

    while (true)
    {
        cout << "---------------MENU-------------------" << endl;
        cout << "1. Thêm sinh viên" << endl;
        cout << "2. Hiển thị danh sách sinh viên" << endl;
        cout << "3. Tìm sinh viên có điểm trung bình cao nhất" << endl;
        cout << "4. Tìm sinh viên theo mã số sinh viên" << endl;
        cout << "5. Thoát" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Chọn tùy chọn: ";

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            Student::addStudent();
            break;
        case 2:
            Student::displayStudents();
            break;
        case 3:
            Student::findMaxGPAStudent();
            break;
        case 4:
            Student::findStudentByID();
            break;
        case 5:
            // Giải phóng bộ nhớ của sinh viên và thoát chương trình
            for (int i = 0; i < Student::numStudents; i++)
            {
                delete Student::studentList[i];
            }
            return 0;
        default:
            cout << "Tùy chọn không hợp lệ." << endl;
        }
    }

    return 0;
}
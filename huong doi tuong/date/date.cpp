#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void setDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int getDay()
    {
        return day;
    }

    void setDay(int day)
    {
        this->day = day;
    }

    int getMonth()
    {
        return month;
    }

    void setMonth(int month)
    {
        this->month = month;
    }

    int getYear()
    {
        return year;
    }

    void setYear(int year)
    {
        this->year = year;
    }
    void display()
    {
        string day = to_string(this->day); /// chuyển kiểu biến thành kiêu string để nối chuỗi
        string month = to_string(this->month);
        string year = to_string(this->year);
        if (day.length() == 1)
        {
            day = "0" + day;
        }
        if (month.length() == 1)
        {
            month = "0" + month;
        } ///// kiểm tra xem nếu tháng có 1 chữ số thì thêm số 0 đằng trước để lúc nào cũng có 2 ký tự

        cout << day + "/" + month + "/" + year << endl;
    }
};
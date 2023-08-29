
#include <iostream>

#include <math.h>

using namespace std;

class giaiPhuongTrinh

{

private:
    float a;

    float b;

    float c;

public:
    giaiPhuongTrinh(float a, float b, float c)

    {

        this->a = a;

        this->b = b;

        this->c = c;
    }

    giaiPhuongTrinh()

    {

        a = 0;

        b = 0;

        c = 0;
    }

    float getA() { return a; }

    float getB() { return b; }

    float getC() { return c; }

    void nhapSo()

    {

        cout << "Nhap gia tri cho a: ";

        cin >> a;

        cout << "Nhap gia tri cho b: ";

        cin >> b;

        cout << "Nhap gia tri cho c: ";

        cin >> c;
    }

    void giaiPhuongTrinhBac2()

    {

        float delta = b * b - 4 * a * c;

        if (delta > 0)

        {

            float x1 = (-b + sqrt(delta)) / (2 * a);

            float x2 = (-b - sqrt(delta)) / (2 * a);

            cout << "Phuong trinh co 2 nghiem phan biet:" << endl;

            cout << "x1 = " << x1 << endl;

            cout << "x2 = " << x2 << endl;
        }

        else if (delta == 0)

        {

            float x = -b / (2 * a);

            cout << "Phuong trinh co nghiem kep:" << endl;

            cout << "x = " << x << endl;
        }

        else

        {

            cout << "NO" << endl;
        }
    }
};

int main()

{

    giaiPhuongTrinh phuongtrinh;

    cout << "moi nhap so: " << endl;

    phuongtrinh.nhapSo();

    while (phuongtrinh.getA() == 0 && phuongtrinh.getB() == 0 && phuongtrinh.getC() == 0)

    {

        cout << "nhap lai" << endl;

        phuongtrinh.nhapSo();
    }

    phuongtrinh.giaiPhuongTrinhBac2();
}

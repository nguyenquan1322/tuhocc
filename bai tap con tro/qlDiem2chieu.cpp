/*Bài tập: Tính trung bình điểm của sinh viên sử dụng con trỏ và mảng đa chiều
Viết một chương trình C++ với các yêu cầu sau:
1.	Xây dựng một hàm có tên là calculateAverage nhận vào một mảng hai chiều chứa điểm của sinh viên và trả về điểm trung bình của tất cả các sinh viên.
2.	Sử dụng cấp phát động để tạo một mảng hai chiều (mảng này sẽ được nhập từ người dùng). Mỗi hàng của mảng sẽ đại diện cho điểm của một sinh viên.
3.	Sử dụng con trỏ để truy cập các phần tử trong mảng và tính toán điểm trung bình.
4.	Hiển thị điểm trung bình ra màn hình
*/
#include <iostream>
using namespace std;

// Hàm để tính điểm trung bình của tất cả sinh viên trong mảng
double calculateAverage(int **scores, int numRows, int numCols)
{
    double total = 0.0;
    int totalSubjects = numRows * numCols;

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            total += scores[i][j];
        }
    }

    return total / totalSubjects;
}

int main()
{
    int numRows, numCols;

    cout << "Nhập số lượng sinh viên: ";
    cin >> numRows;
    cout << "Nhập số lượng môn học: ";
    cin >> numCols;

    // Cấp phát động một mảng hai chiều để lưu trữ điểm của sinh viên
    int **scores = new int *[numRows];
    for (int i = 0; i < numRows; i++)
    {
        scores[i] = new int[numCols];
    }

    // Nhập điểm của từng sinh viên từ người dùng
    for (int i = 0; i < numRows; i++)
    {
        cout << "Nhập điểm cho sinh viên " << i + 1 << ":" << endl;
        for (int j = 0; j < numCols; j++)
        {
            cout << "Môn học " << j + 1 << ": ";
            cin >> scores[i][j];
        }
    }

    // Tính và hiển thị điểm trung bình của tất cả sinh viên
    double average = calculateAverage(scores, numRows, numCols);
    cout << "Điểm trung bình của tất cả sinh viên là: " << average << endl;

    // Giải phóng bộ nhớ đã cấp phát động
    for (int i = 0; i < numRows; i++)
    {
        delete[] scores[i];
    }
    delete[] scores;

    return 0;
}

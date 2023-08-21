/*
private
Đây là phạm vi truy cập hạn chế nhất, 
tất cả các thuộc tính và phương thức sẽ chỉ được truy xuất từ bên trong lớp đó. 
Ví dụ nếu bạn truy xuất một thuộc tính hoặc phương thức được khai báo với từ khóa private từ bên ngoài thì chương trình sẽ báo lỗi giống như sau:



*/


//ví dụ về private 

/*

#include iostream
using name std
class student {
    public: 
    string name;
    private:
    void display(){
        cout<<"name"<<name;
    }
}

int main()
{
 student s;
 s.name = "quâm";
 s.display(); dòng này sex lôĩ bởi vì display ở trong phạm vi private nên ko thể truy xuất đươjc
}

*/
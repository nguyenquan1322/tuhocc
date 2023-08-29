#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next; /// đây là cấu trúc xây dựng liên kết (gọi là cấu trúc tự trỏ), lưu địa chỉ node tiếp theo trong danh sách liên kết
};

typedef struct Node *node; //// mỗi lân xin cấp phát ko cần node sao và new chỉ cần dùng node sau đó new là được
// hàm cấp phát động một node mới với dữ liệu là số nguyên x
node makeNode(int x)
{
    node tmp = new Node(); // thực chất nó là con trỏ tại vì đã khai báo bên trên typedef
    tmp->data = x;
    tmp->next = nullptr; // NULL
}
// kiểm tra xem node có rỗng hay ko
bool empty(node a)
{ // a chính là node đầu tiên ở trong danh sách liên kết của mình ban đầu chwua có phần tử nào thì a sẽ là phầ tử null
    return a == nullptr;
}

// đếm phần tử
int Size(node a)
{
    int cnt = 0;
    while (a != NULL)
    {                // vòng lặp chạy khi nào a chưa phải là NULL tức là a trỏ vào null thì vòng lặp kết thúc
        a = a->next; // gán địa chỉ của node tiếp theo cho node hiện tại, cho node hiện tại nhảy sang node tiếp theo
    }
}
// thêm một phần tử vào đầu danh sách liên kết
void insertFirst(node &a, int x)
{
    node tmp = makeNode(x);
    if (a == NULL)
    {
        a = tmp; /// trường hợp danh sách rỗng thì nó là th đầu tiên luôn
    }            // nếu àm danh sách ko rỗng
    else
    {
        tmp->next = a; /// cho th này chỏ vào th a để th tmp nó lưu địa chỉ của th đầu tiên để nó liên kết đến các phần tử còn lại
        a = tmp;       // sau đó gán a bằng tmp
    }
}

// thêm một phần tử vào cuối danh sách
void insertLast(node &a, int x)
{
    node tmp = makeNode(x);
    if (a == NULL)
    {
        a = tmp;
    }
    else
    {
        node p = a;
        while (p->next != NULL) // while (p->next != NULL) {...}: Duyệt qua danh sách liên kết bằng cách di chuyển con trỏ p từ nút này sang nút khác bằng cách sử dụng trường next của nút. Vòng lặp này sẽ dừng khi p trỏ đến nút cuối cùng (nút có trường next là NULL).
        {
            p = p->next; // đến đây p là nút cuối cùng trong danh sách liên kết
        }
        p->next = tmp; // Thêm nút tmp vào cuối danh sách
    }
}

// thêm phần tử vào giữa
void insertMid(node &a, int x, int pos)
{
    int n = Size(a);
    if (pos <= 0 || pos > n + 1)
    {
        cout << "vi tri ko hop le:";
    }
    if (n = 1)
    {
        insertFirst(a, x);
        return;
    }
    else if (n == pos + 1)
    {
        insertLast(a, x);
        return;
    }
    node p = a;
    for (int i = 1; i < pos - 1; i++)
    {
        p = p->next; // cho th p là th pos -1
    }
    node tmp = makeNode(x);
    tmp->next = p->next; /// dòng này là gán cho tmp bằng pos nhưng bên trên vòng lặp đã để p đứng đằng trước pos , sau dòng này p sẽ lên là pos gán tmp bằng pos
    p->next = tmp;
}
/// xóa phần tử đầu
void delFirst(node &a)
{
    if (a == NULL)
        return;
    a = a->next; /// cho node thứ 2 bằng thằng a mà a là th đầu tiên trong danh sách khi đó th 2 sẽ thành đầu tiên và th a đầu sẽ mất đi
}
// xóa cuối
void delLast(node &a)
{
    if (a == NULL)
        return;
    node truoc = NULL, sau = a;
    while (sau->next != NULL)
    {
        truoc = sau; // con trỏ gần node cuối
        sau = sau->next;
    }
    if (truoc = NULL)
    {
        a = NULL; // xóa phần tử danh sách có một phần tử
    }
    else
    {
        truoc->next = NULL;
    }
}
// xoa giua
void delMid(node &a, int pos)
{
    int n = Size(a);
    if (pos <= 0 || pos > n + 1)
        return;
    node truoc = NULL, sau = a;
    for (int i = 1; i < pos; i++)
    {
        truoc = sau;
        sau = sau->next;
    }
    if (truoc = NULL)
    {
        a = a->next; // xóa phần tử danh sách có một phần tử
    }
    else
    {
        truoc->next = sau->next;
    }
}
// in
void in(node a)
{
    cout << "-------------" << endl;
    while (a != NULL)
    {
        cout << a->data << " ";
        a = a->next;
    }
}
int main()
{
    node head = NULL; ///// head là th đầu tiên nó là con trỏ null khi đó danh sách liên kết rỗng

    // cout << sizeof(Node) << endl;
}
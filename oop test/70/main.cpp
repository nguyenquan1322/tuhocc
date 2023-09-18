#include <iostream>
#include "Card.cpp"
using namespace std;
int main()
{
    vector<Card> cards;

    // Thêm các thẻ Card vào danh sách
    cards.push_back(Card("Book A", "Author X", 5));
    cards.push_back(Card("Book B", "Author Y", 3));
    cards.push_back(Card("Book C", "Author Z", 7));
    cards.push_back(Card("Book D", "Author W", 1));

    cout << "Danh sach cac the Card truoc khi sap xep:" << endl;
    for (int i = 0; i < cards.size(); i++)
    {
        cards[i].display();
        cout << endl;
    }

    // Sắp xếp danh sách các thẻ Card theo số lượng sách
    Card::sortCarts(cards);

    cout << "Danh sach cac the Card sau khi sap xep:" << endl;
    for (int i = 0; i < cards.size(); i++)
    {
        cards[i].display();
        cout << endl;
    }

    return 0;
}

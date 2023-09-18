#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Card
{
private:
    string nameBook;
    string nameAuthor;
    int numberBook;

public:
    Card(){};
    Card(string nameBook, string nameAuthor, int numberBook)
    {
        this->nameBook = nameBook;
        this->nameAuthor = nameAuthor;
        this->numberBook = numberBook;
    }
    int getNumberBook()
    {
        return this->numberBook;
    }
    void display()
    {
        cout << "Name Book: " << this->nameBook << endl;
        cout << "Name Author: " << this->nameAuthor << endl;
        cout << "Number Book: " << this->numberBook << endl;
    }
    static void sortCarts(vector<Card> &cards)
    {
        for (int i = 0; i < cards.size(); i++)
        {
            for (int j = i + 1; j < cards.size(); j++)
            {
                if (cards[i].getNumberBook() > cards[j].getNumberBook())
                {
                    swap(cards[i], cards[j]);
                }
            }
        }
    }
};
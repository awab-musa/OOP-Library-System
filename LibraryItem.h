#include <iostream>
#include <string>
using namespace std;
class LibraryItem
{
private:
    int id;
    string title;
    bool isBorrowed;
    static int totalItems;

protected:
    float price;

public:
    int getId();
    string getTitle();
    bool getIsBorrowed();

    void setId(int newId);
    void setTitle(string newTitle);
    void setIsBorrowed(bool newIsBorrowed);
    LibraryItem(int id, string title, float price);
    ~LibraryItem();

    static int getTotalItems();

    void comparePrice(LibraryItem &a);
    void borrowItem();
    void borrowItem(string borrowName);

    void virtual displayInfo() = 0;
    void virtual calculateLateFee(int days) = 0;
};
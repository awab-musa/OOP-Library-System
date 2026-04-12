#include <iostream>
#include "LibraryItem.h"
#include "Book.h"
#include "Magazine.h"
#include "ResearchPaper.h"
using namespace std;

int main()
{
    Book b1(1, "Clean Code", 45.99f, "Robert C. Martin", 431);
    Book b2(2, "The Pragmatic Programmer", 39.99f, "Andrew Hunt", 352);
    Magazine m1(3, "National Geographic", 12.50f, 215, "National Geographic Society");
    ResearchPaper r1(4, "Deep Learning Overview", 25.00f, "Geoffrey Hinton", "Artificial Intelligence");

    LibraryItem *items[4] = {&b1, &b2, &m1, &r1};

    cout << "========== LIBRARY CATALOGUE ==========" << endl;
    for (int i = 0; i < 4; i++)
    {
        items[i]->displayInfo();
        cout << endl;
    }
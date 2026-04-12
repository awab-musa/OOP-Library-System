#include "Book.h"
#include <iostream>
using namespace std;
Book::Book(int id, string title, float price, string author, int pages)
    : LibraryItem(id, title, price), author(author), pages(pages)
{
}
Book::~Book()
{
}
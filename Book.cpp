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

string Book::getAuthor()
{
    return author;
}

int Book::getPages()
{
    return pages;
}

void Book::setAuthor(string newAuthor)
{
    author = newAuthor;
}

void Book::setPages(int newPages)
{
    pages = newPages;
}

void Book::displayInfo()
{
    cout << "=== Book ===" << endl;
    cout << "ID: " << getId() << endl;
    cout << "Title: " << getTitle() << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: " << pages << endl;
    cout << "Price: $" << price << endl;
    cout << "Status: " << (getIsBorrowed() ? "Borrowed" : "Available") << endl;
}

// Books have the highest late fee rate: $1.50 per day
void Book::calculateLateFee(int days)
{
    float fee = days * 1.50f;
    cout << "Late fee for book \"" << getTitle() << "\": $" << fee
         << " (" << days << " days at $1.50/day)" << endl;
}
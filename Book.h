#pragma once
#include "LibraryItem.h"
#include <string>
using namespace std;
class Book : public LibraryItem
{
private:
    string author;
    int pages;

public:
    Book(int id, string title, float price, string author, int pages);
    ~Book();
    string getAuthor();
    int getPages();
    void setAuthor(string newAuthor);
    void setPages(int newPages);
    void displayInfo() override;
    void calculateLateFee(int days) override;
};
#include "LibraryItem.h"

int LibraryItem::totalItems = 0;

int LibraryItem::getId()
{
    return id;
}

string LibraryItem::getTitle()
{
    return title;
}

bool LibraryItem::getIsBorrowed()
{
    return isBorrowed;
}

void LibraryItem::setId(int newId)
{
    id = newId;
}

void LibraryItem::setTitle(string newTitle)
{
    title = newTitle;
}

void LibraryItem::setIsBorrowed(bool newIsBorrowed)
{
    isBorrowed = newIsBorrowed;
}

LibraryItem::LibraryItem(int id, string title, float price) : id(id), title(title), price(price)
{
    totalItems++;
}

LibraryItem::~LibraryItem()
{
    totalItems--;
}

int LibraryItem::getTotalItems()
{
    return totalItems;
}

void LibraryItem::comparePrice(LibraryItem &a)
{
}

void LibraryItem::borrowItem()
{
    isBorrowed = true;
    cout << "\"" << title << "\" has been borrowed." << endl;
}

void LibraryItem::borrowItem(string borrowName)
{
}
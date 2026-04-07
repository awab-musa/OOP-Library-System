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
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
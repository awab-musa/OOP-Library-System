#include "Magazine.h"
#include < iostream>
using namespace std;
Magazine::Magazine(int id, string title, float price, int issueNumber, string publisher)
    : LibraryItem(id, title, price), issueNumber(issueNumber), publisher(publisher)
{
}
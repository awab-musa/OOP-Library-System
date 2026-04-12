#include "Magazine.h"
#include < iostream>
using namespace std;
Magazine::Magazine(int id, string title, float price, int issueNumber, string publisher)
    : LibraryItem(id, title, price), issueNumber(issueNumber), publisher(publisher)
{
}
Magazine::~Magazine()
{
}
int Magazine::getIssueNumber()
{
    return issueNumber;
}

string Magazine::getPublisher()
{
    return publisher;
}
void Magazine::setIssueNumber(int newIssueNumber)
{
    issueNumber = newIssueNumber;
}

void Magazine::setPublisher(string newPublisher)
{
    publisher = newPublisher;
}
void Magazine::displayInfo()
{
    cout << "=== Magazine ===" << endl;
    cout << "ID: " << getId() << endl;
    cout << "Title: " << getTitle() << endl;
    cout << "Issue Number: " << issueNumber << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "Price: $" << price << endl;
    cout << "Status: " << (getIsBorrowed() ? "Borrowed" : "Available") << endl;
}
void Magazine::calculateLateFee(int days)
{
    float fee = days * 0.50f;
    cout << "Late fee for magazine \"" << getTitle() << "\": $" << fee
         << " (" << days << " days at $0.50/day)" << endl;
}
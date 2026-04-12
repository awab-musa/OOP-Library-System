#include "ResearchPaper.h"
#include <iostream>
using namespace std;
ResearchPaper::ResearchPaper(int id, string title, float price, string researcher, string field)
    : LibraryItem(id, title, price), researcher(researcher), field(field)
{
}
ResearchPaper::~ResearchPaper()
{
}
string ResearchPaper::getResearcher()
{
    return researcher;
}

string ResearchPaper::getField()
{
    return field;
}
void ResearchPaper::setResearcher(string newResearcher)
{
    researcher = newResearcher;
}

void ResearchPaper::setField(string newField)
{
    field = newField;
}
void ResearchPaper::displayInfo()
{
    cout << "=== Research Paper ===" << endl;
    cout << "ID: " << getId() << endl;
    cout << "Title: " << getTitle() << endl;
    cout << "Researcher: " << researcher << endl;
    cout << "Field: " << field << endl;
    cout << "Price: $" << price << endl;
    cout << "Status: " << (getIsBorrowed() ? "Borrowed" : "Available") << endl;
}
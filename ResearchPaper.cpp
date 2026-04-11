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

// Research papers use a flat fee for the first 7 days, then $1.00/day after
void ResearchPaper::calculateLateFee(int days)
{
    float fee;
    if (days <= 7)
    {
        fee = days * 0.75f;
        cout << "Late fee for research paper \"" << getTitle() << "\": $" << fee
             << " (" << days << " days at $0.75/day)" << endl;
    }
    else
    {
        fee = (7 * 0.75f) + ((days - 7) * 1.00f);
        cout << "Late fee for research paper \"" << getTitle() << "\": $" << fee
             << " (7 days at $0.75/day + " << (days - 7) << " days at $1.00/day)" << endl;
    }
}
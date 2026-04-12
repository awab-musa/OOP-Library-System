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
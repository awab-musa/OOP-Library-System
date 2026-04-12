#include "ResearchPaper.h"
#include <iostream>
using namespace std;
ResearchPaper::ResearchPaper(int id, string title, float price, string researcher, string field)
    : LibraryItem(id, title, price), researcher(researcher), field(field)
{
}
#pragma once
#include "LibraryItem.h"
#include <string>
using namespace std;
class ResearchPaper : public LibraryItem
{
private:
    string researcher;
    string field;

public:
    ResearchPaper(int id, string title, float price, string researcher, string field);
    ~ResearchPaper();
    string getResearcher();
    string getField();
#pragma once
#include "LibraryItem.h"
#include <string>
using namespace std;
class ResearchPaper : public LibraryItem
{
private:
    string researcher;
    string field;
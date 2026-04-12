#pragma once
#include "LibraryItem.h"
#include <string>
using namespace std;
class Magazine : public LibraryItem
{
private:
    int issueNumber;
    string publisher;
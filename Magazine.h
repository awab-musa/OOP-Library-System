#pragma once
#include "LibraryItem.h"
#include <string>
using namespace std;
class Magazine : public LibraryItem
{
private:
    int issueNumber;
    string publisher;

public:
    Magazine(int id, string title, float price, int issueNumber, string publisher);
    ~Magazine();
    int getIssueNumber();
    string getPublisher();
    void setIssueNumber(int newIssueNumber);
    void setPublisher(string newPublisher);
    void displayInfo() override;
    void calculateLateFee(int days) override;
};
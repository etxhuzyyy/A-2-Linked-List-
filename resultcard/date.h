#pragma once
#include <string>

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int, int, int);
    void setDate(int, int, int);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getDay();
    int getMonth();
    int getYear();
    void printDate(std::ofstream &outputFile);
};
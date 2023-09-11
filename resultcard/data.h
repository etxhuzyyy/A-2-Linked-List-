#pragma once

#include <fstream>
#include <string>
using namespace std;
class Data
{
private:
    string cCode;
    string cName;
    int marks;
    float gpa;
    float cgpa;
    string grade;
    int credits;

public:
    Data();
    Data(string, string, int, int);
    void setData(string, string, int, int);
    void setcCode(string);
    void setcName(string);
    void setMarks(int);
    void setCredits(int);
    void calculateGpaAndGrade();
    string getcCode();
    string getcName();
    int getMarks();
    float getGpa();
    string getGrade();
    int getCredits();
    void printData(ofstream &outputFile);
};
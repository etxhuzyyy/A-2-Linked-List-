#pragma once

#include "data.h" // Include the Data class header
#include "node.h"
class List
{
public:
    List();         // Default constructor
    List(int size); // Constructor with size argument
    void add(Data data);
    void printList(ofstream &outputFile);
    float calculateSemesterCGPA();

private:
    Node *head;
    int current;
    int totalCredits;
    float totalGradePoints;
};

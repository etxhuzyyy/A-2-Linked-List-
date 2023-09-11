#include "list.h"
List::List()
{
    head = nullptr;
    current = 0;
    totalCredits = 0;
    totalGradePoints = 0.0;
}

List::List(int size)
{
    // Initialize a new list with the specified size
    head = nullptr;
    current = 0;
    totalCredits = 0;
    totalGradePoints = 0.0;

    // You can perform additional initialization if needed
}

void List::add(Data data)
{
    Node *newNode = new Node(data);
    if (!head)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    // Update the total credits and grade points
    totalCredits += data.getCredits();
    totalGradePoints += (data.getGpa() * data.getCredits());
}

void List::printList(ofstream &outputFile)
{
    if (!head)
    {
        outputFile << "List is empty" << endl;
        return;
    }

    Node *current = head;
    while (current)
    {
        current->data.printData(outputFile);
        outputFile << endl;
        current = current->next;
    }

    // Calculate and print CGPA for the semester
    float semesterCGPA = calculateSemesterCGPA();
    outputFile << "Semester CGPA: " << semesterCGPA << endl;
}

float List::calculateSemesterCGPA()
{
    if (totalCredits > 0)
    {
        return totalGradePoints / totalCredits;
    }
    else
    {
        return 0.0; // Avoid division by zero if there are no courses
    }
}

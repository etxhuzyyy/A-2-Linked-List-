#pragma once

#include "data.h" // Include the Data class header

class Node
{
public:
    // Member variables
    Data data;  // The data stored in the node (you can change the data type as needed)
    Node *next; // Pointer to the next node

    // Constructor to initialize data and set the next pointer to nullptr
    Node(Data data) : data(data), next(nullptr) {}
};

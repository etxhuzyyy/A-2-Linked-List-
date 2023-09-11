#pragma once

#include "date.h" // Include the Date class header
#include "list.h" // Include the List class header
class Student
{
private:
    string id;
    string name;
    Date dob;
    int age;
    List s1;
    List s2;
    List s3;

public:
    Student(string, string, Date, int, List &, List &, List &);
    void setData(string, string, Date, int, List &, List &, List &);
    void setId(string);
    void setName(string);
    void setDate(Date);
    void setAge(int);
    void setS1(List &);
    void setS2(List &);
    void setS3(List &);
    string getId();
    string getName();
    Date getDate();
    int getAge();
    List &getS1();
    List &getS2();
    List &getS3();
    void printData(const string &filename);
};
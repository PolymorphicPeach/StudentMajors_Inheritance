#pragma once

#include <iostream>
using std::string;

class Student{
private:
    static int numStudents;
    double GPA {0};
    string name {"Unset"};
    int studentNum{0};

public:
    Student(std::string);
    void displayInfo();
    double getGPA();
    string getName();
    int getStudentNum();
};


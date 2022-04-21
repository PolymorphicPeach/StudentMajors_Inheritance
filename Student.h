#pragma once

#include <iostream>
using std::string;

class Student{
private:
    static int numStudents;

public:
    Student(std::string);
    void displayInfo();
    double GPA {0};
    string name {"Unset"};
    int studentNum{0};
    // I decided to make studentNum, GPA, and name public. The child classes can't inherit it while it's private -
    // I don't feel like I have the experience right now to use protected/private inheritance, but I'm working on it
};


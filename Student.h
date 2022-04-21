#pragma once

#include <iostream>
using std::string;

class Student{
private:
    double GPA {0};
    string name {"Unset"};
    int studentNum{0};
    static int numStudents;
    
    
public:
    Student(std::string);
    void displayInfo();
    
};


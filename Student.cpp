#include "Student.h"
#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::string;
using std::endl;


int Student::numStudents {0}; //Initializing static variable


Student::Student(std::string name){
    ++numStudents;
    this->name = name;
    // GPA is random from 2.0 - 4.0
    this->GPA = static_cast<double>(((rand() % 19) + 1)) / static_cast<double>(10) + 2;
    this->studentNum = numStudents;
}

void Student::displayInfo(){
    cout << "=================================" << endl
         << "Student Number: " << studentNum << endl
         << "Name: " << name << endl
         << "Major: Undecided" << endl
         << endl
         << "GPA: " << GPA << endl
         << "=================================" << endl;
}




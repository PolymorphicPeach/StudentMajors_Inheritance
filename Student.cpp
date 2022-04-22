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

double Student::getGPA(){
    return GPA;
}

string Student::getName(){
    return name;
}

int Student::getStudentNum(){
    return studentNum;
}


void Student::displayInfo(){
    cout << "=================================" << endl
         << "Student Number: " << getStudentNum() << endl
         << "Name: " << getName() << endl
         << "Major: Undecided" << endl
         << endl
         << "GPA: " << getGPA() << endl
         << "=================================" << endl;
}




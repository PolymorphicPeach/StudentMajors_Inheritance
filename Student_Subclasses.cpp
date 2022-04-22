#include "Student.h"
#include "Student_Subclasses.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


// These only differ in "Major:" section, but it demonstrates how child methods can override a parent
// method of the same name


// Student is actually constructed first even though the argument is passed into the IT constructor
IT::IT(string name) : Student(name){
    
}

void IT::displayInfo(){
        cout << "=================================" << endl
         << "Student Number: " << getStudentNum() << endl
         << "Name: " << getName() << endl
         << "Major: IT" << endl
         << endl
         << "GPA: " << getGPA() << endl
         << "=================================" << endl;
}


Nursing::Nursing(string name) : Student(name){
    
}

void Nursing::displayInfo(){
        cout << "=================================" << endl
         << "Student Number: " << getStudentNum() << endl
         << "Name: " << getName() << endl
         << "Major: Nursing" << endl
         << endl
         << "GPA: " << getGPA() << endl
         << "=================================" << endl;
}


Business::Business(string name) : Student(name){
    
}

void Business::displayInfo(){
        cout << "=================================" << endl
         << "Student Number: " << getStudentNum() << endl
         << "Name: " << getName() << endl
         << "Major: Business" << endl
         << endl
         << "GPA: " << getGPA() << endl
         << "=================================" << endl;
}


Government::Government(string name) : Student(name){
    
}

void Government::displayInfo(){
        cout << "=================================" << endl
         << "Student Number: " << getStudentNum() << endl
         << "Name: " << getName() << endl
         << "Major: Government" << endl
         << endl
         << "GPA: " << getGPA() << endl
         << "=================================" << endl;
}
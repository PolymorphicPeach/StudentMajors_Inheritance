// Author: Matthew Peach
// Program Status: Complete
// Description:
//    Simple program to practice public inheritance and function overriding 
// in child classes. Each child of Student calls a different displayInfo() function.
// The base class also has its own displayInfo() function unique to itself. The children
// can still call the public getter functions inherited from Student.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Student.h"
#include "Student_Subclasses.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){
   srand(time(0)); // Setting random seed for GPA
   
   
   Student *ptr1 = new Student("Priyanka");
   ptr1->displayInfo();
   
   IT *ptr2 = new IT("Ginny Lemon");
   ptr2->displayInfo();
   
   Nursing *ptr3 = new Nursing("Trixie Mattel");
   ptr3->displayInfo();
   
   Business *ptr4 = new Business("Tia Kofi");
   ptr4->displayInfo();
   
   Government *ptr5 = new Government("Bianca Del Rio");
   ptr5->displayInfo();
   
   return 0;
}

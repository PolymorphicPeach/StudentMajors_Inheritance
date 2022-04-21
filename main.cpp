#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Student.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){
   srand(time(0)); // Setting random seed
   
   Student *ptr1 = new Student("Student 1");
   ptr1->displayInfo();
   
   
   return 0;
}

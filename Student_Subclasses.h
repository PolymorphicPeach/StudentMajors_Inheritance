#pragma once

#include <iostream>
#include <string>

using std::string;

class IT : public Student {
 public:   
    IT(string name);
    
    void displayInfo();
};

class Nursing : public Student {
public:
    Nursing(string name);
    
    void displayInfo();
};

class Business : public Student {
public:
    Business(string name);
    
    void displayInfo();
};

class Government : public Student {
public:
    Government(string name);
    
    void displayInfo();
};
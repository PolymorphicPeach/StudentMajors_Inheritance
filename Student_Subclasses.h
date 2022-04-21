#pragma once

#include <iostream>

using std::string;

class IT : public Student {
    void displayInfo();
};

class Nursing : public Student {
    void displayInfo();
};

class Business : public Student {
    void displayInfo();
};

class Government : public Student{
    void displayInfo();
};
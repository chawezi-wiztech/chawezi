#pragma once

#include <string>

//needed for strings
using namespace std;

class student{
    // member variable declaration
    string mFirstName;
    string mLastName;
    unsigned int mAge;
    float mWeight;

    // member function declaration
    void initialise();
    void calculateAge(int yearBorn, int currentYear);
};
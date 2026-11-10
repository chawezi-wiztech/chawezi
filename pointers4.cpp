#include <iostream>
using namespace std;

int main() {
    int intVariable = 20;

    double doubleVariable = 9.0;

    //Pointer to an integer
    int* pIntPointer = &intVariable;

    //Pointer to a double
    double* pDoublePointer = &doubleVariable;


    cout << "pIntPointer Before: " << pIntPointer << endl;
    cout << "pDoublePointer Before: " << pDoublePointer << endl;

    cout << endl;

    //Increment pointers by 1
    pIntPointer = pIntPointer + 1;
    pDoublePointer = pDoublePointer + 1;


    cout << "pIntPointer After: " << pIntPointer << endl;
    cout << "pDoublePointer After: " << pDoublePointer << endl;

    return 0;
}
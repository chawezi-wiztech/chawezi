#include <iostream>
using namespace std;

int main() { 

    //null pointer
    float* pExamplePointer = nullptr;

    float exampleVariable = 2.5f;

    /*Use the address operator to assign an address to
    the pointer*/
    pExamplePointer = &exampleVariable;

    //The size of the variable in memory
    cout << "Size of variable: " << sizeof(exampleVariable) << endl;

    //The size of the pointer in memory
    cout << "Size of pointer: " << sizeof(pExamplePointer) << endl;

    //This is the address of the variable
    cout << "Address of variable: " << &exampleVariable << endl;

    //THis is the address assigned to the pointer
    cout << "Address assigned to pointer: " << pExamplePointer << endl;

    return 0;
}
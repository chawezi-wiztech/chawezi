#include <iostream>
using namespace std;

int main(){
    int firstvalue;
    int secondvalue;

    int * pPointer = nullptr;

    // assign pointer to address of firstvalue
    pPointer = &firstvalue;
    *pPointer = 10; // Indirection

    // assign pointer to address of secondvalue
    pPointer = &secondvalue;
    *pPointer = 20; // Indirection

    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';

    return 0;

}
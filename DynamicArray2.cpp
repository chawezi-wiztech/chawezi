#include <iostream>
using namespace std;

int main() {
    //Array of interger
    int fixedNumbers[3];

    //Dynamic Array
    int* listNumbrs = new int [3];

    //Assigning values to the fixed array
    listNumbrs[0] = 10;
    listNumbrs[1] = 20;
    listNumbrs[2] = 30;

    //Access elements
    cout << "Element[1]: " << listNumbrs[1] << endl;

    cout << "size of fixedNumbers: " << sizeof(fixedNumbers) << endl;

    //This will return the size of a pointer since listNumbers is a pointer
    cout << "size of listNumbrs: " << sizeof(listNumbrs) << endl;

    //Deallocate memory
    delete [] listNumbrs;

    return 0;
    
}
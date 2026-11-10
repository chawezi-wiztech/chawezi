#include <iostream>
using namespace std;

int main() {

    // declare pointer and initialize it
    // so that it doesnt store a random address
    int* pPointer = nullptr;

    int intergerVar = 5;

    //assign pointer to adress of object
    pPointer = &intergerVar;

    //output the value f interherVar
    cout << "intergerVar: " << intergerVar << endl;

    //output the adress assigned to pPointer
    cout << "pPointer: " << pPointer << endl;

    // output the adress of pPointer
    cout << "Address of pPointer: " << &pPointer << endl;

    return 0;

}
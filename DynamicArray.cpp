#include <iostream>
using namespace std;

int main() {
    // user input
    int inputsize = 0;

    cout << "Enter the size of the array: ";

    // capture user input
    cin >> inputsize;

    //Dynamic Array
    float* dynamicArrayOffFloats = new float[inputsize];

    cout << "The size of the array is: " << inputsize << endl;

    delete [] dynamicArrayOffFloats;
    dynamicArrayOffFloats = nullptr;

    return 0;

}
#include <iostream>
using namespace std;

int main() {
    string name = "Bro:";

    string* pname = &name; // pointer to the variable name
    cout << pname << endl; // prints the address of the variable name
    cout << *pname << endl; // prints the value of the variable name
    return 0;
}
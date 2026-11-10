#include <iostream>
using namespace std;

int main() {
    unsigned int a = 60; // 60 = 0011 1100
    unsigned int b = 13; // 13 = 0000 1101
    int c = 0;

    c = a & b; // 12 = 0000 1100
    cout << "Line 1 - value of c is : " << c << endl;

    c = a | b; // 61 = 0011 1101
    cout << "Line 2 - value of c is : " << c << endl;

    c = a ^ b; // 49 = 0011 0001
    cout << "Line 3 - value of c is : " << c << endl;
}
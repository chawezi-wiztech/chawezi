#include <iostream>
using namespace std;

float mass = 5.0f;

int main() {
    
    float mass = 10.0f;
    cout << mass << endl;
    
    cout << ::mass << endl;
    return 0;
}
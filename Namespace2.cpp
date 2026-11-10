#include <iostream>
using namespace std;

namespace first {
    int number = 5;
}

namespace second {
    int number = 10;
}

int main() {
    cout << "first::number:" << first::number << endl;
    cout << "second::number:" << second::number << endl;

    return 0;
}
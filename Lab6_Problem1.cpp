#include <iostream>
#include <string>
using namespace std;

int main() {

    //Dynamically allocate an integer and string 
    int* number = new int;
    string* name = new string;

    //Prompt the user to enter a number and a name
    cout << "Enter a number: ";
    cin >> *number;
    cout << "Enter a name: ";
    cin >> *name;

    //Output the values entered by the user to the console
    cout << "You entered: " << *number << endl;
    cout << "You entered: " << *name << endl;
    
    //Deallocate the dynamically allocated memory
    delete number;
    delete name;

    return 0;
}
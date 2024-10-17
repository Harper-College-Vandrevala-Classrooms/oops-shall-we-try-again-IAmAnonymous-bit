#include <iostream>
#include <string>
#include "oops.cpp"

using namespace std;

int main() 
{
    int value = validInput(0, 100, "Please enter a value: ", "Your value is invalid");

    cout << "Your value is " << value << endl;

    //When "exit" is entered, the program will just return -1.
    //This is just a simple value that I decided to go with so I don't do anything that would make my program crash or have bugs.

    //string value1 = validInput("Please enter a value: ", "Your value is invalid");

    //cout << "Yor value is \"" << value1 << "\"" << endl;

    return 0;
}
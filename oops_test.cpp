#include <iostream>
#include <string>
#include "oops.cpp"

using namespace std;

int main() 
{
    int value = validInput(0, 100, "Please enter a value: ", "Your value is invalid");

    cout << "Your value is " << value << endl;

    string value1 = validInput("Please enter a value: ", "Your value is invalid");

    cout << "Yor value is \"" << value1 << "\"" << endl;

    return 0;
}
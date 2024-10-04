#include <iostream>
#include <string>
#include "oops.cpp"

using namespace std;

int main() 
{
    int value = validInput(0, 100, "Please enter a value: ", "Your value is invalid");

    cout << "Your value is " << value << ".\n";

    return 0;
}
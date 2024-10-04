#include <iostream>
#include <string>

using namespace std;

int validInput(int lower, int upper, string prompt, string error)
{
    int input;
    bool valid_in = false;
    while (!valid_in)
    {
        cout << prompt << endl;
        cin >> input;
        if (lower <= input && upper >= input)
        {
            valid_in = true;
        } else {
            cout << error << endl;
        }
    }

    return input;

};
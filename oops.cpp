#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int validInput(int lower, int upper, string prompt, string error)
{
    string input;
    int value; 
    bool valid_in = false;
    while (!valid_in)
    {
        cout << prompt << endl;
        cout << "Enter \"defaut\" to use the default value of 100" << endl;
        cout << "Enter \"exit\" to leave the menu" << endl;
        getline(cin, input);

        string temp;
        for (int i = 0; i < input.length(); i++)
        {
            temp += tolower(input[i]);
        }

        if (temp == "default") {
            return 100;
        } else if (temp == "exit"){
            return -1;
        } else {
            if (!isdigit(input[0]))
            {
                cout << error << endl;
            } else {
                value = stoi(input);
                valid_in = true;
            }
        }
    }

    return value;

};

string validInput(string prompt, string error)
{
    string input;
    bool valid_in = false;
    while (!valid_in)
    {
        cout << prompt << endl;
        cout << "Enter \"defaut\" to use the default value of \"Hello\"" << endl;
        cout << "Enter \"exit\" to leave the menu" << endl;
        getline(cin, input);

        string temp;
        for (int i = 0; i < input.length(); i++)
        {
            temp += tolower(input[i]);
        }


        if (temp == "default") {
            return "Hello";
        } else if (temp == "exit") {
            return "";
        } else if (input.length() > 0) {
            valid_in = true;
        } else {
            cout << error << endl;
        }

    }

    return input;

};
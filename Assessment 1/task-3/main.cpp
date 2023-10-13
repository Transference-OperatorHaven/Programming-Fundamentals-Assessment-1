#include <iostream>

using namespace std;

int number;
int squaredNumber;

void main()
{
    //Add code to prompt a user for a single number, and then show
    //the square of that number. For example, imagine the session:

    // What number do you want to Square? 5
    // > 5 squared is 25.
    cout << "provide a number to square: ";
    cin >> number;

    while(!cin) // if the input is invalid
    {
        cout << "please input a numeric value this time: ";
        cin.clear(); //resets the failure bit
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //flushes out bad characters
        cin >> number;
    }
    if (cin) { squaredNumber = number * number; cout << "\n\n" << number << " squared is " << squaredNumber << "\n"; }


}
#include <iostream>
#include <string>

using namespace std;

string input;
int verticalPadding;
int horizontalPadding;
int paddingSpaces;
string fullLine;
string paddingLine;
string inputLine;



void main()
{
    //For this challenge, produce a program which 
    //prompts the user for a string of text. When
    //this text is entered, the program should:

    //- Automatically generate a box around the text.
    //- And show it in the console.

    //This is a feature commonly seen in text-based
    //adventure games, to show speech bubbles for characters.

    //---
    //An example session:    

    //Please enter some text: blah something
    //
    // ******************
    // * blah something *
    // ******************

    //Can you also expand this so that the box can be
    //shown with some padding? Or turn it into a function?

    cout << "Enter the text you wish to be displayed: ";
    getline(cin,input);
    cout << "\nHow much vertical padding do you wish to add? (this will be done twice for above and below the text) ";
    cin >> verticalPadding;
    while (!cin) // if the input is invalid
    {
        cout << "please input a numeric value this time: ";
        cin.clear(); //resets the failure bit
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //flushes out bad characters
        cin >> verticalPadding;
    }
    cout << "there will be " << verticalPadding << " lines between the text and the top or bottom of the box.";

    cout << "\n\nHow much horizontal padding do you wish to add between the text and each side of the box (this value will be done twice for each side) ";
    cin >> horizontalPadding;
    while (!cin) // if the input is invalid
    {
        cout << "please input a numeric value this time: ";
        cin.clear(); //resets the failure bit
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //flushes out bad characters
        cin >> horizontalPadding;
    }
    cout << "there will be " << horizontalPadding << " spaces between the text and each wall of the box.";

    cout << "\n\n";

    paddingSpaces = horizontalPadding * 2 + input.length();

    fullLine = '*';
    fullLine.insert(1, paddingSpaces, '*');
    fullLine += '*';
    //making the top and bottom of the box

    paddingLine = '*';
    paddingLine.insert(1, paddingSpaces, ' ');
    paddingLine += '*';
    //making the padding lines

    inputLine = '*';
    inputLine.insert(1, horizontalPadding, ' ');
    inputLine += input;
    inputLine.insert((horizontalPadding + input.length() + 1), horizontalPadding, ' ');
    inputLine += '*';

    cout << "\n" << fullLine;
    for (int i = 0; i <= verticalPadding; i++)
    {
        cout << "\n" << paddingLine;
    }
    cout << "\n" << inputLine;
    for (int i = 0; i <= verticalPadding; i++)
    {
        cout << "\n" << paddingLine;
    }
    cout << "\n" << fullLine;
}
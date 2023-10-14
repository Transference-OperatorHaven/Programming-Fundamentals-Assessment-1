#include <iostream>
#include <string>

using namespace std;

string userInput;
bool capitaliseNextCharacter = true;
int alphaChecker = 0;
bool inputLoop = true;

void main()
{
    //Make a program which converts any given string to sentence case. For example:

    // Please enter some text: hello this is a sentence. and here is another. and another.
    //
    // > Hello this is a sentence. And here is another. And another.

    //The program should be able to work regardless of whitespace between
    //period characters. Note that proper nouns shouldn't be considered here, just
    //the rule that if a character is after a period, it should be capitalised.

    //Additionally, you should expand the solution to:
    //
    // - Show the given text in sentence case, lowercase, or uppercase
    // - Detect if the text has no alphabetical characters, and if so, show a warning
    //
    // e.g.

    // Please enter some text: hello this is another sentence. blah. something else.
    //
    // - Sentence case: Hello this is another sentence. Blah. Something else.
    // - Lowercase: hello this is another sentence. blah. something else.
    // - Uppercase: HELLO THIS IS ANOTHER SENTENCE. BLAH. SOMETHING ELSE.
    //

    cout << "please provided multiple sentences to turn into standardised sentence case: ";
    while (inputLoop)
    {
        alphaChecker = 0;
        getline(cin, userInput);
        for (int i = 0; i <= userInput.length(); i++)
        {
            if (isalpha(userInput[i]))
            {
                break;
            }
            else
            {
                alphaChecker++;
            }
        }

        if (alphaChecker >= userInput.length())
        {
            cout << "your input has no alphabetical characters please provide input that contains alphabetical characters: ";
        }
        else
        {
            inputLoop = false;
        }
    }
    for (int i = 0; i <= userInput.length(); i++)
    {
        if (capitaliseNextCharacter && isalpha(userInput[i]))
        {
            userInput[i] = toupper(userInput[i]);
            capitaliseNextCharacter = false;
        }
        if (userInput[i] == '.' || userInput[i] == '?' || userInput[i] == '!')
        {
            capitaliseNextCharacter = true;
        }
    }

    cout << "\nYour input in Sentence casing: " << userInput;

    for (size_t i = 0; i < userInput.length(); i++) userInput[i] = toupper(userInput[i]);
    
    cout << "\nYour input in upper casing: " << userInput;

    for (size_t i = 0; i < userInput.length(); i++) userInput[i] = tolower(userInput[i]);

    cout << "\nYour input in lower casing: " << userInput;

}
#include <iostream>
#include <string>

using namespace std;
string name;
string username;
string clantag;
int age;
bool correctUsername = false;
string confirmation;



void main()
{
    //Add code to prompt the player for their name, and then
    //greet them with that name. For example, 
    //
    // Please enter your name: ben
    // Hello ben!
    //

    //Expand this so the player is asked for their name, clan tag,
    //age and username. Print out these details like so:
    //
    // - Name: <name>
    // - Username: [<clantag>]<username>
    // - Age: <age>
    //

    cout << "Hello! what's your name? ";
    getline(cin, name);

    for (size_t i = 0; i < name.length(); i++)
    {
        if (name[i] == 0 || name[i - 1] == ' ') 
        {
            name[i] = toupper(name[i]);
        }

        else
        {
            name[i] = tolower(name[i]);
        }
    }


    cout << "\nwhat a nice name! " << name << ", what's your username? ";

    //correct username checker
    while (correctUsername = true)
    {
        getline(cin, username);
        cout << "\n" << name << ", that's a really good username but is " << username << " correct? (yes or no) ";
        cin >> confirmation;
        for (auto& c : confirmation){c = tolower(c);}
        if (confirmation == "yea" || confirmation == "yes" || confirmation == "yeah" || confirmation == "yeag" || confirmation == "")
        {
            correctUsername = true;
            break;
        }
        else 
        {
            cout << "\nthat's a shame, what is your correct username? "; 
        }

    }

    cout << "\nnow, " << name << " enter the clantag that will go with your username (" << username << "). You are allowed up to 4 characters: ";
    cin >> clantag;
    clantag.resize(4);
    for (size_t i = 0; i < clantag.length(); i++) clantag [i] = toupper(clantag[i]);
    cout << "\n your clantag is: " << clantag;

    cout << "\n" << name << ", your username is " << username << ", and your clantag is " << clantag << ". making the visible username: [" << clantag << "]" << username;


    
}
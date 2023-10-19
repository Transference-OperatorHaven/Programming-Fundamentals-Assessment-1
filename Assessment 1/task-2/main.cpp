#include <iostream>
#include <string>

using namespace std;

string name;
string username;
string clantag;
int age;
bool correctUsername = false;
bool clantagValid = true;
bool clantagFlag = false;
bool ageValid = false;
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
    // - name: <name>
    // - username: [<clantag>]<username>
    // - Age: <age>
    //

    cout << "Hello! what's your name? ";
    getline(cin, name);
    for (int i = 0; i <= name.length(); i++)
    {
        name[i] = i == 0 || name[i - 1] == ' ' ? toupper(name[i]) : tolower(name[i]);
    } //capitlising the first character and any character proceeding a space and lowercasing everything else


    cout << "what a nice name! " << name << ", what's your username? ";

    //correct username checker
    while (correctUsername!= true)
    {
        getline(cin, username);

        cout << "\n\n" << name << ", that's a really good username but is " << username << " correct? (yes or no) ";
        getline(cin, confirmation);
        for (auto& c : confirmation) { c = tolower(c); }
        if (confirmation == "yea" || confirmation == "yes" || confirmation == "yeah" || confirmation == "yeag" || confirmation == "y" || confirmation == "ye")
        {
            correctUsername = true;
        }
        else
        {
            cout << "that's a shame, what is your correct username? ";
        }

    }

    cout << "\n\nnow, " << name << ", enter the clantag that will go with your username (" << username << "). You are allowed up to 4 characters and spaces are not valid characters: ";
    while (clantagValid == true)
    {
        getline(cin, clantag);
        clantag.resize(4);
        clantagFlag = false; //resetting flag for proceeding attempts
        for (int i = 0; i < clantag.length(); i++) {if (clantag[i] == ' '){clantagFlag = true;}}
        if (clantagFlag == true){cout << "your clantag is invalid please reinput it: ";}
        else {clantagValid = true; break;}
    }
    for (size_t i = 0; i < clantag.length(); i++) clantag[i] = toupper(clantag[i]); //uppercasing all four characters of the clantag
    cout << "\nyour clantag is: " << clantag;

    cout << "\n\n" << name << ", your username is " << username << ", and your clantag is " << clantag << ". making the visible username: [" << clantag << "]" << username;
    cout << "\nplease now input an age: ";
    while (ageValid == false)
    {
        cin >> age;
        if (!cin) // if the input is invalid
        {
            cout << "please input numeric values this time: ";
            cin.clear(); //resets the failure bit
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //flushes out bad characters
        }
        else if(cin){ageValid == true; break;}
    }

    cout << "\n\nyour stats are as follows:";
    cout << "\n - name: " << name;
    cout << "\n - username: " << username;
    cout << "\n - clantag: " << clantag;
    cout << "\n - Combined clantag and username: [" << clantag << "]" << username;
    cout << "\n - Age: " << age;
}
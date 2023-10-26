#include <iostream>
#include <string>

using namespace std;

string classList[13]{ "Artificer", "Barbarian", "Bard", "Cleric", "Druid", "Fighter", "Monk", "Paladin", "Ranger", "Rogue", "Sorcerer", "Warlock", "Wizard"};
string confirmWords[5]{ "yes", "y", "yeag", "ye", "yeah" };
#define classSize sizeof(classList)/sizeof(string) // must define after array
#define confirmSize sizeof(confirmWords)/sizeof(string) // must define after array

int classChoice;
bool classValid = false;
bool nameConfirmation = false;
string confirmation;


struct PlayerInfo {
    string pName;
    string pClass;

};

void main()
{
   
    //Using structs and arrays, build a character class and name selection system
    //for a text-based game. The program should firstly prompt the user for a class
    //using a numbered menu system. For example:

    // Please choose a character class below:
    // 1. Spearman
    // 2. Knight
    // 3. Archer
    //
    // > 3
    // - You have selected the Archer character class.

    //The character class names and amount are up to you, but should make 
    //use of an array so the solution can be easily extended. Invalid menu choices
    //should also be handled.

    //The user should then be prompted for their in-game name, and then their
    //player details should be shown. These details should be stored in a struct,
    //so player details can be a) easily extended to encompass more player detail
    //types in the future and b) logically exist in one structure.
    
    //The prompt should be shown like below:

    // Please enter your name: ben
    //
    // Player details:
    // - name: ben
    // - Class: Knight

    PlayerInfo player;

    cout << "Hello, please choose one of the " << classSize << " class from the list: " << endl;
    for (int i = 0; i < classSize; i++)
    {
        cout << "\n" << i + 1 << ") " << classList[i];
    }

    cout << "\n\nSelect a class: ";
    while (!classValid)
    {
        cin >> classChoice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //flushes out bad characters
        if (!cin || classChoice < 1 || classChoice > 13)
        {
            cout << "please input a correct numeric values this time: ";
            cin.clear(); //resets the failure bit
        }
        else
        {
            classValid = true;
        }
    }
    classChoice--;
    player.pClass = classList[classChoice];
    
    cout << "Please provide your name: ";
    getline(cin, player.pName);
    for (int i = 0; i <= player.pName.length(); i++)
    {
        player.pName[i] = i == 0 || player.pName[i - 1] == ' ' ? toupper(player.pName[i]) : tolower(player.pName[i]);
    } //capitlising the first character and any character proceeding a space and lowercasing everything else
    while (!nameConfirmation)
    {
        cout << "\nIs \"" << player.pName << "\" correct? ";
        cin >> confirmation;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //flushes out bad characters
        for (auto& c : confirmation) { c = tolower(c); }
        auto found = find(begin(confirmWords), end(confirmWords), confirmation);
        if (found == end(confirmWords))
        {
            cout << "\nplease enter a new name then: ";
            getline(cin, player.pName);
            for (int i = 0; i <= player.pName.length(); i++)
            {
                player.pName[i] = i == 0 || player.pName[i - 1] == ' ' ? toupper(player.pName[i]) : tolower(player.pName[i]);
            }
        }
        else
        {
            nameConfirmation = true;
        }
    }

    cout << "\n\n\n---------";
    cout << "\n- name: " << player.pName;
    cout << "\n- class: " << player.pClass;
    cout << "\n---------";
}
#include <iostream>
#include <string>
#include <vector>
#define NOMINMAX
#include <windows.h>
#include <sstream>


using namespace std;

string itemList[27] = { "Empty", "Cat", "Dubstep", "Wires from a wireless device", "Abraham Lincoln", "A dirty trodden flyer for a 1992 beer festival with the corner torn off", "The socker lost in the dryer", "A human arm", "the moon", "An M1911", "A softly crying goblin", "The One Ring", "A silver hand", "A fighting lion", "Blue health potion", "Adblocker-blocker-blocker", "Yomi's hustle", "A system's down", "The Throngler", "Bee Dee Gee's Hee Bee Bee Gees", "Croydon, London Borough", "Steel pan drum", "Mugshot of an upset orange guy", "A polite pigeon", "The Dictionary of Obscure Sorrows by John Koenig", "A can of milk", "Dr. Pepper's brother, Mr. Pepper", };
struct Inventory
{
    Inventory(string n = "Empty")
    {
        slot = n;
    }

    string slot;
};

void Items();
void ShowAll();
void Help();
void View(int x);
void Set(int x, int y);

Inventory* structPointer;
int sizeOfArray;
bool bExit = false, bLoop = false;
bool cinFail = true;
string userInput;
int vector_i, num1, num2;
vector<string> splitInput;


void main()
{
    cout << "\nEnter the amount of inventory slots you wish to have: ";
    while (cinFail)
    {
        cin >> sizeOfArray;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!cin)
        {
            cin.clear(); //resets the failure bit
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nplease input a correct numeric values this time: ";
            continue;
        }
        else
        {
            cinFail = false;
        }
    }
    structPointer = new Inventory[sizeOfArray];

    char dl = ' ';

    while (!bExit)
    {
        cout << "\n\n>";
        getline(cin,userInput);
        splitInput.push_back(string());
        for (int i = 0; i < userInput.length(); i++)
        {
            if (userInput[i] != ' ')
            {
                splitInput[vector_i].push_back(userInput[i]);
            }
            else
            {
                vector_i++;
                splitInput.push_back(string());
            }
        }
        if (splitInput[0] == "exit")
        {
            bExit = true;
        }
        else if (splitInput[0] == "view")
        {
            num1 = stoi(splitInput[1]);
            if (num1 < 1 || num1 > sizeOfArray)
            {
                num1 == 1;
            }
            num1--;
            View(num1);
        }
        else if (splitInput[0] == "set")
        {
            num1 = stoi(splitInput[1]);
            if (num1 < 1 || num1 > sizeOfArray)
            {
                num1 = 1;
            }
            num1--;
            num2 = stoi(splitInput[2]);
            if (num2 < 1 || num2 > (sizeof(itemList)/sizeof(itemList[0])))
            {
                num2++;
            }
            Set(num1, num2);
        }
        else if (splitInput[0] == "show_all")
        {
            ShowAll();
        }
        else if (splitInput[0] == "items")
        {
            Items();
        }
        else if (splitInput[0] == "help")
        {
            Help();
        }
        else
        {
            cout << "not a recognised command. Use \"help\" to see valid commands." << endl;
        }



        splitInput.clear();
        userInput.clear();
        vector_i = 0;
    }

    delete[] structPointer;


    /*In this challenge, you should build an inventory system using a dynamically
    allocated array of structs.

    There should also be an array of all possible inventory items, so that
    the user can set inventory slots to one of these values. Each index into this
    array could be classes as an "item id"

    
    The player should be able to:
     - Specify the size of the inventory (1 - 16 slots)
     - Type commands to interact with the inventory, like so:
       - "view <number>"         -> Prints out details of the inventory slot index specified by number.
       - "show_all"              -> Shows all slots in the inventory.
       - "set <index> <item_id>" -> Sets the inventory specified by #index to the item #item_id
       - "items"                 -> Shows all the items you can possibly set a slot to, along with their ids.
       - "exit"                  -> Exits the tool

     Invalid choices (such as setting or viewing and invalid index) should also be handled. 

     An example of the commands:
       - "view 0"  -> Shows details of the first inventory slot
       - "set 0 2" -> Sets the first inventory slot to item id #2

     -------------

     An example list of items:
      - 0: Empty
      - 1: Shield
      - 2: Potion
      - 3: Gloves
    
     An example session with these items might look like:

      Please enter an inventory size: 8
      > Initialized inventory with 8 slots.
     
      > view 0
     
      Inventory Slot 0 information:
      name: Empty
     
      > set 0 2
     > view 0
    
     Inventory Slot 0 information:
     name: Potion
    
     > items
     - 0: Empty
     - 1: Shield
     - 2: Potion
     - 3: Gloves
    
     > show_all
    
     Inventory: 
     - Slot 0: Potion
     - Slot 1: Empty
     - Slot 2: Empty
     - Slot 3: Empty
     - Slot 4: Empty
     - Slot 5: Empty
     - Slot 6: Empty
     - Slot 7: Empty
    
    > exit*/
}

void Items()
{
    for (int i = 0; i < sizeof(itemList)/sizeof(string); i++)
    {
        cout << "\n" << i+1 << " - " << itemList[i];
    }
    cout << "\n\n";
    system("PAUSE");
}

void ShowAll()
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "\nSlot " << i+1 << " - " << (structPointer[i]).slot;
    }
    cout << "\n\n";
    system("PAUSE");
}

void Help()
{
    cout << "\nthe list of valid commands are: items, view (slot number), show_all, set (slot number) (item number), exit";
    cout << "\n\n";
    system("PAUSE");
}

void View(int x)
{
    cout << "\nSlot " << x+1 << " is " << (structPointer[x]).slot;
}

void Set(int x, int y)
{
    cout << "\nAssigning Slot " << x+1 << " to hold " << itemList[y];
    (structPointer[x].slot) = itemList[y];
}
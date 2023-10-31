#include <iostream>
#include <string>
#define LENGTH(x) sizeof(x)/sizeof(x[0])
using namespace std;

string itemList[27] = { " ", "Cat", "Dubstep", "Wires from a wireless device", "Abraham Lincoln", "A dirty trodden flyer for a 1992 beer festival with the corner torn off", "The socker lost in the dryer", "A human arm", "the moon", "An M1911", "A softly crying goblin", "The One Ring", "A silver hand", "A fighting lion", "Blue health potion", "Adblocker-blocker-blocker", "Yomi's hustle", "A system's down", "The Throngler", "Bee Dee Gee's Hee Bee Bee Gees", "Croydon, London Borough", "Steel pan drum", "Mugshot of an upset orange guy", "A polite pigeon", "The Dictionary of Obscure Sorrows by John Koenig", "A can of milk", "Dr. Pepper's brother, Mr. Pepper", };
struct Inventory
{
    Inventory(string n = " ")
    {
        slot = n;
    }

    string slot;
};

void Items();
void ShowAll();


Inventory* structPointer;
int sizeOfArray;
bool bExit = false;
string userInput, parameter1,parameter2;


void main()
{

    cout << "\nEnter the amount of inventory slots you wish to have: ";
    cin >> sizeOfArray;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  //flushes out bad characters
    structPointer = new Inventory[sizeOfArray];

    while (!bExit)
    {
        cout << "\n\n>";
        cin >> userInput;

        if (userInput == "items")
        {
            Items();
        }

        else if (userInput == "exit")
        {
            bExit = true;
        }
        
        else if (userInput == "view_all")
        {
            ShowAll();
        }
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
    for (int i = 0; i < LENGTH(itemList); i++)
    {
        if (i == 0) 
        {
            continue;
        }
        else 
        {
            cout << "\n" << i << " - " << itemList[i];
        }
    }
}

void ShowAll()
{
    for (int i = 0; i < LENGTH(&structPointer); i++)
    {
        cout << i << " - " << &structPointer[i];
    }
}
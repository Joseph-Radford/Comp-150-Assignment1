#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

//declare functions
int iconFunction();
int stereofunction();
int mapfunction();
int menufunction();
int wallpaperfunction();
int diagnosticsfunction();

int mapfunction() //working
{
    int location;
    string line;
    string top = "---------------------------------------------- \n";
    string side1 = "|         Dab                                | \n";
    string side2 = "|        Please select a destination!        | \n";
    string side3 = "|          Currently you are: Home           | \n";
    string side4 = "|        1. UFV                              | \n";
    string side5 = "|        2. Walmart                          | \n";
    string side6 = "|        3. Work                             | \n";
    string side7 = "|        4. Return to the Main Menu          | \n";
    string side8 = "|                                            | \n";
    string icons = "---------------------------------------------- \n";
    string format = " \n";
    cout << top << side1 << side2 << side3 << side4 << side5 << side6 << side7 << side8 << icons << endl;
    cin >> location;
    if (location == 4)
    {
        cout << menufunction();
    }
    switch (location) {
    case 1:

        cout << "Directing you to: UFV\n";
        cout << "---------------------------------------------- \n"
            "|   * (Home)                                 | \n"
            "|   |                                        | \n"
            "|   |                                        | \n"
            "|   ----------|                              | \n"
            "|             |                              | \n"
            "|             |                              | \n"
            "|             |------------>O (UFV)          | \n"
            "|                                            | \n"
            "---------------------------------------------- \n";
        cout << "Would you like to return to the Main Menu (4)? \n";
        cin >> location;
        if (location == 4)
        {
            cout << menufunction();
        }
        break;
    case 2:
        cout << "Directing you to: Walmart\n";
        cout << "---------------------------------------------- \n"
            "|(Walmart) O<----                            | \n"
            "|                |                           | \n"
            "|                 ----------------           | \n"
            "|                                |           | \n"
            "|                                |           | \n"
            "|                                ---|        | \n"
            "|                                   |        | \n"
            "|                                   * (Home) | \n"
            "---------------------------------------------- \n";
        cout << "Would you like to return to the Main Menu (4)? \n";
        cin >> location;
        if (location == 4)
        {
            cout << menufunction();
        }
        break;
    case 3:
        cout << "Directing you to: Work\n";
        cout << "---------------------------------------------- \n"
            "|                                            | \n"
            "|               ------------> O (Work)       | \n"
            "|               |                            | \n"
            "|               |                            | \n"
            "|               |                            | \n"
            "|               * (Home)                     | \n"
            "|                                            | \n"
            "|                                            | \n"
            "---------------------------------------------- \n";
        cout << "Would you like to return to the Main Menu (4)? \n";
        cin >> location;
        if (location == 4)
        {
            cout << menufunction();
        }
        break;
    }
    return 0;
}

int stereofunction() //working
{
    int input;
    string song;
    string songArray[4] = { "Thriller", "The Keeper", "Gonna Fly Now", "Cheeseburger in Paradise" };
    string top = "---------------------------------------------- \n";
    string side1 = "|                                            | \n";
    string side2 = "|    Enter the song you want to listen to,   | \n";
    string side3 = "|      enter /Shuffle/ for a random song,    | \n";
    string side4 = "|   Or, please Enter /Main Menu/ to return.  | \n";
    string side5 = "|                                            | \n";
    string side6 = "|                                            | \n";
    string side7 = "|                                            | \n";
    string side8 = "|                                            | \n";
    string icons = "---------------------------------------------- \n";
    string format = " \n";

    char choice = 0;
    cout << top << side1 << side2 << side3 << side4 << side5 << side6 << side7 << side8 << icons << endl;
    cin >> song;

    if (song == "Shuffle")
    {
        srand(time(NULL));

        string songArray[4] = { "Thriller", "The_Keeper", "Gonna_Fly_Now", "Cheeseburger_in_Paradise" };
        int RandIndex = rand() % 4;
        cout << "---------------------------------------------- \n"
            "|                                            | \n"
            "|    -----                                   | \n"
            "|   |     |      ___       o  __   ___       | \n"
            "|   |-----  |   |___| |  | | |  | |   |      | \n"
            "|   |       |__ |   | |__| | |  | |___|      | \n"
            "|    __   __             |            |      | \n"
            "|   |  | |  | |   |                 __|      | \n"
            "|   |  | |__| |_|_|                          | \n"
            "---------------------------------------------- \n";
        cout << "Now playing: " << songArray[RandIndex] << "\n";
        cout << "Return to the Menu (1)? Or would you like to play another song (2)? \n";
        cin >> input;
        switch (input) {
        case 1:
        {
            cout << menufunction();
            break;
        }
        case 2:
        {
            cout << stereofunction();// doesnt return to stereo
            break;
        }
        }
    }
    else if (song != "Shuffle" || song != "Menu" || song != "menu")
    {
        cout << "---------------------------------------------- \n"
            "|                                            | \n"
            "|    -----                                   | \n"
            "|   |     |      ___       o  __   ___       | \n"
            "|   |-----  |   |___| |  | | |  | |   |      | \n"
            "|   |       |__ |   | |__| | |  | |___|      | \n"
            "|    __   __             |            |      | \n"
            "|   |  | |  | |   |                 __|      | \n"
            "|   |  | |__| |_|_|                          | \n"
            "---------------------------------------------- \n";
        cout << "Now Playing: \n" << song << endl;
        cout << "Returnn to the Menu (1)? Or would you like to play another song (2)? \n";
        cin >> song;
        if (song == "1")
        {
            cout << menufunction();
        }
        else if (song == "2")
        {
            cout << stereofunction();
        }
    }
    else if (song == "Menu" || song == "menu")
    {
        cout << menufunction(); //this will return you to main menu
    }
    return 0;
}

int iconFunction() // working
{
    int yesno;
    string output;
    string top = " #---------------------#----------------------# \n"; //  edit1
    string side1 = "|     Welcome to the Icon Customizer!        | \n";
    string side2 = "|       You can customize the top            | \n";
    string side3 = "|         and bottom Icon Sets.              |\n";
    string side4 = "|                                            | \n";
    string side5 = "|                                            | \n";
    string side6 = "|                                            | \n";
    string side7 = "|                                            | \n";
    string icons = "|@     @        @        @         @        @| \n"; // Edit2
    string format = "                            \n";
    string spacer = " \n";
    cout << top << side1 << side2 << side3 << side4 << side5 << side6 << side7 << icons << endl;
    cout << "Please enter the changes to the icons you'd like to make. \n";
    getline(cin, spacer);
    getline(cin, top);
    getline(cin, icons);
    cout << format << top << format << side1 << side2 << side3 << side4 << side5 << side6 << side7 << icons << endl;
    output = top + side1 + side2 + side3 + side4 + side5 + side6 + side7 + icons;
    ofstream myFile;
    myFile.open("output.txt");
    myFile << format << top << format << side1 << side2 << side3 << side4 << side5 << side6 << side7 << icons;
    myFile.close();
    cout << "If you are happy with the changes, 1.Yes 2.No \n" << endl;
    cin >> yesno;
    switch (yesno) {
    case 1:
        cout << menufunction(); //this will return you to main menu
        break;
    case 2:
        cout << iconFunction();
        break;
    }
    return 0;
}

int wallpaperfunction() //WIP
{
    string input;
    string one;
    string two;
    string three;
    string four;
    string wallpaper;
    ofstream myFile;
    myFile.open("output.txt");

    cout << "---------------------------------------------- \n"
        "|                                            | \n"
        "|       Welcome to Wallpaper selection!      | \n"
        "|        Select a preset or design your      | \n"
        "|                  own!                      | \n"
        "|          1. Beach                          | \n"
        "|          2. Cat                            | \n"
        "|          3. Design your Own                | \n"
        "|                                            | \n"
        "---------------------------------------------- \n";
    cin >> input;
    if (input == "1")
    {
        string wallpaper = "---------------------------------------------- \n"
            "|                                            | \n"
            "| _\/_                 |                _\/_ | \n"
            "| /o\\             \       /            //o\ | \n"
            "|  |                 .---.                |  | \n"
            "| _|_______     --  /     \  --     ______|__| \n"
            "|          `~^~^~^~^~^~^~^~^~^~^~^~`         | \n"
            "|                                            | \n"
            "|                                            | \n"
            "---------------------------------------------- \n";
        cout << wallpaper;
        ofstream myFile;
        myFile.open("output.txt");
        myFile << wallpaper;
        myFile.close();
        cout << "Return to the menu (1)? Or would you like to choose a different wallpaper (2)? \n";
        cin >> input;
        if (input == "1")
        {
            cout << menufunction();
        }
        else if (input == "2")
        {
            cout << wallpaperfunction();
        }
    }
    else if (input == "2")
    {
        string wallpaper =
            "---------------------------------------------- \n"
            "|                                            | \n"
            "|                                            | \n"
            "|             |)      _,,,---,,_             | \n"
            "|      ZZZzz /,`.-'`'    -.  ;-;;,_          | \n"
            "|           |,4-  ) )-,_. ,| (  `'-'         | \n"
            "|          '---''(_/--'  `-'|_)              | \n"
            "|                                            | \n"
            "|                                            | \n"
            "---------------------------------------------- \n";
        cout << wallpaper;
        ofstream myFile;
        myFile.open("output.txt");
        myFile << "Cat Wallpaper\n" << wallpaper;
        myFile.close();
        cout << "Return to the menu (1)? Or would you like to choose a different wallpaper (2)? \n";
        cin >> input;
        if (input == "1")
        {
            cout << menufunction();
        }
        else if (input == "2")
        {
            cout << wallpaperfunction();
        }
    }
    else if (input == "3")
    {
        string one = "------------------------------ \n";
        string two = "|                                  | \n";
        string three = "|                                 | \n";
        string four = " |                                | \n";
        string five = " |                                | \n";
        string spacer = "\n";
        string bottom = "_____________________________ \n";
        cout << "You will have four lines to design your wallpaper. \n"
            "Please ensure your design is centered!\n";
        getline(cin, two);
        getline(cin, three);
        getline(cin, four);
        getline(cin, five);
        getline(cin, spacer);
        cout << one << two << "\n" << three << "\n" << four << "\n" << five << "\n" << spacer << "\n" << bottom;
        ofstream myFile;
        myFile.open("output.txt");
        myFile << "Custom Wallpaper\n" << one << two << "\n" << three << "\n" << four << "\n" << five << "\n" << spacer << "\n" << bottom;
        myFile.close();
        cout << "Return to the menu (1)? Or would you like to choose a different wallpaper (2)? \n";
        cin >> input;
        if (input == "1")
        {
            cout << menufunction();
        }
        else if (input == "2")
        {
            cout << wallpaperfunction();
        }
    }

    return 0;
}

int menufunction() //Returns Here with Menu Input
{
    int input;
    cout << "---------------------------------------------- \n"
        "|                                            | \n"
        "|     Welcome to the Touchscreen Settings!   | \n"
        "|      Please select one of the options      | \n"
        "|             you would like to use.         | \n"
        "|      1. Change App Icons                   | \n"
        "|      2. Stereo                             | \n"
        "|      3. Map                                | \n"
        "|      4. Wallpaper                          | \n"
        "|      5. Diagnostics                        | \n"
        "---------------------------------------------- \n";
    cin >> input;
    if (input == 1)
    {
        cout << iconFunction();
    }
    else if (input == 2)
    {
        stereofunction();
    }
    else if (input == 3)
    {
        mapfunction();
    }
    else if (input == 4)
    {
        wallpaperfunction();
    }
    else if (input == 5)
    {
        diagnosticsfunction();
    }
    else if (input == 'q')
    {
        return -2;
    }

}

int diagnosticsfunction() //Loop Requirement
{
    srand(time(NULL));

    string diagnosticArray[3] = { "Working", "Not Working", "Working" };
    int randIndex1 = rand() % 3;
    int randIndex2 = rand() % 3;
    int randIndex3 = rand() % 3;
    int randIndex4 = rand() % 3;
    int test;
    cout << "Perform a diagnostics test? Yes (1) No (2) \n";
    cin >> test;
    if (test == 1) {
        for (int i = 0; i < 1; i++)
        {
            cout << "Test Result for Power Steering: \n" << diagnosticArray[randIndex1] << "\n";
            cout << "Test Result for Rear Differential: \n" << diagnosticArray[randIndex2] << "\n";
            cout << "Test Result for Rapid Charging: \n" << diagnosticArray[randIndex3] << "\n";
            cout << "Test Result for Windshield Wipers: \n" << diagnosticArray[randIndex4] << "\n";

            cout << "Would you like to run the test again? Yes (1) No (2) \n";
            cin >> test;
            if (test == 1)
            {
                diagnosticsfunction();
            }
            else if (test == 2)
            {
                menufunction();
            }
        }
    }
    else if (test == 2)
    {
        cout << menufunction();
    }
    return 0;
}

int main() // starts here with output
{
    int input;
    cout << menufunction();

    return 0;
}


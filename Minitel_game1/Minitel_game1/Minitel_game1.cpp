// Minitel_game1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "includer.h"

Squad Equipe(4, 0);

////////////////////////////////////////////////////////////
//ENEMY LIST

//EASY

NPC crapule("Crapule", simplet, 20, 10, 3, 1, 1, 1, 2);

//MEDIUM

//HARD

//BOSS

////////////////////////////////////////////////////////////
//ITEM LIST

Weapon_cac longsword("Longsword", 12);
Weapon_dis crossbow("Crossbow", 9);
Heal bandage("Bandage", 10);
Bonus cocaine("Cocaine", 999);
Armor_body tshirt("T-shirt", 5);
Armor_helmet wizard_hat("Wizard hat", 12);

////////////////////////////////////////////////////////////
//MAP GENERATOR

const int HEIGHT = 15, WIDTH = 30;

int x = 0, y = 0;

char myMap[HEIGHT][WIDTH] = {
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 'T', '.' },
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'.', '.', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'.', '.', '.', '.', '.', '.', '~', '~', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'~', '~', '~', '~', '~', '~', '~', '~', '~', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'.', '.', '~', '.', '~', '~', '~', '~', '~', '~', '.', '.', '.', '.', '.', '.', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'.', '.', '.', '.', '.', '~', '~', '~', '~', '~', '~', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'.', '.', '.', '.', '.', '.', '~', '~', '~', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'.', '.', '.', '.', '.', '.', '.', '~', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 'T', '.', '.', '.', '.', '.' },
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' }
};

void printmap() 
{
    cout << "(" << x << ',' << y << ")" << endl;
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == y && j == x)
                cout << "@";
            else
                cout << myMap[i][j];
        }
        cout << endl;
    }
}

////////////////////////////////////////////////////////////
//EVENT CHECKER

void combat_loop()
{
    cout << "combat" << endl;
    while ("Combat Loop")
    {

    }
}

void event_loop()
{
    cout << "event" << endl;
}

void item_loop()
{
    cout << "item" << endl;

}

void check_event()
{
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, 5);
    int rand = dist(mt);

    if (myMap[y][x] != 'X') {
        cout << "Il y a un evenement." << endl;
        if (rand == 0)
            combat_loop();
        else if (rand >= 1 && rand <= 3)
            event_loop();
        else if (rand > 3)
            item_loop();
    }
    else
        cout << "Le lieu est deja visite" << endl;
}

////////////////////////////////////////////////////////////
//COMMAND CHECKER

enum command_line {
    Quit,
    Print_map,
    Left,
    Right,
    Up,
    Down,
    Help,
    Info
};

command_line checker(string command)
{
    if (command == "Quit") return Quit;
    if (command == "Map") return Print_map;
    if (command == "West") return Left;
    if (command == "East") return Right;
    if (command == "North") return Up;
    if (command == "South") return Down;
    if (command == "Help") return Help;
    if (command == "Info") return Info;
}

void check_command(string command)
{
    switch (checker(command)) {
    case Quit: exit(0); break;
    case Print_map: printmap(); break;
    case Left:
        if (x > 0) { x--; printmap(); check_event(); }
        else
            cout << "You can't go west." << endl;
        break;
    case Right:
        if (x < WIDTH) { x++; printmap(); check_event(); }
        else
            cout << "You can't go east." << endl;
        break;
    case Up: 
        if (y > 0) { y--; printmap(); check_event(); }
        else
            cout << "You can't go north." << endl;
        break;
    case Down:
        if (y < HEIGHT) { y++; printmap(); check_event(); }
        else
            cout << "You can't go south." << endl;
        break;
    case Help:
        cout << "-Quit : quit the game." << endl;
        cout << "-Map : print the map." << endl;
        cout << "-West : go to the left." << endl;
        cout << "-East : go to the right." << endl;
        cout << "-North : go up." << endl;
        cout << "-South : go down." << endl;
        cout << "-Info : Print your team informations." << endl;
        break;
    case Info:
        cout << "Choose the squad member : " << endl;
        cout << "--------------------" << endl;
        Equipe.print_membername();
        cout << "--------------------" << endl;
        getline(cin, command);
        if (Equipe.check_membername(command) == true)
            Equipe.get_member(command).print_character();
        else
            cout << "Unknown Character." << endl;
        break;
    default:
        printmap();
        cout << "Unknown command. Type \"Help\" for more informations." << endl;
    }
}

////////////////////////////////////////////////////////////
//MAIN

int main()
{
    string command;

    PC Chen("Chen", simplet);
    Equipe.add_member(&Chen);
    printmap();
    while ("Map loop")
    {
        if (myMap[y][x] != 'T')
            myMap[y][x] = 'X';
        cout << "Enter command : ";
        getline(cin, command);
        if (system("CLS")) system("clear");
        check_command(command);
    }

   /* cout << longsword << crossbow << bandage << cocaine << tshirt << wizard_hat;
    cout << "---------------------" << endl;

    inventaire.add_item(&longsword);
    inventaire.add_item(&tshirt);
    inventaire.add_item(&bandage);
    inventaire.add_item(&bandage);
    inventaire.add_item(&bandage);
    inventaire.add_item(&cocaine);
    inventaire.print_list();
    cout << "---------------------" << endl;

    equipement.print_equip();*/
}
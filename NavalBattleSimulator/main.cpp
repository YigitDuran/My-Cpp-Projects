#include <iostream>
#include <ctime>
#include "cruiser.h"
#include "submarine.h"

//question 1 at cruiser.cpp and submarine.cpp attack functions.
//question 2 delete's in the main.

int main()
{
    srand(time(NULL));

    naval_ship **ship_fleet1 = new naval_ship*[2];

    ship_fleet1[0] = new submarine("Submarine1", 100, 200, 45, 200);
    ship_fleet1[1] = new cruiser("Cruiser1", 100, 200, 45, 200);
    // firepower    = 50;
    // weapon_range = 200;
    // ammo         = 100;
    // hit_chance   = 85;

    naval_ship pirate_ship("Pirate1", 200, 200, 10, 110);

    ship_fleet1[0]->attack(&pirate_ship);
    std::cout << std::endl;

    ship_fleet1[1]->attack(&pirate_ship);
    std::cout << std::endl;

    ship_fleet1[0]->attack(&pirate_ship);

    delete ship_fleet1[0]; //is this necessary?
    delete ship_fleet1[1]; //is this necessary?
    delete[] ship_fleet1;

    return 0;
}
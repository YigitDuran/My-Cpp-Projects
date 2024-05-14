// Created by yigit on 29.10.2022.

// Question: Should I use move or const reference for string parameters?

#include <iostream>
#include <utility>
#include "sultan.h"

sultan::sultan() : person(), kingdom()
{
    std::cout << "*sultan default constructor*" << std::endl;
}

sultan::sultan(std::string name, int hungerLevel, std::string location,
               int money, std::string kingdom) :
        person(std::move(name), hungerLevel, std::move(location), money),
        kingdom(std::move(kingdom))
{
    std::cout << "*sultan 5 parameter constructor*" << std::endl;
}

void sultan::tax(int taxRevenue)
{
    if(taxRevenue > 0)
    {
        money += taxRevenue;
    }
}

void sultan::print() const
{
    std::cout << "Name:         "   << name;
    std::cout << "\nHunger level: " << hungerLevel;
    std::cout << "\nLocation:     " << location;
    std::cout << "\nMoney:        " << money;
    std::cout << "\nKingdom:      " << kingdom << std::endl;
}
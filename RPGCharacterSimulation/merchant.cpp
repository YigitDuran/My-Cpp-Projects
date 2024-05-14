// Created by yigit on 29.10.2022.

// Question: Should I use move or const reference for string parameters?
// Question: I know this is not the right useage but why can't I write the merchant
// constructor as;
/*
merchant::merchant(std::string name, int hungerLevel, std::string location,
                   int money, std::string shop) :
                   name(name),
                   hungerLevel(hungerLevel),
                   location(location),
                   money(money),
                   shop(shop)
                   {}
*/
// To my understanding compiler error says something similar to name, hungerLevel... does
// not exist.

#include <iostream>
#include <utility>
#include "merchant.h"

merchant::merchant() : person(), shop()
{
    std::cout << "*merchant default constructor*" << std::endl;
}

merchant::merchant(std::string name, int hungerLevel, std::string location,
                   int money, std::string shop) :
        person(std::move(name), hungerLevel, std::move(location), money),
        shop(std::move(shop))
{
    std::cout << "*merchant 5 parameter constructor*" << std::endl;
}

void merchant::trade(int tradeRevenue)
{
    if(tradeRevenue > 0)
    {
        money += tradeRevenue;
    }
}

void merchant::print() const
{
    std::cout << "Name:         "   << name;
    std::cout << "\nHunger level: " << hungerLevel;
    std::cout << "\nLocation:     " << location;
    std::cout << "\nMoney:        " << money;
    std::cout << "\nShop:         " << shop << std::endl;
}


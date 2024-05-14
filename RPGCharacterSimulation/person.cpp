// Created by yigit on 29.10.2022.

// Question: Should I use move or const reference for string parameters?

#include <iostream>
#include <utility>
#include "person.h"

person::person() : name(), hungerLevel(100), location(), money(0)
{
    std::cout << "*person default constructor*" << std::endl;
}

person::person(std::string name, int hungerLevel, std::string location, int money) :
        name(std::move(name)),
        hungerLevel(hungerLevel),
        location(std::move(location)),
        money(money)
{
    std::cout << "*person 4 parameter constructor*" << std::endl;

    if(this->money < 0)
    {
        this->money = 0;
    }

    if(this->hungerLevel > 100)
    {
        this->hungerLevel = 100;
    }
    else if(this->hungerLevel < 0)
    {
        this->hungerLevel = 0;
    }
}

void person::travel(std::string target)
{
    location = std::move(target);
}

void person::eat(int foodQuality)
{
    hungerLevel += foodQuality;

    if(hungerLevel > 100)
    {
        hungerLevel = 100;
    }
    else if(hungerLevel < 0)
    {
        hungerLevel = 0;
    }
}

void person::print() const
{
    std::cout << "Name:         "   << name;
    std::cout << "\nHunger level: " << hungerLevel;
    std::cout << "\nLocation:     " << location;
    std::cout << "\nMoney:        " << money << std::endl;
}
// Created by yigit on 29.10.2022.

#ifndef OOP_PART4_PAGE4_6_SULTAN_H
#define OOP_PART4_PAGE4_6_SULTAN_H

#include "person.h"

class sultan : public person
{
public:
    sultan();
    sultan(std::string name, int hungerLevel, std::string location, int money,
           std::string kingdom);

    void tax(int taxRevenue);
    void print() const;
private:
    std::string kingdom;
};

#endif //OOP_PART4_PAGE4_6_SULTAN_H
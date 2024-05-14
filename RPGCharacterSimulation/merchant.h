// Created by yigit on 29.10.2022.

#ifndef OOP_PART4_PAGE4_6_MERCHANT_H
#define OOP_PART4_PAGE4_6_MERCHANT_H

#include <string>
#include "person.h"

class merchant : public person
{
public:
    merchant();
    merchant(std::string name, int hungerLevel, std::string location, int money,
             std::string shop);

    void trade(int tradeRevenue);
    void print() const;
private:
    std::string shop;
};

#endif //OOP_PART4_PAGE4_6_MERCHANT_H
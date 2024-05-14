// Created by yigit on 29.10.2022.

#ifndef OOP_PART4_PAGE4_6_PERSON_H
#define OOP_PART4_PAGE4_6_PERSON_H

#include <string>

class person
{
public:
    person();
    person(std::string name, int hungerLevel, std::string location, int money);

    void travel(std::string target);
    void eat(int foodQuality);

    void print() const;
protected:
    std::string name;
    int hungerLevel;
    std::string location;
    int money;
};

#endif //OOP_PART4_PAGE4_6_PERSON_H
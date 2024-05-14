#include "family.h"
#include <utility>
#include <iostream>

family::family() : member(), number_of_children(0), kindergeld(0) {}

family::family(person  member, int number_of_children) :
        member(std::move(member)),
        number_of_children(number_of_children),
        kindergeld(0)
{
    if(number_of_children < 0)
    {
        this->number_of_children = 0;
    }

    kindergeld = getKindergeld();
}

void family::print() const
{
    member.print();
    std::cout << "Number of children: " << number_of_children;
    std::cout << "\nKindergeld:         " << kindergeld << std::endl;
}

int family::getKindergeld()
{
    for(int i = 0; i < number_of_children; ++i)
    {
        if(i < 2)       { kindergeld += 184; }

        else if(i == 2) { kindergeld += 190; }

        else            { kindergeld += 215; }
    }

    return kindergeld;
}

//person& family::getMember() const //why does this does not work?
//{
//    return member;
//}

//person& family::getMember() //but this works
//{
//    return member;
//}
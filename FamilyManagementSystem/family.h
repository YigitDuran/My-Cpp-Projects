#ifndef OOP_LAB_W3_Q1_FAMILY_H
#define OOP_LAB_W3_Q1_FAMILY_H

#include "person.h"

class family
{
public:
    family();
    family(person  member, int number_of_children);

    void print() const;

    //person& getMember() const; //why does this does not work
    //person& getMember(); //but this works
private:
    person member;
    int number_of_children;
    int kindergeld;

    int getKindergeld();
};

#endif //OOP_LAB_W3_Q1_FAMILY_H

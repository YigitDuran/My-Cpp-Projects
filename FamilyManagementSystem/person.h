#ifndef OOP_LAB_W3_Q1_PERSON_H
#define OOP_LAB_W3_Q1_PERSON_H

#include <string>

class person
{
public:
    person();
    person(std::string name, std::string surname, int age);

    void print() const;
private:
    std::string name;
    std::string surname;
    int age;
};

#endif //OOP_LAB_W3_Q1_PERSON_H
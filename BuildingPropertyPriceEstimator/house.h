#ifndef CMP1002LAB_1_2__W5_CODE_AND_QUESTIONS_HOUSE_H
#define CMP1002LAB_1_2__W5_CODE_AND_QUESTIONS_HOUSE_H

#include "building.h"

class house : public building
{
public:
    house();
    house(int numberOfFloors, int numberOfRooms, int listOfAreas[]);
    house(const house &that);
    ~house();

    house& operator=(const house& that);

    void printInfo() const override;
private:
    int m_numberOfRooms;
    int* m_ptr_listOfAreas;

    double calculatePrice();
};

#endif //CMP1002LAB_1_2__W5_CODE_AND_QUESTIONS_HOUSE_H
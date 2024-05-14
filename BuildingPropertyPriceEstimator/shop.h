#ifndef CMP1002LAB_1_2__W5_CODE_AND_QUESTIONS_SHOP_H
#define CMP1002LAB_1_2__W5_CODE_AND_QUESTIONS_SHOP_H

#include <string>
#include "building.h"

class shop : public building
{
public:
    shop();
    shop(int numberOfFloors, std::string typeOfShop);

    void printInfo() const override;
private:
    std::string     m_typeOfShop;
    double             calculatePrice();
};

#endif //CMP1002LAB_1_2__W5_CODE_AND_QUESTIONS_SHOP_H
#ifndef CMP1002LAB_1_2__W5_CODE_AND_QUESTIONS_BUILDING_H
#define CMP1002LAB_1_2__W5_CODE_AND_QUESTIONS_BUILDING_H

class building
{
public:
    building();
    building(int numberOfFloors);

    virtual void printInfo() const;
protected:

    int           m_numberOfFloors;
    double        m_salePrice;

    static double calculatePrice();
};

#endif //CMP1002LAB_1_2__W5_CODE_AND_QUESTIONS_BUILDING_H
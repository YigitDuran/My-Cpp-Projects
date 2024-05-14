#include <cstdlib>
#include <iostream>
#include "building.h"

double building::calculatePrice()
{
    int randomValue = (rand() % 200001) + 50000;
    std::cout << "Building's calculate price, random value: " << randomValue << std::endl;
    return randomValue; //return (rand() % 200000) + 50000;
}

building::building() : m_numberOfFloors(0), m_salePrice(0.0) {}

building::building(int numberOfFloors) :
        m_numberOfFloors(numberOfFloors), m_salePrice(calculatePrice()) {}

void building::printInfo() const
{
    std::cout << "Number of floors: " << m_numberOfFloors << std::endl;
    std::cout << "Sale price:       " << m_salePrice << std::endl;
}
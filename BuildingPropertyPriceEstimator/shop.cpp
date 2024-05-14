#include "shop.h"
#include <utility>
#include <iostream>

double shop::calculatePrice()
{

    if(m_typeOfShop == "Art")
    {
        std::cout << "Shop's calculate price, random value x2: "
                  << m_salePrice * 2 << std::endl;

        return m_salePrice * 2;
    }

    else if(m_typeOfShop == "Food")
    {
        std::cout << "Shop's calculate price, random value x2: "
                  << m_salePrice * 3 << std::endl;

        return m_salePrice * 3;
    }

    else if(m_typeOfShop == "Jewelry")
    {
        std::cout << "Shop's calculate price, random value x2: "
                  << m_salePrice * 4 << std::endl;

        return m_salePrice * 4;
    }

    else
    {
        std::cout << "Shop's calculate price, random value: " << 0 << std::endl;

        return 0;
    }

}

shop::shop() : building(), m_typeOfShop() {}

shop::shop(int numberOfFloors, std::string typeOfShop) :
        building(numberOfFloors), m_typeOfShop(std::move(typeOfShop)) //why can't I move m_salePrice to initializer list? Is it because building's constructor initializes it?
{
    m_salePrice = calculatePrice();
}

void shop::printInfo() const
{
    building::printInfo();
    std::cout << "Type of the shop: " << m_typeOfShop << std::endl;
}
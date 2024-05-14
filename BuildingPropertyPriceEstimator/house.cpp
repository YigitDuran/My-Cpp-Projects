#include <iostream>
#include "house.h"

//LIFECYCLE
house::house() : building(), m_numberOfRooms(0), m_ptr_listOfAreas(nullptr) {}

house::house(int numberOfFloors, int numberOfRooms, int *listOfAreas) :
        building(numberOfFloors),
        m_numberOfRooms(numberOfRooms),
        m_ptr_listOfAreas(new int[m_numberOfFloors])
{
    m_salePrice = calculatePrice();

    for (int i = 0; i < numberOfFloors; ++i)
        m_ptr_listOfAreas[i] = listOfAreas[i];
}

house::house(const house &that) :
        building(that.m_numberOfFloors),
        m_numberOfRooms(that.m_numberOfRooms),
        m_ptr_listOfAreas(new int[m_numberOfRooms])
{
    for (int i = 0; i < m_numberOfFloors; ++i)
        m_ptr_listOfAreas[i] = that.m_ptr_listOfAreas[i];

    m_salePrice = that.m_salePrice;
}

house::~house() { delete[] m_ptr_listOfAreas; }


//OPERATORS
house &house::operator=(const house &that)
{
    m_numberOfFloors = that.m_numberOfFloors;
    m_salePrice = that.m_salePrice;
    m_numberOfRooms = that.m_numberOfRooms;

    int *local_listOfAreas = new int[m_numberOfFloors];

    for (int i = 0; i < m_numberOfFloors; ++i)
        local_listOfAreas[i] = that.m_ptr_listOfAreas[i];

    delete[] m_ptr_listOfAreas;

    m_ptr_listOfAreas = local_listOfAreas;

    return *this;
}

//OPERATIONS
double house::calculatePrice()
{
    std::cout << "house's calculate price, random value x(1+m_numberOfRooms)/7: "
              << m_salePrice * (1+m_numberOfRooms) / 7 << std::endl;

    return m_salePrice * (1+m_numberOfRooms) / 7;
}

//ACCESS
void house::printInfo() const
{
    building::printInfo();
    std::cout << "Number of rooms: " << m_numberOfRooms << std::endl;

    for (int i = 0; i < m_numberOfFloors; ++i)
        std::cout << "Area " << i + 1 << ": " << m_ptr_listOfAreas[i] << std::endl;
}



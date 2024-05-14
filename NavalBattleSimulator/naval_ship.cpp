#include "naval_ship.h"
#include <utility>
#include <iostream>
#include <cmath>

naval_ship::naval_ship() :
        m_name(),
        m_coordX(0.0),
        m_coordY(0.0),
        m_armor_rating(0),
        m_hit_points(0),
        m_is_sunk(false) {}

naval_ship::naval_ship(std::string name, double coordX, double coordY, int armor_rating, int hit_points) :
        m_name(std::move(name)),
        m_coordX(coordX),
        m_coordY(coordY),
        m_armor_rating(armor_rating),
        m_hit_points(hit_points),
        m_is_sunk(false) {}

void naval_ship::sail_to(double target_coordX, double target_coordY)
{

    if(!m_is_sunk)
    {
        m_coordX = target_coordX;
        m_coordY = target_coordY;
    }

}

void naval_ship::is_operational() const
{

    if(m_is_sunk)
    {
        std::cout << m_name << " is still operational at (" << m_coordX << ","
                  << m_coordY << ")" << std::endl;
    }

    else
    {
        std::cout << m_name << " lies at the sea/ocean floor at (" << m_coordX << ","
                  << m_coordY << ")" << std::endl;
    }

}

double naval_ship::calculate_distance(double that_coordX, double that_coordY) const //try giving the ship instead of 2 double coordinates
{
    return sqrt( pow(that_coordX - m_coordX, 2) + pow(that_coordY - m_coordY, 2) );
}

void naval_ship::fired_upon(int firepower)
{

    if(!m_is_sunk)
    {

        if(firepower > m_armor_rating)
        {

            int damage = firepower - m_armor_rating;

            if(damage < m_hit_points)
            {
                m_hit_points -= damage;

                std::cout << m_name << " sustained damage of " << damage
                          << ". Remaining hit points = " << m_hit_points << std::endl;
            }

            else
            {
                m_hit_points = 0;
                m_is_sunk = true;
                std::cout << m_name << " sustained critical damage and sunk..." << std::endl;
            }

        }

        else
        {
            std::cout << m_name << " sustained no damage. Attack ineffective!" << std::endl;
        }

    }

    else
    {
        std::cout << "Ship is already sunk." << std::endl;
    }

}

void naval_ship::attack(naval_ship *target_ship) {}
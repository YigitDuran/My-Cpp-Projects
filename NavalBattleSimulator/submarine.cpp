#include "submarine.h"
#include <utility>
#include <iostream>

submarine::submarine() :
        naval_ship(),
        m_firepower(50),
        m_weapon_range(200),
        m_ammo(100) {}

submarine::submarine(std::string name, double coordX, double coordY, int armor_rating, int hit_points) :
        naval_ship(std::move(name), coordX, coordY, armor_rating, hit_points),
        m_firepower(50),
        m_weapon_range(200),
        m_ammo(100) {}

void submarine::attack(naval_ship *target_ship)
{

    if(m_ammo > 0)
    {

        if(target_ship->calculate_distance(m_coordX, m_coordY) <= m_weapon_range) //can't write this as calculate_distance(target_ship->m_coordX, targetShip->m_coordY)
        {
            std::cout << m_name << ": Target is in range, firing torpedo!" << std::endl;
            --m_ammo;

            std::cout << m_name << ": Target hit!" << std::endl;
            target_ship->fired_upon(m_firepower);
        }

        else
        {
            std::cout << m_name << ": Target is out of range." << std::endl;
        }

    }

    else
    {
        std::cout << m_name << ": Out of ammo." << std::endl;
    }

}
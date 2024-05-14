#ifndef CMP1002_1_2__W6_VIDEO_QUESTION_CRUISER_H
#define CMP1002_1_2__W6_VIDEO_QUESTION_CRUISER_H

#include "naval_ship.h"
//    std::string m_name;
//    double      m_coordX;
//    double      m_coordY;
//    int         m_armor_rating;
//    int         m_hit_points;
//    bool        m_is_sunk;

class cruiser : public naval_ship
{
public:
    cruiser();
    cruiser(std::string name, double coordX, double coordY, int armor_rating, int hit_points);

    void attack(naval_ship *target_ship) override;

protected:
    int m_firepower;
    int m_weapon_range;
    int m_ammo;
    int m_hit_chance;
};

#endif //CMP1002_1_2__W6_VIDEO_QUESTION_CRUISER_H
#ifndef CMP1002_1_2__W6_VIDEO_QUESTION_NAVAL_SHIP_H
#define CMP1002_1_2__W6_VIDEO_QUESTION_NAVAL_SHIP_H

#include <string>

class naval_ship
{
public:
    naval_ship();
    naval_ship(std::string name, double coordX, double coordY, int armor_rating, int hit_points);

    void sail_to(double target_coordX, double target_coordY);
    void is_operational() const;
    double calculate_distance(double that_coordX, double that_coordY) const;
    void fired_upon(int firepower);

    virtual void attack(naval_ship *target_ship);

protected:
    std::string m_name;
    double      m_coordX;
    double      m_coordY;
    int         m_armor_rating;
    int         m_hit_points;
    bool        m_is_sunk;
};

#endif //CMP1002_1_2__W6_VIDEO_QUESTION_NAVAL_SHIP_H
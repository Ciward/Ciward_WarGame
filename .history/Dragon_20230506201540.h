#pragma once
#include "Spirit.h"

#include "Weapon.h"

class Dragon: public Spirit
{
public:
    float power;
    static float maxlive;
    Dragon(int id1,int team1);
    
};

Dragon::Dragon(int id1,int team1):Spirit(id1,team1)
{
    live = maxlive;
    name="dragon";
    weapon;
}


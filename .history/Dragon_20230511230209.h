#pragma once
#include "Spirit.h"
#include "Team.h"
#include "Weapon.h"

class Dragon: public Spirit
{
public:
    float morale;
    static float maxlive;
    Dragon(int id1,Team* team1);
    
};

Dragon::Dragon(int id1,Team* team1):Spirit(id1,team1)
{
    class_id=0;
    live = maxlive;
    name="dragon";
    morale = 
    printf(", and its morale is %.2f",morale);

}


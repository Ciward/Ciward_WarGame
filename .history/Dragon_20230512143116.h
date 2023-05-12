#pragma once
#include "Spirit.h"

#include "Weapon.h"

class Dragon: public Spirit
{
public:
    float morale;
    static float maxlive;
    Dragon(int id1,Team* team1,float morale1) :Spirit(id1, team1)
    {
        class_id = 0;
        live = maxlive;
        name = "dragon";
        weapon=getWeapon(id);
        cout<<"it has a "<< weapon->getName();
        morale = morale1;
        printf(", and its morale is %.2f\n", morale);

    }
    
};



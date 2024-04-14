#pragma once
#include "Spirit.h"

#include "Weapon.h"

class Dragon: public Spirit
{
public:
    float morale;
    static float maxlive;
    void print(){
        cout<<"it has a "<< weapons[0]->getName();
        
        printf(", and its morale is %.2f\n", morale);
    }
    Dragon(int id1,Team* team1,float morale1) :Spirit(id1, team1)
    {
        class_id = 0;
        live = maxlive;
        name = "dragon";
        weapons.push_back(getWeapon(id%3));
        morale = morale1;

    }
    
};




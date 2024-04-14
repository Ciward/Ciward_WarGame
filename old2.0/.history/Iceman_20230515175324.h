#pragma once

#include "Spirit.h"

#include "Weapon.h"


class Iceman:public Spirit
{

public:
static float maxlive;
static float initPower;
    Iceman(int id1,Team* team1):Spirit(id1,team1)
    {   
        live = maxlive;
        power = initPower;
        class_id=2;
        name = "iceman";
        weapons.push_back(getWeapon(id%3));
    }
    void print(){
        cout<<"it has a "<< weapons[0]->getName()<<endl;
    }
 
};




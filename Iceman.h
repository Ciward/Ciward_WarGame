#pragma once

#include "Spirit.h"

#include "Weapon.h"


class Iceman:public Spirit
{

public:
static float maxlive;
static float initPower;
    Iceman(int id1,int team1):Spirit(id1,team1)
    {   
        live = maxlive;
        power = initPower;
        class_id=2;
        name = "iceman";
        weapons[id%3].push_back(getWeapon(id%3));
    }
    void print(){
        cout<<"it has a "<< weapons[id%3][0]->getName()<<endl;
    }
    void move(int dx){
        pos+= dx;
        int dlive=int(live/10);
        hurt(dlive);
        
    }
};




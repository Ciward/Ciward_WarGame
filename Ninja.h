#pragma once
#include "Spirit.h"
#include "Weapon.h"

class Ninja:public Spirit
{

public:
    static float maxlive;
    static float initPower;
    Ninja(int id1,int team1):Spirit(id1,team1)
    {
        class_id=1;
        live = maxlive;
        power = initPower;
        name = "ninja";
        weapons[id%3].push_back(getWeapon(id%3));
        weapons[(id+1)%3].push_back(getWeapon((id+1)%3));
    
    }
    void print(){
        cout<<"it has a "<< weapons[id%3][0]->getName();
        cout<<" and a "<< weapons[(id+1)%3][0]->getName()<<endl;
    }
    
};






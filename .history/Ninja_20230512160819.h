#pragma once
#include "Spirit.h"
#include "Weapon.h"

class Ninja:public Spirit
{

public:
    static float maxlive;
    Ninja(int id1,Team* team1):Spirit(id1,team1)
{
    class_id=1;
    live = maxlive;
    name = "ninja";
    weapons.push_back(getWeapon(id%3));
    weapons.push_back(getWeapon((id+1)%3));
    
}
    void print(){
        cout<<"it has a "<< weapons[0]->getName();
        cout<<" and a "<< weapons[1]->getName()<<endl;
    }
    
};






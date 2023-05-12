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
    weapon=getWeapon(id%3);
    cout<<"it has a "<< weapon->getName();
    weapon2=getWeapon((id+1)%3);
    cout<<" and a "<< weapon2->getName()<<endl;
}
    
};






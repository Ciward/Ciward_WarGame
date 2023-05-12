#pragma once
#include "Spirit.h"
#include "Team.h"
#include "Weapon.h"

class Ninja:public Spirit
{

public:
    static float maxlive;
    Ninja(int id1,Team* team1);
    
};

Ninja::Ninja(int id1,Team* team1):Spirit(id1,team1)
{
    class_id=1;
    live = maxlive;
    name = "ninja";
    weapon2=getWeapon(id);
}




#pragma once
#include "Spirit.h"

#include "Weapon.h"

class Ninja:public Spirit
{

public:
    Ninja(int id1,int team1);
    
};

Ninja::Ninja(int id1,int team1):Spirit(id1,team1)
{
    name = "ninja";
    weapon;
}




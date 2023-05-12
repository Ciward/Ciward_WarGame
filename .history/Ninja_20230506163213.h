#pragma once
#include "Spirit.h"

#include "Weapon.h"

class Ninja:public Spirit
{

public:
    Ninja(int live1,int id1);
    
};

Ninja::Ninja(int live1,int id1):Spirit(live1,id1)
{
    weapon;
}




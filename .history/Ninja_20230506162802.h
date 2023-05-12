#pragma once
#include "Spirit.h"

#include "Weapon.h"

class Ninja:public Spirit
{
private:
    /* data */
public:
    Ninja(int live1,int id1);
    
};

Ninja::Ninja(int live1,int id1):Spirit(live1,id1)
{
    weapon;
}




#pragma once
#include "Spirit.h"

#include "Weapon.h"

class Ninja:public Spirit
{

public:
    Ninja(int id1);
    
};

Ninja::Ninja(int id1):Spirit(id1)
{
    name = "Ninja";
    weapon;
}




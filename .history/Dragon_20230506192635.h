#pragma once
#include "Spirit.h"

#include "Weapon.h"

class Dragon: public Spirit
{
public:
    
    Dragon(int id1,int team1);
    
};

Dragon::Dragon(int id1,int team1):Spirit(id1,team1)
{
    name="dragon";
    weapon;
}


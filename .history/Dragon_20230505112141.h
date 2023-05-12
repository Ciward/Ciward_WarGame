#pragma once
#include "Spirit.h"

#include "Weapon.h"

class Dragon: public Spirit
{
private:
    
public:
    Dragon(int live1,int id1);
    
};

Dragon::Dragon(int live1,int id1):Spirit(live1,id1)
{
    weapon;
}



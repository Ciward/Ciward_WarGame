#pragma once
#include "Spirit.h"

#include "Weapon.h"

class Dragon: public Spirit
{
public:
    
    Dragon(int id1);
    
};

Dragon::Dragon(int id1):Spirit(id1)
{
    name="Dragon";
    weapon;
}


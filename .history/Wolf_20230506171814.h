#pragma once
#include "Spirit.h"
#include "Weapon.h"

class Wolf :public Spirit
{
    
    public:
    Wolf(int id1):Spirit(id1)
    {
        name = "Wolf";
        weapon;
    }

};


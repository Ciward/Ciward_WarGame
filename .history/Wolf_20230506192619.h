#pragma once
#include "Spirit.h"
#include "Weapon.h"

class Wolf :public Spirit
{
    
    public:
    Wolf(int id1,int team1):Spirit(id1,team1)
    {
        name = "wolf";
        weapon;
    }

};


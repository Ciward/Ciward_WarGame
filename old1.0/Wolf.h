#pragma once
#include "Spirit.h"
#include "Weapon.h"

class Wolf :public Spirit
{
    
    public:
    static float maxlive;
    Wolf(int id1,int team1):Spirit(id1,team1)
    {
        live = maxlive;
        name = "wolf";
        weapon;
    }

};


#pragma once
#include "Spirit.h"
#include "Weapon.h"

class Lion:public Spirit
{

public:
    static float maxlive;
    float loyalty;
    Lion(int id1,int team1):Spirit(id1,team1)
    {
        live = maxlive;
        name="lion";
        weapon;
    }

    
};





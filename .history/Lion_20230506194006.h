#pragma once
#include "Spirit.h"
#include "Weapon.h"

class Lion:public Spirit
{

public:
    static float maxlive;
    Lion(int id1,int team1):Spirit(id1,team1)
    {
        name="lion";
        weapon;
    }

    
};





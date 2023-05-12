#pragma once

#include "Spirit.h"

#include "Weapon.h"


class Iceman:public Spirit
{

public:
static float maxlive;
    Iceman(int id1,int team1):Spirit(id1,team1)
    {   
        live = maxlive;
        class_id=2;
        name = "iceman";
        weapon;
    }

 
};




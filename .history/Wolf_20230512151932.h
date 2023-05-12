#pragma once
#include "Spirit.h"
#include "Weapon.h"

class Wolf :public Spirit
{
    
    public:
    static float maxlive;
    Wolf(int id1,Team* team1):Spirit(id1,team1)
    {
        class_id=4;
        live = maxlive;
        name = "wolf";
    }
    void rob(Spirit* enemy);
    void print();
};


#pragma once
#include "Spirit.h"
#include "Weapon.h"

class Lion:public Spirit
{

public:
    static float maxlive;
    int loyalty;
    Lion(int id1,Team* team1,int loyalty1):Spirit(id1,team1)
    {
        class_id=3;
        live = maxlive;
        loyalty=loyalty1;
        name="lion";
    }
    void print(){
        printf("its loyalty is %d\n",loyalty);
    }
    
};




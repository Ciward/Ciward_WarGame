#pragma once
#include "Spirit.h"
#include "Weapon.h"

class Lion:public Spirit
{

public:
    static float maxlive;
    static float initPower;
    static int k;
    int loyalty;
    Lion(int id1,Team* team1,int loyalty1):Spirit(id1,team1)
    {
        class_id=3;
        live = maxlive;
        power = initPower;
        loyalty=loyalty1;
        name="lion";
    }
    void print(){
        printf("its loyalty is %d\n",loyalty);
    }
    
};





#pragma once
#include "Spirit.h"

#include "Weapon.h"

class Dragon: public Spirit
{
public:
    float morale;
    static float maxlive;
    static float initPower;
    void print(){
        cout<<"it has a "<< weapons[id%3][0]->getName();
        
        printf(", and its morale is %.2f\n", morale);
    }
    Dragon(int id1,int team1,float morale1) :Spirit(id1, team1)
    {
        class_id = 0;
        live = maxlive;
        power = initPower;
        name = "dragon";
        weapons[id%3].push_back(getWeapon(id%3));
        morale = morale1;

    }
    void win(){
        outHour
        cout<<"40 "<<team_name<<" dragon yelled in city "<<pos<<endl;
    }
};




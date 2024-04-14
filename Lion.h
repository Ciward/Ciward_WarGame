#pragma once
#include "Spirit.h"
#include "Weapon.h"

class Lion:public Spirit
{

public:
    static float maxlive;
    static float initPower;
    static int k;
    
    Lion(int id1,int team1,int loyalty1):Spirit(id1,team1)
    {
        class_id=3;
        live = maxlive;
        power = initPower;
        loyalty=loyalty1;
        name="lion";
        weapons[id%3].push_back(getWeapon(id%3));
    }
    void print(){
        cout<<"it has a "<< weapons[id%3][0]->getName();
        printf(" and its loyalty is %d\n",loyalty);
    }
    void runaway(){
        outHour
        cout<<"05 ";
        if(team_id) cout<<"blue";
        else cout<<"red";
        cout<<" lion "<<id<<" ran away"<<endl;
        kill();
    }
    void move(int dx){
        pos+=dx;
        loyalty-=k;
        
    }
};





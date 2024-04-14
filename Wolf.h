#pragma once
using namespace std;
#include "Spirit.h"
#include "Weapon.h"


class Wolf :public Spirit
{
    
    public:
    static float maxlive;
    static float initPower;
    bool robbed;
    Wolf(int id1,int team1):Spirit(id1,team1)
    {
        class_id=4;
        live = maxlive;
        power = initPower;
        name = "wolf";
        robbed = false;
    }
    bool rob(Spirit &other);
    
};
bool Wolf::rob(Spirit &other){
    robbed = true;
    for(int i=0;i<other.weapons.size();i++){
        if(other.weapons[i].size() != 0){
            int j=0,n0;
            n0=other.weapons[i].size()-1;
            while(!other.weapons[i].empty()){
                if(getWeaponNum()<maxWeapon){
                    j++;
                    weapons[i].push_back(other.weapons[i].back());
                    other.weapons[i].pop_back();
                }
                else break;
            }
            if(j>0){
                outHour
                cout<<"35 ";
                cout<<team_name<<" wolf "<<id<<" took ";
                cout<<j<<" "<<weapons[i].back()->getName()<<" from "<<other.team_name<<' '<<other.name<<" "<<other.id<<" in ";
                return true;
            }
            else return false;
        }
    }
    return false; 
}

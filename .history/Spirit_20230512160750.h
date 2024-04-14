#pragma once
#include "Weapon.h"
#include <iostream>

#include <string>
using namespace std;

class Team;
class Spirit
{
public:
    float live;
    bool is_alive;
    float power;
    string name;
    int id;
    int class_id;
    static float maxlive;
    
    Team* team;
    vector<Weapon*> weapons;
    void hurt(float damage);
    void kill();
    Weapon* getWeapon(int n);
    virtual void print(){}
    void move(int x);
    void attack(Spirit other);
    Spirit(){
        id=0;
    }
    Spirit(int id1,Team* team1);
    
};

Spirit::Spirit(int id1,Team* team1):id(id1),team(team1)
{
    is_alive=true;
}
void Spirit::hurt(float damage){
    live-=damage;
    if (live <= 0)
    {
        kill();
    }
}
void Spirit::kill(){
    is_alive=false; 
    cout<<endl;
}
Weapon* Spirit::getWeapon(int n){
    switch (n)
    {
    case 0:
        
        return new Sword(power);
        break;
    case 1:
        
        return new Bomb(power);
        break;
    case 2:
        
        return new Arrow(power);
        break;
    
    default:
        return NULL;
        break;
    }
}


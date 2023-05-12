#pragma once
#include "Weapon.h"
#include <iostream>
#include <string>
using namespace std;

class Spirit
{
public:
    float live;
    float power;
    string name;
    int id;
    int class_id;
    static float maxlive;
    Weapon* weapon;
    Weapon* weapon2;
    int team;

    void hurt(float damage);
    void kill();
    Weapon* getWeapon(int n);
    void print();
    void move(int x);
    void attack(Spirit other);
    Spirit(){
        id=0;
    }
    Spirit(int id1,int team1);
    
};

Spirit::Spirit(int id1,int team1):id(id1),team(team1)
{
}
void Spirit::hurt(float damage){
    live-=damage;
    if (live <= 0)
    {
        kill();
    }
}
void Spirit::kill(){
    cout<<endl;
}
Weapon* Spirit::getWeapon(int n){
    switch (n)
    {
    case 0:
        return new Sword(this);
        break;
    case 1:
        return new Bomb(this);
        break;
    case 2:
        return new Arrow(this);
        break;
    
    default:
        break;
    }
}


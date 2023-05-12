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
    int team;

    void hurt(float damage);
    void die();
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
        die();
    }
}
void Spirit::die(){
    cout<<endl;
}



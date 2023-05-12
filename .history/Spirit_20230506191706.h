#pragma once
#include "Weapon.h"
#include <iostream>
#include <string>
using namespace std;

class Spirit
{
public:
    float live;
    string name;
    int id;
    static float maxlive;
    Weapon weapon;
    int team;

    
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





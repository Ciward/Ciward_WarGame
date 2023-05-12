#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Weapon.h"


class Spirit
{
public:
    float live;
    string name;
    int id;
    static float maxlive;
    Weapon weapon;
    int team;

    static void SetMaxLive(float max);
    void print();
    void move(int x);
    void attack(Spirit other);
    Spirit();
    Spirit(int id1);
    
};
void Spirit::SetMaxLive(float max) { maxlive = max;}

Spirit::Spirit(int id1=-1):id(id1)
{
    live = maxlive;
}

void Spirit::print(){
    cout<<
}



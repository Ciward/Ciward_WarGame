#pragma once
#include "Weapon.h"


class Spirit
{
protected:
    
    float live;
    int id;
    static float maxlive;
    Weapon weapon;
    int team;
public:
    static void SetMaxLive(float max);
    void print();
    void move(int x);
    void attack(Spirit other);
    Spirit(int live1, int id1);
    
};
void Spirit::SetMaxLive(float max) { maxlive = max;}

Spirit::Spirit(int live1, int id1):live(live1),id(id1)
{
}




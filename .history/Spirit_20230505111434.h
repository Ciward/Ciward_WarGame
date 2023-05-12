#pragma once
#include "Weapon.h"


class Spirit
{
private:
    
    float live;
    int id;
    static float maxlive;
    Weapon weapon;

public:
    static void SetMaxLive(float max);
    Spirit(int );
    ~Spirit();
};
void Spirit::SetMaxLive(float max) { maxlive = max;}

Spirit::Spirit(/* args */)
{
}

Spirit::~Spirit()
{
}


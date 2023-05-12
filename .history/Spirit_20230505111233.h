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
    void SetMaxLive(float max) { maxlive = max;}
    Spirit(int );
    ~Spirit();
};

Spirit::Spirit(/* args */)
{
}

Spirit::~Spirit()
{
}


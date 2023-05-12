#pragma once
#include "Weapon.h"


class Spirit
{
private:
    
    float live;
    int id;
    
    Weapon weapon;

public:
    static float maxlive;
    Spirit(int );
    ~Spirit();
};

Spirit::Spirit(/* args */)
{
}

Spirit::~Spirit()
{
}


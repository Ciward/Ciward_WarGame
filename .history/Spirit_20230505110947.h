#pragma once
#include "Weapon.h"


class Spirit
{
private:
    
    float live;
    int id;
    static float maxlive;
    

public:
    Weapon weapon;
    Spirit(int );
    ~Spirit();
};

Spirit::Spirit(/* args */)
{
}

Spirit::~Spirit()
{
}


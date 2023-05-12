#pragma once
#include "Weapon.h"


class Spirit
{
protected:
    
    float live;
    int id;
    static float maxlive;
    Weapon weapon;

public:
    static void SetMaxLive(float max);
    Spirit(int live1, int id1);
    ~Spirit();
};
void Spirit::SetMaxLive(float max) { maxlive = max;}

Spirit::Spirit(int live1, int id1):live(live1),id(id1)
{

}

Spirit::~Spirit()
{
}


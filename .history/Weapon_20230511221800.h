#pragma once


class Weapon
{
protected:
    float damage;
    Spirit* owner;
public:
    Weapon();
    Weapon(Spirit* owner1):owner(owner1) {}
    
};



class Sword:public Weapon
{
public:
    Sword(Spirit* owner1):Weapon(owner1) 
    {
        damage=(owner->power)/5;
    }

};


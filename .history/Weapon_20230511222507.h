#pragma once


class Weapon
{
protected:
    float damage;
    Spirit* owner;
public:
    Weapon(){owner = NULL;}
    Weapon(Spirit* owner1):owner(owner1) {}
    void changeOwner(Spirit* owner1){owner = owner1;}
    
};



class Sword:public Weapon
{
public:
    Sword(Spirit* owner1):Weapon(owner1) 
    {
        damage=int((owner->power)/5);
    }

};

class Bomb:public Weapon
{
public:
    Bomb(Spirit * owner1):Weapon(owner1)
    {
        damage=int((owner->power)*0.4);
    }
};

class Arrow:public Weapon
{
public:
    Arrow(Spirit* owner1):Weapon(owner1)
    {
        damage=int((owner->power)*0.3);
    }
};
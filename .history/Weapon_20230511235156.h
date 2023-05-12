#pragma once

class Spirit;


class Weapon
{
protected:
    float damage;
    Spirit* owner;
    int class_id;
    string name;
public:
    Weapon(){owner = NULL;}
    Weapon(Spirit* owner1):owner(owner1) {}
    void changeOwner(Spirit* owner1){owner = owner1;}
    float getDamage(){return damage;}
    string getName(){return name;}
};

class Sword:public Weapon
{
public:
    Sword(Spirit* owner1):Weapon(owner1) 
    {
        damage=int((owner->power)/5);
        name="Sword";
        class_id=0;
    }

};

class Bomb:public Weapon
{
public:
    Bomb(Spirit * owner1):Weapon(owner1)
    {
        damage=int((owner->power)*0.4);
        name="Bomb";
        class_id=1;
    }
};

class Arrow:public Weapon
{
public:
    Arrow(Spirit* owner1):Weapon(owner1)
    {
        damage=int((owner->power)*0.3);
        name="Arrow";
        class_id=2;
    }
};


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




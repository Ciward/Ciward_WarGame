#pragma once


class Weapon
{
protected:
    float damage;
    float p;
    int class_id;
    string name;
public:
    Weapon(){}
    Weapon(float damage1):damage(damage1) {}
    void changeDamage(float damage1){damage = damage1;}
    float getDamage(){return damage;}
    string getName(){return name;}
    
};

class Sword:public Weapon
{
public:
    Sword(float damage1):Weapon(damage1) 
    {
        p=0.2;
        damage=int(damage1*p);
        name="Sword";
        class_id=0;
    }

};

class Bomb:public Weapon
{
public:
    Bomb(float damage1):Weapon(damage1)
    {
        p=0.2;
        damage=int(damage1*p);
        name="Bomb";
        class_id=1;
    }
};

class Arrow:public Weapon
{
public:
    Arrow(float damage1):Weapon(damage1)
    {
        p=0.2;
        damage=int(damage1*p);
        name="Arrow";
        class_id=2;
    }
};


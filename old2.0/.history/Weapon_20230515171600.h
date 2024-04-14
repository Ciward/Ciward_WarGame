#pragma once


class Weapon
{
protected:
    float damage;
    float p;
    int class_id;
    int live;
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
        p=2;
        live=114514114514;
        damage=int(damage1*p/10);
        name="sword";
        class_id=0;
    }

};

class Bomb:public Weapon
{
public:
    Bomb(float damage1):Weapon(damage1)
    {
        p=4;
        live=1;
        damage=int(damage1*p/10);
        name="bomb";
        class_id=1;
    }
};

class Arrow:public Weapon
{
public:
    Arrow(float damage1):Weapon(damage1)
    {
        p=3;
        live=2;
        damage=int(damage1*p/10);
        name="arrow";
        class_id=2;
    }
};


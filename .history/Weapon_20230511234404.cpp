#include "Weapon.h"


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
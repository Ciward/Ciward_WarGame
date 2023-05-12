#include "Weapon.h"


Sword::Sword(Spirit* owner1):Weapon(owner1) 
    {
        damage=int((owner->power)/5);
        name="Sword";
        class_id=0;
    }

    
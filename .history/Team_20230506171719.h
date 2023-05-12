#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "Weapon.h"
#include "Spirit.h"
#include "Dragon.h"
#include "Wolf.h"
#include "Ninja.h"
#include "Iceman.h"
#include "Lion.h"

class Team
{
public:
    int live;
    int team_id;
    string name;
    vector<Spirit> spirits;
    Team(int team_id1, string name1,int live1);
    void generateSpirit(int timestamp);
};

Team::Team(int team_id1, string name1,int live1) : team_id(team_id1), name(name1),live(live1)
{

}

void Team::generateSpirit(int timestamp,int spirit)
{
    Spirit tempSpirit;
    switch (spirit)
    {
    case 0:
        tempSpirit=new Dragon()
        break;
    
    default:
        break;
    }
    cout<<timestamp/100<<(timestamp%100)/10<<timestamp%10<<' ';
    cout<<name<<' ';

}


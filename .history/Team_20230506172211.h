#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
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
    map<int, int> spirits_map;
    Team(int team_id1, string name1,int live1);
    void generateSpirit(int timestamp,int spirit);
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
        tempSpirit=*(new Dragon(spirits_map[0]+1));

        break;
    
    default:
        break;
    }
    cout<<timestamp/100<<(timestamp%100)/10<<timestamp%10<<' ';
    cout<<name<<' ';

}


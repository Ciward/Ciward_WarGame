#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
#include "Weapon.h"
#include "Spirit.h"
#include "Dragon.h"
#include "Ninja.h"
#include "Iceman.h"
#include "Lion.h"
#include "Wolf.h"

class Team
{
public:
    int live;
    int team_id;
    string name;
    vector<Spirit> spirits;
    map<int, int> spirit_map;
    Team(int team_id1, string name1,int live1);
    bool generateSpirit(int timestamp,int spirit);
};

Team::Team(int team_id1, string name1,int live1) : team_id(team_id1), name(name1),live(live1)
{
}

bool Team::generateSpirit(int timestamp,int spirit)
{
    Spirit tempSpirit=NULL;
    switch (spirit)
    {
    case 0: 
        if(live>=Dragon::maxlive){
            tempSpirit=*(new Dragon(spirit_map[0]+1));
            spirit_map[0]++;
        }
        break;
    case 1:
        if(live>=Ninja::maxlive){
        tempSpirit=*(new Ninja(spirit_map[1]+1));
        spirit_map[1]++;
        }
        break;
    case 2:
        if(live>=Iceman::maxlive){
        tempSpirit=*(new Iceman(spirit_map[2]+1));
        spirit_map[2]++;
        }
        break;
    case 3:
        if(live>=Lion::maxlive){
        tempSpirit=*(new Lion(spirit_map[3]+1));
        spirit_map[3]++;
        }
        break;
    case 4:
        if(live>=Wolf::maxlive){
        tempSpirit=*(new Wolf(spirit_map[4]+1));
        spirit_map[4]++;
        }
        break;
        
    default:
        break;
    }
    if(tempSpirit==NULL){
        return false;
    }
    spirits.push_back(tempSpirit);
    cout<<timestamp/100<<(timestamp%100)/10<<timestamp%10<<' ';
    cout<<name<<' ';


    return true;
}


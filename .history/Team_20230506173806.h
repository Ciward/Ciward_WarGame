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
    template<typename T> bool generateSpirit(int timestamp,int spirit);
};

Team::Team(int team_id1, string name1,int live1) : team_id(team_id1), name(name1),live(live1)
{

}
template<typename T>
bool Team::generateSpirit(int timestamp,int spirit)
{
    Spirit tempSpirit;
    switch (spirit)
    {
    case 0: 
        tempSpirit=*(new Dragon(spirit_map[0]+1));
        spirit_map[0]++;
        break;
    case 1:
        tempSpirit=*(new Ninja(spirit_map[1]+1));
        spirit_map[1]++;
        
        break;
    case 2:
        tempSpirit=*(new Iceman(spirit_map[2]+1));
        spirit_map[2]++;
        break;
    case 3:
        tempSpirit=*(new Lion(spirit_map[3]+1));
        spirit_map[3]++;
        break;
    case 4:
        tempSpirit=*(new Wolf(spirit_map[4]+1));
        spirit_map[4]++;
        break;
    default:
        break;
    }
    spirits.push_back(tempSpirit);
    cout<<timestamp/100<<(timestamp%100)/10<<timestamp%10<<' ';
    cout<<name<<' ';


    return true;
}


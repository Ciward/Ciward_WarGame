#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <map>

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
    void stopGenerating(int timestamp);
};

Team::Team(int team_id1, string name1,int live1) : team_id(team_id1), name(name1),live(live1)
{
}

bool Team::generateSpirit(int timestamp,int spirit)
{
    Spirit tempSpirit;
    switch (spirit)
    {
    case 0: 
        if(live>=Dragon::maxlive){
            live-=Dragon::maxlive;
            tempSpirit=Dragon(spirits.size()+1,team_id);
            spirit_map[0]++;
        }
        break;
    case 1:
        if(live>=Ninja::maxlive){
            live-=Ninja::maxlive;
            tempSpirit=Ninja(spirits.size()+1,team_id);
            spirit_map[1]++;
        }
        break;
    case 2:
        if(live>=Iceman::maxlive){
            live-=Iceman::maxlive;
            tempSpirit=Iceman(spirits.size()+1,team_id);
            spirit_map[2]++;
        }
        break;
    case 3:
        if(live>=Lion::maxlive){
            live-=Lion::maxlive;
            tempSpirit=Lion(spirits.size()+1,team_id);
            spirit_map[3]++;
        }
        break;
    case 4:
        if(live>=Wolf::maxlive){
            live-=Wolf::maxlive;
            tempSpirit=Wolf(spirits.size()+1,team_id);
            spirit_map[4]++;
        }
        break;
        
    default:
        break;
    }
    if(tempSpirit.id==0){
        return false;
    }
    spirits.push_back(tempSpirit);
    cout<<timestamp/100<<(timestamp%100)/10<<timestamp%10<<' ';
    cout<<name<<' '<<tempSpirit.name<<' '<<tempSpirit.id<<' '<<"born with strength "<<tempSpirit.live<<',';
    cout<<spirit_map[tempSpirit.class_id]<<' '<<tempSpirit.name<<" in "<<name<<' '<<"headquarter"<<endl;
    return true;
}

void Team::stopGenerating(int timestamp){
    cout<<timestamp/100<<(timestamp%100)/10<<timestamp%10<<' ';
    cout<<name<<' '<<"headquarter stops making warriors"<<endl;
}
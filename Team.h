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
#include "City.h"

class Team
{
public:
    int live;
    int team_id;
    bool is_stopped;
    int cityNumber;
    string name;
    vector<Spirit*> spirits;
    map<int, int> spirit_map;

    Team(int team_id1, string name1,int live1);
    void init(){
        is_stopped = false;
        spirits.clear();
        spirit_map.clear();
    }
    void setLive(int live1){live=live1;}
    bool generateSpirit(int timestamp,int spirit,City &city); // 如果产生成功返回true，不足返回false
    void stopGenerating(int timestamp);
    void report(){
        outHour
        cout<<"55 ";
        cout<<live<<" elements in "<<name<<" headquarter"<<endl;
    }
    void reportSpirits();
};

Team::Team(int team_id1, string name1,int live1) : team_id(team_id1), name(name1),live(live1)
{
    init();
    
}

bool Team::generateSpirit(int timestamp,int spirit,City &city)
{
    Spirit* tempSpirit=NULL;
    switch (spirit)
    {
    case 0: 
        if(live>=Dragon::maxlive){
            live-=Dragon::maxlive;
            tempSpirit=new Dragon(spirits.size()+1,team_id,live/Dragon::maxlive);
            spirit_map[0]++;
        }
        break;
    case 1:
        if(live>=Ninja::maxlive){
            live-=Ninja::maxlive;
            tempSpirit=new Ninja(spirits.size()+1,team_id);
            spirit_map[1]++;
        }
        break;
    case 2:
        if(live>=Iceman::maxlive){
            live-=Iceman::maxlive;
            tempSpirit=new Iceman(spirits.size()+1,team_id);
            spirit_map[2]++;
        }
        break;
    case 3:
        if(live>=Lion::maxlive){
            live-=Lion::maxlive;
            tempSpirit=new Lion(spirits.size()+1,team_id,live);
            spirit_map[3]++;
        }
        break;
    case 4:
        if(live>=Wolf::maxlive){
            live-=Wolf::maxlive;
            tempSpirit=new Wolf(spirits.size()+1,team_id);
            spirit_map[4]++;
        }
        break;
        
    default:
        break;
    }
    if(tempSpirit==NULL){
        return false;
    }
    if(team_id){
        city.setBlue(tempSpirit);
        tempSpirit->pos=cityNumber+1;
    }
    else{
        city.setRed(tempSpirit);
        tempSpirit->pos=0;
    }
    spirits.push_back(tempSpirit);
    outHour
    cout<<"00 ";
    cout<<name<<' '<<tempSpirit->name<<' '<<tempSpirit->id<<' '<<"born with strength "<<tempSpirit->live<<',';
    cout<<spirit_map[tempSpirit->class_id]<<' '<<tempSpirit->name<<" in "<<name<<' '<<"headquarter"<<endl;
    tempSpirit->print();
    return true;
}

void Team::stopGenerating(int timestamp){
    outHour
    cout<<"00 ";
    cout<<name<<' '<<"headquarter stops making warriors"<<endl;
}

void Team::reportSpirits(){
    for(int i=0;i<spirits.size();i++){
        if(spirits[i]!=NULL){
            if(!spirits[i]->is_alive){
                delete spirits[i];
                spirits[i]=NULL;
            }
            else{
                spirits[i]->report();
            }
        }

    }
}
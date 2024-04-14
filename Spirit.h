#pragma once
#include "Weapon.h"

using namespace std;

bool cmp(Weapon *a, Weapon *b){
    return a->getlive()<b->getlive();
}

class Spirit
{
public:
    static float initPower;
    static float maxlive;
    static int maxWeapon;
    int live;
    bool is_alive;
    float power;
    string name;
    int id;
    int class_id;
    int pos;
    int index;
    int team_id;
    int loyalty;
    string team_name;
    vector<vector<Weapon*>> weapons;
    void hurt(float damage);
    void kill();
    void robAll(Spirit &other);
    void sortWeapons();
    void report();
    int getWeaponNum(){return weapons[0].size()+weapons[1].size()+weapons[2].size();}
    Weapon* getWeapon(int n);
    virtual bool rob(Spirit &other){return false; }
    virtual void win(){}
    virtual void runaway(){}
    virtual void print(){}
    virtual void move(int dx){
        pos+=dx;
    }
    virtual int attack(Spirit &other); //返回是否结束战斗
    Spirit(){
        id=0;
    }
    Spirit(int id1,int team_id1);
    
};

Spirit::Spirit(int id1,int team_id1):id(id1),team_id(team_id1),weapons(3,vector<Weapon*>(0))
{
    is_alive=true;
    index=0;
    if(team_id1) team_name="blue";
    else team_name="red";
}
void Spirit::hurt(float damage){
    live-=damage;
    if (live <= 0)
    {
        kill();
    }
}
void Spirit::kill(){
    is_alive=false; 
}


void Spirit::sortWeapons(){
    for(int i=0;i<3;i++){
        sort(weapons[i].begin(),weapons[i].end(),cmp);
    }
}

Weapon* Spirit::getWeapon(int n){
    switch (n)
    {
    case 0:
        return new Sword(power);
        break;
    case 1:
        return new Bomb(power);
        break;
    case 2:
        return new Arrow(power);
        break;
    default:
        return NULL;
        break;
    }
}

void Spirit::robAll(Spirit &other){
    for(int i=0;i<3;i++){
        while(!other.weapons[i].empty()){
            if(getWeaponNum()<maxWeapon){
                weapons[i].push_back(other.weapons[i].back());
                other.weapons[i].pop_back();
            }
            else break;
        }
    }
}

void Spirit::report() {
    outHour
    cout<<"55 ";
    cout<<team_name<<' '<<name<<' '<<id<<" has "<<weapons[0].size()<<" sword "<<weapons[1].size()<<" bomb "<<weapons[2].size()<<" arrows and "<<live<<" elements"<<endl;
}

int Spirit::attack(Spirit &other){
    if(getWeaponNum()==0){
        return 1;
    }
    if(!is_alive || !other.is_alive){
        return 2;
    }
    if(index>getWeaponNum()-1){index=0;}
    int i=0,j=0;
    //i=(index>(weapons[0].size()-1))+(index>(weapons[1].size()-1 + weapons[0].size()-1))+(index>(weapons[2].size()-1+ weapons[1].size()-1 + weapons[0].size()-1));
    int sum=-1;
    for(int k=0;k<3;k++){
        sum+=weapons[k].size();
        if(index>sum){
            i++;
        }
        else{
            j=index-(sum-weapons[k].size()+1);
            break;
        }
    }
    weapons[i][j]->changeDamage(power);
    other.hurt(weapons[i][j]->getDamage());
    if(weapons[i][j]->getName()=="bomb" && name !="ninja"){
        hurt(weapons[i][j]->getDamage()/2);
    }
    weapons[i][j]->hurt();
    if(weapons[i][j]->getlive()<=0){
        weapons[i].erase(weapons[i].begin()+j);
    }
    if(!is_alive || !other.is_alive){
        return 2;
    }
    index++;
    return 0;
}
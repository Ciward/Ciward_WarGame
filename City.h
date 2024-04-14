#pragma once
#include <iostream>
using namespace std;
#include "Spirit.h"

class City
{
private:
    int id;
    Spirit* red;
    Spirit* blue;

public:
    string name;
    City();
    void init(){
        red=NULL;
        blue=NULL;
    }
    void setId(int id1){
        id=id1;
        name="City "+to_string(id);
    }
    void setRed(Spirit* red1){red=red1;}
    void setBlue(Spirit* blue1){blue=blue1;} 
    Spirit* getRed(){return red;}
    Spirit* getBlue(){return blue;}
    void fight();
    void lionRun();
    void wolfRob();
};

City::City()
{
    
    red=NULL;
    blue=NULL;
}
void City::fight(){
    if(red!=NULL && blue!= NULL){
        int isEnd= 0;
        red->sortWeapons();
        blue->sortWeapons();
        if(id%2==1){
            while(isEnd<2){
                isEnd= 0;
                isEnd+= red->attack(*blue);
                isEnd+= blue->attack(*red);
            }
        }
        else{
            while(isEnd<2){
                isEnd= 0;
                isEnd+=blue->attack(*red);
                isEnd+=red->attack(*blue);
            }
        }
        outHour
        cout<<"40 ";
        if(red->is_alive && !blue->is_alive) {
            cout<<"red "<<red->name<<' '<<red->id<<" killed "<<"blue "<<blue->name<<' '<<blue->id<<" in "<<name<<endl;
            red->win();
            red->robAll(*blue);
            blue=NULL;
        }
        else if(blue->is_alive && !red->is_alive) {
            cout<<"blue "<<blue->name<<' '<<blue->id<<" killed "<<"red "<<red->name<<' '<<red->id<<" in "<<name<<endl;
            blue->win();
            blue->robAll(*red);
            red=NULL;
        }
        else if(!red->is_alive && !blue->is_alive){
            cout<<"both red "<<red->name<<' '<<red->id<<" and blue "<<blue->name<<' '<<blue->id<<" died in "<<name<<endl;
            blue=NULL;
            red=NULL;
        }
        else{
            cout<<"both red "<<red->name<<' '<<red->id<<" and blue "<<blue->name<<' '<<blue->id<<" were alive in "<<name<<endl;
        }
    }
    
}

void City::lionRun(){
    if(getRed()!=NULL && getRed()->name=="lion"){
        if(getRed()->loyalty<=0) {
            getRed()->runaway();
            setRed(NULL);
        }
    }
    if(getBlue()!=NULL && getBlue()->name=="lion"){
        if(getBlue()->loyalty<=0) {
            getBlue()->runaway();
            setBlue(NULL);
        }
    }
}

void City::wolfRob(){
    if(getRed()!=NULL && getRed()->name=="wolf" && getBlue()!=NULL && getBlue()->name!="wolf"){
        if(getRed()->rob(*(getBlue())))
        cout<<name<<endl;
    }
    if(getBlue()!=NULL && getBlue()->name=="wolf" && getRed()!=NULL && getRed()->name!="wolf"){
        if(getBlue()->rob(*(getRed())))
        cout<<name<<endl;
    }
}
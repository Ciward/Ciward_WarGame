#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "Weapon.h"
#include "Spirit.h"

class Team
{
public:
    int team_id;
    string name;
    vector<Spirit> spirits;
    Team(int team_id1, string name1);
    void generateSpirit(int timestamp);
};

Team::Team(int team_id1, string name1) : team_id(team_id1), name(name1)
{

}
void Team::generateSpirit(int timestamp)
{
    
}


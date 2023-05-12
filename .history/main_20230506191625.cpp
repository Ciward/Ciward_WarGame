#include <iostream>
using namespace std;
#include "Spirit.h"
#include "Team.h"
#include "Weapon.h"
#include "Dragon.h"
#include "Ninja.h"
#include "Iceman.h"
#include "Lion.h"
#include "Wolf.h"




int redS[5]={2,3,4,1,0};
int blueS[5]={3,0,1,2,4};

int M;
int T;
int main() {
	T = 0;
	
	cin>>M;
	cin>>Dragon::maxlive;
	cin>>Ninja::maxlive;
	cin>>Iceman::maxlive;
	cin>>Lion::maxlive;
	cin>>Wolf::maxlive;
	Team redTeam(0,"red",M);
	Team blueTeam(1,"blue",M);
	int redcount=0,bluecount=0;

	while(redTeam.generateSpirit(T,redS[redcount]) || blueTeam.generateSpirit(T,blueS[bluecount])){
		T++;
		bluecount++;
		redcount++;
		bluecount%=5;
		redcount%=5;
	}
	return 0;
}
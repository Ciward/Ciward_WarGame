#include <iostream>
using namespace std;
#include "Weapon.h"
#include "Spirit.h"
#include "Team.h"
#include "Dragon.h"
#include "Ninja.h"
#include "Iceman.h"
#include "Lion.h"
#include "Wolf.h"


float Spirit::maxlive=2;
float Dragon::maxlive=0;
float Ninja::maxlive=0;
float Iceman::maxlive=0;
float Lion::maxlive=0;
float Wolf::maxlive=0;

int redS[5]={2,3,4,1,0};
int blueS[5]={3,0,1,2,4};

int M;
int T,n;
int main() {
	T = 0;
	cin >> n;
	cin>>M;
	cin>>Dragon::maxlive;
	cin>>Ninja::maxlive;
	cin>>Iceman::maxlive;
	cin>>Lion::maxlive;
	cin>>Wolf::maxlive;
	Team redTeam(0,"red",M);
	Team blueTeam(1,"blue",M);
	int redcount=0,bluecount=0;
	cout<<"Case:"<<n<<endl;
	// ��ս��Ϣ
	int cot = 0;
	while(1){
		int cotr = 0,cotb=0;
		if(!redTeam.is_stopped){
			while (!redTeam.generateSpirit(T, redS[redcount])) {
			cotr++;
			redcount++;
			redcount %= 5;
			if (cotr >= 5) {
				redTeam.stopGenerating(T);
				redTeam.is_stopped = true;
				cot++;
				break;
			}
		}
		}
		if(!blueTeam.is_stopped){
			while (!blueTeam.generateSpirit(T, blueS[bluecount])) {
			cotb++;
			bluecount++;
			bluecount %= 5;
			if (cotb >= 5) {
				blueTeam.stopGenerating(T);
				blueTeam.is_stopped=true;
				cot++;
				break;
			}
		}
		}
		if (cot >= 2) break;
		T++;
		bluecount++;
		redcount++;
		bluecount%=5;
		redcount%=5;
	}

	// ��ս��Ϣ
	
	return 0;
}
#include <iostream>
using namespace std;
#include "Spirit.h"
#include "Weapon.h"
#include "Dragon.h"
#include "Ninja.h"
#include "Iceman.h"
#include "Lion.h"
#include "Wolf.h"

int redS[5]={2,3,4,1,0};
int blueS[5]={3,0,1,2,4};

int M;

int main() {
	
	cin>>M;
	cin>>Dragon::maxlive;
	cin>>Ninja::maxlive;
	cin>>Iceman::maxlive;
	cin>>Lion::maxlive;
	cin>>Wolf::maxlive;

	return 0;
}
#include <iostream>
using namespace std;
#include "Spirit.h"
#include "Weapon.h"
#include "Dragon.h"
#include "Wolf.h"
#include "Ninja.h"
#include "Iceman.h"
#include "Lion.h"

int M;

int main() {
	cin>>M;
	for(int i = 0; i < 5; i++)
	Spirit::SetMaxLive(M);
	return 0;
}
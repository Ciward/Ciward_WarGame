#include <iostream>
using namespace std;
#include "Spirit.h"
#include "Weapon.h"

int M;

int main() {
	cin>>M;
	Spirit::SetMaxLive(M);
	return 0;
}
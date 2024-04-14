#include <iostream>
#include <sstream>
#include<stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
extern int T;
using namespace std;
#define outHour cout<<(T/60)/100<<((T/60)%100)/10<<(T/60)%10<<':';


struct Output{
	int team_id;
	int city;
	string str;

};
#include "Weapon.h"
#include "Spirit.h"
#include "Dragon.h"
#include "Ninja.h"
#include "Iceman.h"
#include "Lion.h"
#include "Wolf.h"
#include "City.h"
#include "Team.h"

/*
test:
2
300 18 10 3000
10 10 15 5 10
20 20 20 20 20
400 14 10 3000
10 10 15 5 10
10 10 10 10 10
*/

bool cmpOutPut(Output& o1, Output& o2){
	if(o1.city<o2.city){
		return true;
	}
	else if(o1.city>o2.city){
		return false;
	}
	else{
		return o1.team_id<o2.team_id;
	}
}

int Spirit::maxWeapon=10;

float Spirit::maxlive=2;
float Dragon::maxlive=0;
float Ninja::maxlive=0;
float Iceman::maxlive=0;
float Lion::maxlive=0;
int Lion::k=0;
float Wolf::maxlive=0;

float Dragon::initPower=114514;
float Ninja::initPower=114514;
float Iceman::initPower=114514;
float Lion::initPower=114514;
float Wolf::initPower=114514;

int redS[5]={2,3,4,1,0}; //红选取顺序
int blueS[5]={3,0,1,2,4}; //蓝选取顺序

int M; //生命元
int n,N,cityNum,endingTime;
int redcount=0,bluecount=0; //红蓝选取索引
int cot = 0;
int T=0;
City cities[22];
Team redTeam(0,"red",1);
Team blueTeam(1,"blue",1);

void initcities(){
	for(int i=0;i<=cityNum+1;i++){
		if(i!=0 && i!=cityNum+1)
		cities[i].setId(i);

		cities[i].setRed(NULL);
		cities[i].setBlue(NULL);
	}
}

void generate(){
	// 降生信息
	
	if(!redTeam.is_stopped){
		if(!redTeam.generateSpirit(T, redS[redcount],cities[0])) {
			redTeam.stopGenerating(T);
			redTeam.is_stopped = true;
			
		}
	}
	if(!blueTeam.is_stopped){
		if (!blueTeam.generateSpirit(T, blueS[bluecount], cities[cityNum + 1])) {
			blueTeam.stopGenerating(T);
			blueTeam.is_stopped = true;
			
		}
	}
	//if (cot >= 2) break;
	
	bluecount++;
	redcount++;
	bluecount%=5;
	redcount%=5;
}

bool update(){
	
	generate();
	// 开战信息
	int redStart=0,blueStart=cityNum+1;
	bool stopped = false;
	for(int i=0;i<=cityNum+1;i++) {
		// lions run
		cities[i].lionRun();
		// find the firts move
		if(cities[i].getRed()!=NULL){
			redStart=i;
		}
		if(cities[i].getBlue()!=NULL && !stopped){
			blueStart=i;
			stopped=true;
		}
	}
	// red move
	// use stringstream to reverse the output
	vector<Output> output;
	for(int i=redStart+1;i>0;i--){
		if(cities[i-1].getRed()!=NULL){
			cities[i].setRed(cities[i-1].getRed());
			ostringstream streami;
			streami<<(T/60)/100<<((T/60)%100)/10<<(T/60)%10<<':';
			streami<<"10 ";
			cities[i].getRed()->move(1);
			streami<<"red "<<cities[i].getRed()->name<<' '<<cities[i].getRed()->id<<" marched to "<<cities[i].name;
			streami<<" with "<<cities[i].getRed()->live<<" elements and force "<<cities[i].getRed()->power << endl;
			cities[i-1].setRed(NULL);
			Output out1;
			out1.str=streami.str();
			out1.city=i;out1.team_id=0;
			output.push_back(out1);
		}
	}
	
	// blue move
	for(int i=blueStart-1;i<=cityNum;i++){
		if(cities[i+1].getBlue()!=NULL){
			cities[i].setBlue(cities[i+1].getBlue());
			ostringstream streami;
			streami<<(T/60)/100<<((T/60)%100)/10<<(T/60)%10<<':';
			streami<<"10 ";
			cities[i].getBlue()->move(-1);
			streami<<"blue "<<cities[i].getBlue()->name<<' '<<cities[i].getBlue()->id<<" marched to "<<cities[i].name;
			streami<<" with "<<cities[i].getBlue()->live<<" elements and force "<<cities[i].getBlue()->power<<endl;
			cities[i+1].setBlue(NULL);
			Output out1;
			out1.str=streami.str();
			out1.city=i;out1.team_id=1;
			output.push_back(out1);
		}
	}
	// output
	sort(output.begin(),output.end(),cmpOutPut);
	for(int i=0;i<output.size();i++){
		cout<< output[i].str;
	}
	output.clear();
	if(cities[0].getBlue() != NULL){
		outHour
		cout<<"10 ";
		cout<<"red headquarter was taken"<<endl;
		return true;
	}
	if(cities[cityNum+1].getRed() != NULL){
		outHour
		cout<<"10 ";
		cout<<"blue headquarter was taken"<<endl;
		return true;
	}
	// wolf rob
	for(int i=0;i<=cityNum;i++) {
		cities[i].wolfRob();
	}
	// fight!!
	for(int i=0;i<=cityNum;i++) {
		cities[i].fight();
	}
	// headquarter report
	redTeam.report();
	blueTeam.report();
	// spirits report
	for(int i=0;i<=cityNum;i++) {
		if(cities[i].getRed() != NULL) {
			cities[i].getRed()->report();
		}
		if(cities[i].getBlue() != NULL) {
			cities[i].getBlue()->report();
		}
	}
	T+=60;
	return false;
}
int main() {
	n=0;
	cin >> N;
	while(n<N){
		T = 0;
		redcount = 0;
		bluecount = 0;
		n++;
		cin>>M>>cityNum>>Lion::k>>endingTime;
		cities[0].name = "red headquarter";
		cities[cityNum+1].name = "blue headquarter";
		initcities();
		cin>>Dragon::maxlive;
		cin>>Ninja::maxlive;
		cin>>Iceman::maxlive;
		cin>>Lion::maxlive;
		cin>>Wolf::maxlive;

		cin>>Dragon::initPower;
		cin>>Ninja::initPower;
		cin>>Iceman::initPower;
		cin>>Lion::initPower;
		cin>>Wolf::initPower;
		
		redTeam.init();
		redTeam.setLive(M);
		redTeam.cityNumber = cityNum;
		
		blueTeam.init();
		blueTeam.setLive(M);
		blueTeam.cityNumber = cityNum;
		cout<<"Case:"<<n<<endl;
		
		while(T<=endingTime){
			if (update()) {
				break;
			}
		}
		
	}
	//system("pause");
	return 0;
}
/*
 * TowerofHanoi.cpp
 *
 *  Created on: 20-Apr-2017
 *      Author: asingha6
 */


#include<stdio.h>
#include<iostream>
using namespace std;

void towerofHanoi(int n,char source,char dest,char temp){

	if(n==0)
		return;
	towerofHanoi(n-1,source,temp,dest);
	cout<<"Move disk "<<n<<"from"<<source<<"to destination"<<dest<<endl;
	towerofHanoi(n-1,temp,dest,source);
}

int main(){
	int n;
	cin>>n;
	towerofHanoi(n,'S','D','T');
	return 0;
}


/*
 * CF410QsB.cpp
 *
 *  Created on: 21-Apr-2017
 *      Author: asingha6
 */




#include<stdio.h>
#include<iostream>
using namespace std;
#include<vector>

int main(){
	vector<string> s;
	int n;
	cin>>n;
	string tmp;
	for(int i=0;i<n;i++){
		cin>>tmp;
		s.push_back(tmp);
	}
	int l=s[0].length();
	int minmoves=1000000;
	for(int i=0;i<n;i++){
		string ans=s[i];
		int currcounter=0;
		for(int j=0;j<n;j++){
			string tmp=s[j];
			int k;
			for(k=0;k<l;k++){
				if(ans==s[j]){
					break;
				}
				else{
					string c=s[j];
					char tmpc=s[j][0];
					c.erase(0,1);
					c+=tmpc;
					s[j]=c;
					currcounter++;
				}
			}
			//cout<<s[j]<<" "<<s[i]<<endl;
			s[j]=tmp;
			if(k==l){
				cout<<"-1"<<endl;
				return 0;
			}
		}
		if(currcounter<minmoves)
			minmoves=currcounter;
	}
cout<<minmoves<<endl;
	return 0;
}

/*
 * CF413QsB.cpp
 *
 *  Created on: 13-May-2017
 *      Author: asingha6
 */
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
	int n;
	int p[200002],a[200002],b[200002],c[200002],m;
	vector<int >shirtcolor[4];
	map <int,int> shirtprice;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>p[i];
	shirtprice[p[i]]=1;
	}
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	cin>>m;
	for(int i=0;i<m;i++)
	cin>>c[i];

	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			shirtcolor[a[i]].push_back(p[i]);
			shirtcolor[b[i]].push_back(p[i]);
		}
		else{
			shirtcolor[a[i]].push_back(p[i]);
		}
	}
	sort(shirtcolor[1].begin(),shirtcolor[1].begin()+shirtcolor[1].size());
	sort(shirtcolor[2].begin(),shirtcolor[2].begin()+shirtcolor[2].size());
	sort(shirtcolor[3].begin(),shirtcolor[3].begin()+shirtcolor[3].size());

int indexabc[4]={0};
for(int i=0;i<m;i++){
	int shirtype=c[i];
		while(indexabc[shirtype]<shirtcolor[shirtype].size()  && !shirtprice[shirtcolor[shirtype][indexabc[shirtype]]]){
			indexabc[shirtype]++;
		}
		if(indexabc[shirtype]==shirtcolor[shirtype].size()){
			cout<<"-1"<<" ";
		}
		else{
			shirtprice[shirtcolor[shirtype][indexabc[shirtype]]]=0;
			cout<<shirtcolor[shirtype][indexabc[shirtype]]<<" ";
		}
}

cout<<endl;
	return 0;
}




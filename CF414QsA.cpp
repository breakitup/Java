/*
 * CF414QsA.cpp
 *
 *  Created on: 13-May-2017
 *      Author: asingha6
 */

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
int oleg ,b ,c ,n;
map <int ,int >banknotes;
cin>>oleg>>b>>c;
cin>>n;
int arr[100002];
for(int i=0;i<n;i++){
	cin>>arr[i];
	if(banknotes.count(arr[i])>0){
		banknotes[arr[i]]++;
	}
	else
		banknotes[arr[i]]=1;
}
sort(arr,arr+n);
long long maxbanknotes=0;
for(int i=0;i<n;i++){
if(arr[i]>b && arr[i]<c){
	maxbanknotes+=banknotes[arr[i]];
	while(i+1<n && arr[i+1]==arr[i])
		i++;
	//cout<<arr[i]<<endl;
}
}
cout<<maxbanknotes<<endl;
}



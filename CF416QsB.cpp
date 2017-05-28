#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,m,arr[10002],l,r,x;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	while(m--){
		cin>>l>>r>>x;
		int count[10002]={0};
		for(int i=l;i<=r;i++){
			count[arr[i]]=1;
		}
		int counter=0;
		for(int i=1;i<=10000;i++){
			if(count[i]==1){
				counter++;
			}
			if(i==arr[x]){
				if(counter+l-1==x){
					cout<<"Yes"<<endl;
				}
				else{
					cout<<"No"<<endl;
				}
				break;
			}
		}
	}
	return 0;
}
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int n,m,k,hole,p1,p2;
	int hash[2000002]={0};
	cin>>n>>k>>m;
	for(int i=0;i<k;i++){
		scanf("%d",&hole);
		hash[hole]=1;
	}
	int currpos=1,flag=0;
	while(m--){
		scanf("%d%d",&p1,&p2);
		if(!flag){
		if(currpos==p1){
			if(hash[p1]){
				flag=1;
			}
			else{
				currpos=p2;
				if(hash[p2])
					flag=1;
			}
		}
		else if(currpos==p2){
			if(hash[p2]){
				flag=1;
			}else{
				currpos=p1;
				if(hash[p1])
					flag=1;
			}
		}
	}
	}
	cout<<currpos<<endl;
	return 0;
}

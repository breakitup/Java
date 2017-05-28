#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long a,b;
	long long cand=1;
	cin>>a>>b;
	while(1){
		if(cand%2){
			a-=cand;
		}
		else {
			b-=cand;
		}
		if(a<0){
			cout<<"Vladik"<<endl;
			return 0;
		}
		else if(b<0){
			cout<<"Valera"<<endl;
			return 0;
		}
		cand++;
	}
	return 0;
}
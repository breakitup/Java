#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int roundoff(double k){
	if(k-floor(k)<0.5){
		return floor(k);
	}
	else
		return ceil(k);
}

int main(){
	int n,k;
	int marks[101];
	double sum=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>marks[i];
		sum+=marks[i];
	}
	int count=0;
	double avg=sum/n;
while(roundoff(avg)<k){
	count++;
	sum+=k;
	avg=(sum)/(n+count);
}
cout<<count<<endl;
	return 0;
}
/*
 * CF414QsB.cpp
 *
 *  Created on: 13-May-2017
 *      Author: asingha6
 */

#include<stdio.h>
#include<iostream>
using namespace std;
double error=.000000001;
double h;

double binary_search(double low,double high,double area){
	if(high-low<error){
		return low;
	}

	//cout<<high<<" "<<tmparea<<endl;
	double mid=(low+high)/2.0;
	double tmparea=((mid*mid)/h)/2.0;
	if(tmparea>area)
		return binary_search(low,mid,area);
	else
		return binary_search(mid,high,area);
}


int main(){
int n;
cin>>n>>h;
double oldarea=(h)/2.0;
oldarea/=(double)n;

for(int i=1;i<n;i++){
double area=((double)i)*(oldarea);
double high=binary_search(0,h,area);
printf("%.8f ",high);
}

return 0;
}



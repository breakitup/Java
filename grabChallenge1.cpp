// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<cmath>
#include<iostream>
#include<stdio.h>
using namespace std;


int solution(string &E, string &L) {
    // write your code in C++14 (g++ 6.2.0)
   double entryTime=((E[1]-'0')+10*(E[0]-'0'))*60+(E[4]-'0')+10*(E[3]-'0');
    double exitTime=((L[1]-'0')+10*(L[0]-'0'))*60+(L[4]-'0')+10*(L[3]-'0');
    int difference=ceil((exitTime-entryTime)/60);
    int cost=2;
    if(difference>1){
        cost+=3;
        cost+=(difference-1)*4;
    }
    else if(difference==1)
    cost+=3;
return cost;
}

int main(){
	string s1="00:00";
	string s2="01:01";
	cout<<solution(s1,s2)<<endl;
	return 0;

}
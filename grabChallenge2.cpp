// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<cmath>
#include<vector>
#include<iostream>
#include<stdio.h>
using namespace std;

int minCost(int hash[],int day){
if(day>=31)
    return 0;
  if(hash[day]==1){
      return min(2+minCost(hash,day+1),7+minCost(hash,day+7));
  }
      return minCost(hash,day+1);
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int hash[31]={0};
    for(int i=0;i<A.size();i++){
     hash[A[i]]=1;   
    }
    cout<<min(minCost(hash,1),25)<<endl;
    return 0;
}

int main(){

vector<int> A;
A.resize(32);
A[0] = 1;
    A[1] = 2;
    A[2] = 4;
    A[3] = 5;
    A[4] = 7;
    A[5] = 29;
    A[6] = 30;
    solution(A);
  return 0;
}
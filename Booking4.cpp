#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x;
    int n;
    cin>>x>>n;
    long long arr[100000],exit[100000];
    for(int i=0;i<n;i++){
        scanf("%lld%lld",&arr[i],&exit[i]);
    }
    sort(arr,arr+n);
    sort(exit,exit+n);
    int i=0,j=0;
    long long guest=0,maxguest=0;
    while(i<n && j<n ){
        if(arr[i]<=exit[j]){
            guest++;
            i++;
            if(guest>maxguest)
                maxguest=guest;
        }
        else{
            guest--;
            j++;
        }   
    }
    if(maxguest>=x)
    cout<<maxguest-x<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
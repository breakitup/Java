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
    int arr[1000000],i,n;
    while (!cin.eof())
{
    cin>>arr[i++];
}
        n=i;
    cout<<arr[0]<<" ";
    for(int i=1;i<n;i++){
        int diff=arr[i]-arr[i-1];
        if(diff>=-127 && diff<=127){
            cout<<diff<<" ";
        }
        else{
            cout<<"-128 ";
            cout<<diff<<" ";
        }
    }
    cout<<endl;
    
    return 0;
}
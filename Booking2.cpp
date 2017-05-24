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

struct node{
    int id;
    int count;
};

bool compare(node a,node b){
    if(a.count<b.count)
        return 1;
    else
        return 0;
}

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string words,reviews;
    int n,id;
    map<string,int> m;
    cin>>words;
    int l=words.length();
    for(int i=0;i<l;){
        string tmp;
        int j=i;
        int count=0;
        while(j<l && words[j]!=' '){
            count++;
            j++;
        }
        tmp=words.substr(i,count);
        m[tmp]=1;
        i=j++;
    }
    map< int, int> reviewcount;
    set<int>s;
    while(n--){
        cin>>id;
        s.insert(id);
        cin>>reviews;
        int r=reviews.length();
    for(int i=0;i<r;){
        string tmp;
        int j=i;
        int count=0;
        while(j<l && reviews[j]!=' '){
            count++;
            j++;
        }
        tmp=reviews.substr(i,count);
        if(m.count(tmp)){
            if(reviewcount.count(id)){
                reviewcount[id]++;
            }
            else
                reviewcount[id]=1;
        }
        i=j++;
    }
    }
    node arr[s.size()+1];
    set<int>::iterator it;
    int k=0;
    for(it=s.begin();it!=s.end();it++){
        arr[k].id=*it;
            arr[k].count=reviewcount[*it];
        k++;
    }
    sort(arr,arr+k,compare);
    for(int i=k-1;i>=0;i--){
        cout<<arr[i].id<<" ";
    }
    cout<<endl;
    
    return 0;
}
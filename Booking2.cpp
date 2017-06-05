#include <map>
#include <set>
#include<unordered_set>
#include <iostream>
#include <algorithm>
#include<string>
#include <unordered_map>
using namespace std;

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


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string words,reviews;
    int n,id;
    map<string,int> m;
    getline(cin,words);
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
        j++;
        i=j;
    }
    map< int, int> reviewcount;
    set<int>s;
    cin>>n;
    while(n--){
        cin>>id;
        s.insert(id);
        getchar();
        getline(cin,reviews);
        //cout<<reviews<<endl;
        int r=reviews.length();
        for(int i=0;i<r;){
            string tmp;
            int j=i;
            int count=0;
            while(j<r && reviews[j]!=' '){
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
            j++;
            i=j;
        }
    }
    node arr[s.size()+1];
    set <int>::iterator it;
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
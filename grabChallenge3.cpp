// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<iostream>
#include<vector>
#include<stdio.h>
bool visited[100001]={0};
#include<queue>
using namespace std;

void solution(vector<int> &T) {
    // write your code in C++14 (g++ 6.2.0)
    int cities=T.size();
    vector <int> graph[cities+1];
     int capital;
    for(int i=0;i<cities;i++){
     if(T[i]==i)
     capital=i;
     else{
         graph[i].push_back(T[i]);
         graph[T[i]].push_back(i);
     }
    }
     queue<int>q;
    queue<int>l;
    q.push(capital);
    vector<int>distance;
    distance.resize(cities-1);
    l.push(1);
    while(!q.empty()){
        int u=q.front();
        int tmp=l.front();
        q.pop();
        l.pop();
        visited[u]=1;
        int neighbours=0;
        for(int i=0;i<graph[u].size();i++){
            if(!visited[graph[u][i]]){
             q.push(graph[u][i]);
             l.push(tmp+1);
              distance[tmp-1]++;
            }
        }
    }
    return distance;
   
}

int main(){
    vector<int> T;
    T.resize(1);
    T[0] = 0 ;   
 
solution(T);
    return 0;
}
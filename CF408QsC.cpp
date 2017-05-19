#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
long long maxi, max1, max2;
vector<int> graph[300002];
long long power[300002];

void update_child(int curr, int level, int parent) {
	if (level == 2)
		return;

	for (int i = 0; i < graph[curr].size(); i++) {
		int child = graph[curr][i];
		if (child != parent) {
			long long newpower = power[child] + level + 1;
			if (newpower >= maxi + 1)
				max1 = 1;
			if (newpower == maxi + 2)
				max2 = 1;
			update_child(child, level + 1, curr);
		}
	}
}

int main() {
	int u, v, n;
	cin >> n;
	maxi = -1;
	for (int i = 1; i <= n; i++) {
		cin >> power[i];
		if (power[i] > maxi)
			maxi = power[i];
	}
	for (int i = 1; i < n; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	long long minmax=maxi;
	update_child(1, 0, -1);
	if(!max1){
		minmax=maxi;
	}
	else if(!max2){
		minmax=maxi+1;
	}
	else
		minmax=maxi+2;
	cout<<maxi<<" "<<max1<<" "<<max2<<endl;
	for (int i = 2; i <= n; i++) {
		max1=0;max2=0;
		update_child(i, 0, -1);
		long long newpower=maxi+max1+max2;
		if(newpower<minmax)
			minmax=newpower;
		cout<<maxi<<" "<<max1<<" "<<max2<<endl;
	}
	cout<<minmax<<endl;
	return 0;
}

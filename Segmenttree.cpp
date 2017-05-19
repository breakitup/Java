/*
 * Segmenttree.cpp
 *
 *  Created on: 13-Apr-2017
 *      Author: asingha6
 */

#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstring>
using namespace std;
long long segments[200004];
long long a[100002];
void buildtree(int node,int s,int e){
	if(s==e){
		segments[node]=a[s];

	}
	else{
	int mid=(s+e)/2;
	buildtree(2*node,s,mid);
	buildtree(2*node+1,mid+1,e);
	segments[node]=min(segments[2*node],segments[2*node+1]);
	}
}

long long querytree(int node,int s,int e,int l,int r){
	if(l>e || r<s)
		return 1000005;
	else if(l<=s && r>=e){
		return segments[node];
	}
	else{
		int mid=(s+e)/2;
		long long m1=querytree(2* node, s, mid, l, r);
		long long m2=querytree(2* node+1, mid+1, e, l, r);
		return min(m1,m2);
	}
}

void updatetree(int node,int s,int e,int index,int value){
if(s==e){
	segments[node]=value;
	a[index]=value;
}
else{
	int mid=(s+e)/2;
	if(index>=s && index<=mid){
		updatetree(2*node,s,mid,index,value);
	}
	else{
		updatetree(2*node+1,mid+1,e,index,value);
	}
	segments[node]=min(segments[2*node],segments[2*node+1]);
}
}

int main(){
	int n,q,y,l,r;
	char op;

	cin>>n>>q;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	buildtree(1,1,n);
	while(q--){
		cin>>op>>l>>r;
		if(op=='q'){
			cout<<querytree(1,1,n,l,r)<<endl;
		}
		else if(op=='u'){
			updatetree(1,1,n,l,r);
		}
	}

	return 0;
}



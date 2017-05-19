#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,k,m;
	int a[102];
	cin>>n>>k>>m;
	int res=101;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=0 && i !=k){
			if(a[i]<=m && res >abs(i-k))
				res=abs(i-k);
		}
	}
	cout<<res*10<<endl;
	return 0;
}

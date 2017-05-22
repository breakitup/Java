#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<set>
#include<cmath>
using namespace std;

struct product{
int index;
int noProduct;
int noClient;
};

bool compare(product a,product b){
if((min(2*a.noProduct,a.noClient)-min(a.noProduct,a.noClient)) > (min(2*b.noProduct,b.noClient)-min(b.noProduct,b.noClient)))
	return 1;
else
	return 0;
}

int main(){
	int n,f;
	cin>>n>>f;
	product arr[n+1];
	int prod[n+1],client[n+1];
	for(int i=0;i<n;i++){
		cin>>prod[i]>>client[i];
		arr[i].index=i;
		arr[i].noProduct=prod[i];
		arr[i].noClient=client[i];
	}
	sort(arr,arr+n,compare);
	long long maxNoProduct=0;
	set<int> s;
	for(int i=0;i<f;i++){
		maxNoProduct+=(min(2*arr[i].noProduct,arr[i].noClient));
		s.insert(arr[i].index);
	}
	for(int i=0;i<n;i++){
		if(!s.count(i)){
			maxNoProduct+=(min(prod[i],client[i]));
		}
	}
	cout<<maxNoProduct<<endl;
	return 0;
}
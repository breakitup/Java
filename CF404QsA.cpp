#include<iostream>
#include<cstring>
#include<set>
#include<map>
#include<vector>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	string s;
	long long count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&n);
		cin>>s;
		if(s=="Tetrahedron"){
			count+=4;
		}
		else if(s=="Cube"){
			count+=6;
		}
		else if(s=="Octahedron"){
			count+=8;
		}
		else if(s=="Dodecahedron"){
			count+=12;
		}
		else if(s=="Icosahedron"){
			count+=20;
		}
	}
	printf("%lld\n",count);

}

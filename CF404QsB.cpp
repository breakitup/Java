#include<iostream>
#include<cstring>
#include<set>
#include<map>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

struct period{
	int s;
	int e;
};

bool compare(period p1, period p2) {
	if (p1.s < p2.s)
		return 1;
	else
		return 0;
}

bool compare1(period p1, period p2) {
	if (p1.e < p2.e)
		return 1;
	else
		return 0;
}

int main(){
int n,m;
period chessplayers[200002];
period progplayers[200002];
vector<int>v[20];
scanf("%d",&n);
for(int i=0;i<n;i++){
	scanf("%d%d",&chessplayers[i].s,&chessplayers[i].e);
}
scanf("%d",&m);
for(int i=0;i<m;i++){
	scanf("%d%d",&progplayers[i].s,&progplayers[i].e);
}

sort(chessplayers,chessplayers+n,compare1);
sort(progplayers,progplayers+m,compare);
int maxtime=progplayers[m-1].s-chessplayers[0].e;

sort(chessplayers,chessplayers+n,compare);
sort(progplayers,progplayers+m,compare1);
int maxtime1=chessplayers[n-1].s-progplayers[0].e;
if(maxtime<maxtime1)
	maxtime=maxtime1;
if(maxtime>0)
	printf("%d\n",maxtime);
else
	printf("0\n");
}

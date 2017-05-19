#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
#define LIMIT .00000001

struct friendinfo {
	double speed;
	double cord;
};

friendinfo list[60002];
int n;

bool compare(friendinfo f1, friendinfo f2) {
	if (f1.cord < f2.cord)
		return 1;
	else
		return 0;
}

double meetingPoint(double low, double high) {
	if (high - low < LIMIT)
		return high;
	double mid = (low + high) / 2.0;
	int s = 0;
	double maxtimeinleft = 0, maxtimeinright = 0, i;
	for (i = list[s].cord; i < mid; i = list[++s].cord) {
		double time = ((mid - i)) / list[s].speed;
		if (maxtimeinleft < time)
			maxtimeinleft = time;
	}
	for (; s < n; i = list[++s].cord) {
		double time = ((i - mid)) / list[s].speed;
		if (maxtimeinright < time)
			maxtimeinright = time;
	}
	if (maxtimeinleft > maxtimeinright)
		return meetingPoint(low, mid);
	else
		return meetingPoint(mid, high);
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &list[i].cord);
	}
	for (int i = 0; i < n; i++) {
		scanf("%lf", &list[i].speed);
	}
	sort(list, list + n, compare);
	double mp = meetingPoint(list[0].cord, list[n - 1].cord);
	double maxtime = 0;
	for (int i = 0; i < n; i++) {
		double time = (abs(mp - list[i].cord)) / list[i].speed;
		if (maxtime < time)
			maxtime = time;
	}
	printf("%.8lf\n", maxtime);
	return 0;
}

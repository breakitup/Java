#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<stack>
#include<cmath>
#include<queue>
using namespace std;
long long n, m;

long long binarysearch(long long low, long long high) {

	if (low > high)
		return low;
	long long mid = (low + high) / 2;

	long long quantityate = ((mid * (mid + 1)) / 2);
	long long barnsize = (n - m - quantityate);
	if (barnsize == 0)
		return mid;
	if (barnsize > 0)
		return binarysearch(mid + 1, high);
	else
		return binarysearch(low, mid - 1);
}

int main() {
	scanf("%lld%lld", &n, &m);
	long long high = 2000000000;
	if (n <= m) {
		printf("%lld\n", n);
		return 0;
	}
	long long res = binarysearch(0, high);
	printf("%lld\n", res + m);
}

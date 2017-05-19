/*
 * CF413QsA.cpp
 *
 *  Created on: 12-May-2017
 *      Author: asingha6
 */

#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main() {

	int n, t, d, k;
	int onemicrowavetime, twomicrowavetime;
	cin >> n >> t >> k >> d;
	onemicrowavetime = (n / k+ (n%k>0)) * t;

	if (onemicrowavetime-t <=d) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
	return 0;
}


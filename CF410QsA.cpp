/*
 * CF410QsA.cpp
 *
 *  Created on: 21-Apr-2017
 *      Author: asingha6
 */

#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	string s;
	int i = 0;
	int count = 0;
	cin >> s;
	int l1 = s.length() - 1;
	int l=l1;
	while (i < l) {
		if (s[i] != s[l])
			count++;
		i++;
		l--;
	}
	//cout<<l;
	if (count == 0 && ((l1 + 1) % 2 == 1))
		cout << "YES" << endl;
	else if (count == 0)
		cout << "NO" << endl;
	else if (count > 1)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;

	return 0;
}

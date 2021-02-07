/*************************************************************************
	> File Name: oj479.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 08 Nov 2020 02:21:34 PM CST
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int a11[6005][2], a22[6005][2], ind1, ind2;

void p() {
	for (int i = 0; i <= ind1; i++) {
		cout << a11[i][0] << ":" << a11[i][1] << endl;
	}
	cout << endl;
	for (int i = 0; i <= ind2; i++) {
		cout << a22[i][0] << ":" << a22[i][1] << endl;
	}
}

int main() {
	char s[30];
	while(cin >> s) {
		for (int i = 0; s[i]; i++) {
			if (s[i] == 'E') {
				p();
				return 0;
			}
			if (s[i] == 'W') {
				a11[ind1][0]++;
				a22[ind2][0]++;
			}else{
				a11[ind1][1]++;
				a22[ind2][1]++;
			}
			if ((a11[ind1][0] >= 11 || a11[ind1][1] >= 11 ) && abs(a11[ind1][0] - a11[ind1][1]) >= 2) {
				ind1++;
			}
			if ((a22[ind2][0] >= 21 || a22[ind2][1] >= 21 ) && abs(a22[ind2][0] - a22[ind2][1]) >= 2) {
				ind2++;
			}
		}
	}


	return 0;
}

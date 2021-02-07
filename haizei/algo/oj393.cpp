/*************************************************************************
	> File Name: oj393.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 03:08:25 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int n, m;
double num[10005], tr;

int func(double mid) {
	int t = 0;
	for(int i = 0; i < n; i++) {
		t += num[i] / mid;
	}
	return t;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		tr = max(tr, num[i]);
	}
	double l = 0, r = tr;
	while(r - l > 0.00001) {
		double mid = (l + r) / 2;
		int t = func(mid);
		if (t >=m) l = mid;
		else r = mid;
	}
	printf("%.2f\n", (int)(l * 100) / 100.0);
	return 0;
}

/*************************************************************************
	> File Name: oj393.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 01 Nov 2020 06:18:25 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int n, m;
double num[10005], tr;

int func(double mid) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += num[i] / mid;
	}
	return  s;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		tr = max(num[i], tr);
	}
	double l = 0.0, r = tr;
	while ( r - l > 0.00001 ) {
		double mid = (r + l) / 2.0;
		int s = func(mid);
		if (s >= m) l = mid;
		else r = mid;
	}
	printf("%.2f\n", ((int)(r * 100)) / 100.0);
	return 0;
}

/*************************************************************************
	> File Name: oj82.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 01 Nov 2020 06:42:05 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

long long  n, m, num[1000005], tr;

long long func(int mid) {
	long long s = 0;
	for (int i = 0; i < n ;i++){
		if (mid < num[i])  s += num[i] - mid;
	} 
	return s;
}


int binary_search() {
	long long l = 0, r = tr;
	while (l != r) {
		int mid = (l + r ) / 2; // int mid = (l + r + 1) / 2;
		long long s = func(mid);
		if (s > m) l = mid + 1;   // if (s >=m) l = mid;
		else r = mid - 1;
	}
	return r;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		tr = max(tr, num[i]);
	}
	cout << binary_search() << endl;
	return 0;
}

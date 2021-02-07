/*************************************************************************
	> File Name: oj82.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 03:22:13 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

long long n, m, num[1000005], lr;

long long func(long long mid) {
	long long t = 0;
	for (long long i = 0; i < n; i++) {
		if (mid < num[i]) t += num[i] - mid;
	}
	return t;
}

int main() {
	cin >> n >> m;
	for (long long i = 0; i < n; i++) {
		cin >> num[i];
		lr = max(lr, num[i]);
	}
	long long l = 0, r = lr;
	while (l != r) {
		long long mid = (l + r + 1) / 2;
		long long t = func(mid);
		if (t >= m) l = mid;
		else r = mid - 1;
	}
	cout << r << endl;
	return 0;
}

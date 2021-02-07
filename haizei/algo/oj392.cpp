/*************************************************************************
	> File Name: oj392.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 04:35:56 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

long long n, m, num[100005], lr;

long long func(long mid) {
	long long s = 1, last = num[0];
	for (long long i = 1; i < n; i++) {
		if ((num[i] - last) >= mid) {
			s++;
			last = num[i];
		}
	}
	return s;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		lr = max(lr, num[i]);
	}
	sort(num, num + n);
	long long l = 1, r = lr;
	while (l != r) {
		long long mid = (l + r + 1) / 2;
		long long t = func(mid);
		if (t >= m) l = mid;
		else r = mid - 1;
	}
	cout << r << endl;
	return 0;
}

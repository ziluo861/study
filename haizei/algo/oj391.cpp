/*************************************************************************
	> File Name: oj391.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 03:34:01 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

long long n, m, num[100005], ll, lr;

long long func(long long mid) {
	long long cnt = 0, now = 0;
	for (int i = 0; i < n; i++) {
	if (now + num[i] == mid) {
		cnt++;
		now = 0;	
	}
	else if (now + num[i] > mid) {
		cnt++;
		now = num[i];
	}
	else {
		now += num[i];
	}
}
	if (now) cnt++;
	return cnt;
}

int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		cin >> num[i];
		ll = max(ll, num[i]);
		lr += num[i]; 
	}
	long long l = ll, r = lr;
	while (l != r) {
		long long mid = (l + r) / 2;
		long long s = func(mid);
		if (s <= m) r = mid;
		else l = mid + 1;
	}
	cout << r << endl;
	return 0;
}

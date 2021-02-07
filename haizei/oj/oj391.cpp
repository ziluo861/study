/*************************************************************************
	> File Name: oj391.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 01 Nov 2020 07:12:31 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

long long  n, m, num[100005], tl, tr;

long long func(long long mid) {
	long long cnt = 0, now = 0;
	for (int i = 0; i < n ;i++) {
		if (now + num[i] == mid) { // 刚好凑成一段
			cnt++;
			now = 0;
		}
		else if (now + num[i] > mid) { //凑成一段多
			cnt++;
			now = num[i];
		}
		else { // 无法凑成一段
			now += num[i];
		}
	}
	if (now) { //判断最后一段是否统计
		cnt++;
	}
	return cnt;
}

long long binary_search() {
	while (tl != tr) {
		long long mid = (tl + tr) / 2;
		long long s = func(mid);
		if (s <= m) tr = mid;
		else tl = mid + 1;
	}
	return tl;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		tl = max(tl, num[i]);
		tr += num[i];
	}
	
	cout << binary_search() << endl;

	return 0;
}

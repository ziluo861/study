/*************************************************************************
	> File Name: oj389.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 02:51:20 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, m, num[100005], lr;

int func(int mid) {
	int s = 1, last = num[0];
	for(int i = 1; i < n; i++) {
		if (num[i] - last >= mid) {
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
		lr = max(lr,num[i]);
	}
	sort(num, num + n);
	int l = 1, r = lr;
	while(l != r) {
		int mid = (l + r + 1) / 2;
		int t = func(mid);
		if (t >= m) l = mid;
		else r = mid - 1;
	}
	cout << l << endl;
	return 0;
}

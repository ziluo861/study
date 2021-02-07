/*************************************************************************
	> File Name: oj394.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 04:19:22 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int ll, n, m, num[50005], lr;

int func(int mid) {
	int cnt = 0, last = 0;
	for(int i = 1; i <= n + 1; i++) {
		if (num[i] - last >= mid) {
			last = num[i];
		}else{
			cnt++;
		}
	}
	return cnt;
}

int main() {
	cin >> ll >> n >> m;
	num[0] = 0, num[n + 1] = ll;
	for(int i = 1; i <= n; i++) {
		cin >> num[i];
		if (i == 1) {
			lr = num[1] - num[0];
		}else{
			lr = min(lr, num[i] - num[i - 1]);
		}
	}
	int l = lr, r = ll;
	while(l != r) {
		int mid = (l + r + 1) / 2;
		int s = func(mid);
		if (s <= m) l = mid;
		else r = mid - 1;
	}
	cout << l << endl;
	return 0;
}

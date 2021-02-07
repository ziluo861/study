/*************************************************************************
	> File Name: oj236.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Nov 2020 03:17:42 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int n, m, num[15], cnt;

void p() {
	for (int i = 0; i < cnt; i++) {
		if (i) {
			cout << " ";
		}
		cout << num[i];
	}
	cout << endl;
}

void func(int s, int left) {
	if (left == 0) {
		p();
		return;
	}
	for (int i = s; i <= n; i++) {
		num[cnt] = i;
		cnt++;
		func(i + 1, left - 1);
		cnt--;
	}
}

int main() {
	cin >> n >> m;
	func(1, m);
	return 0;
}

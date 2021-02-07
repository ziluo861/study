/*************************************************************************
	> File Name: oj237.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Nov 2020 03:42:16 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int n, num[15], mark[15], cnt;

void p() {
	for (int i = 0; i < n; i++) {
		if (i) {
			cout << " ";
		}
		cout << num[i];
	}
	cout << endl;
}

void func(int left) {
	if (left == 0) {
		p();
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (mark[i] == 0) {
			mark[i] = 1;
			num[cnt] = i;
			cnt++;
			func(left - 1);
			cnt--;
			mark[i] = 0;
		}
	}
}

int main() {
	cin >> n;
	func(n);


	return 0;
}

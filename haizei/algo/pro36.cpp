/*************************************************************************
	> File Name: pro36.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Nov 2020 07:43:38 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int rev_num(int x, int base) {
	int temp = 0, y = x;
	while (x) {
		temp = temp * base + x % base;
		x /= base;
	}
	return y == temp;
}

int main() {
	int ans = 0;
	for (int i = 1; i < 1000000; i++) {
		if (rev_num(i, 2) && rev_num(i, 10)) {
			cout << i << endl;
			ans += i;
		}
	}
	cout << "--------" << endl;
	cout << ans << endl;
	return 0;
}

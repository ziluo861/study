/*************************************************************************
	> File Name: pro30.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Nov 2020 08:14:01 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int num[10];

void init() {
	for (int i = 0; i < 10; i++) {
		int t = i;
		for (int j = 1 ; j < 5; j++) {
			t *= i;
		}
		num[i] = t;
	}
}

int check(int i) {
	int temp = 0, y = i;
	while(i) {
		temp += num[i % 10];
		i /= 10;
	}
	return temp == y;
}

int main() {
	init();
	int ans = 0;
	for (int i = 10; i < 1000000; i++) {
		if (check(i)) {
			ans += i;
			cout << i << endl;
		}
	}
	cout << ans << endl;
}

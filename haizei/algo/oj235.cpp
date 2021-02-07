/*************************************************************************
	> File Name: oj235.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Nov 2020 02:34:51 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int n, num[15];

void p(int deep) {
	for (int i = 1; i <= deep; i++) {
		if (i != 1) {
			cout << " ";
		}
		cout << num[i];
	}
	cout << endl;
}

void func(int s, int deep) {

	for (int i = s ; i <= n; i++) {
		num[deep] = i;
		p(deep);
		func(i + 1, deep + 1);
	}
}

int main() {
	cin >> n;
	func(1, 1);


	return 0;
}

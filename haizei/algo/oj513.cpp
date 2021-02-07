/*************************************************************************
	> File Name: oj513.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 08 Nov 2020 07:39:04 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int m, t, ans;

int func(int x, int t) {
	while(x) {
		if (x % 10 == t) {
			return 0;
		}else{
			x /= 10;
		}
	}
	return 1;
}

int main() {
	cin >> m >> t;
	for (int i = 1; i <= m; i++) {
		if (func(i, t)) {
			ans++;
		}
	}
	cout << ans << endl;

	return 0;
}

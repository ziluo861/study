/*************************************************************************
	> File Name, oj514.cpp
	> Author, 
	> Mail, 
	> Created Time, Sun 08 Nov 2020 07,47,56 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int num[15] = {
6
,2
,5
,5
,4
,5
,6
,3
,7
,6
,2
,2
};

int sum(int x) {
	if (x == 0) {
		return num[0];
	}
	int temp = 0;
	while(x) {
		temp += num[x % 10];
		x /= 10;
	}
	return temp;
}

int func(int a, int b) {
	int x = sum(a), y = sum(b), z = sum(a + b);
	return x + y + z + 4;
}

int main() {
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < 2000; i++) {
		for (int j = 0; j < 2000; j++) {
			if (func(i, j) == n) {
				ans++;
				cout << i << " + " << j  << "=" << i + j << endl;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

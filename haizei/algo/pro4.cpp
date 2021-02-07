/*************************************************************************
	> File Name: pro4.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 06:43:08 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

bool rev(int x) {
	int temp = 0, y = x;
	while (x) {
		temp = temp * 10 + x % 10;
		x /= 10;
	}
	return temp == y;
}

int main() {
	int ans = 0;
	for (int i = 100; i < 1000; i++) {
		for(int j = i; j < 1000; j++) {
			int t = i * j;
			if (rev(t)) ans = max(ans, t);
		}
	}
	cout << ans <<endl;
	return 0;
}

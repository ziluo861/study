/*************************************************************************
	> File Name: euler14.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Oct 2020 10:28:24 AM CST
	(最长考拉兹序列) （递归）（记忆数组法)
 ************************************************************************/

#include<iostream>
using namespace std;

int func1(long long n) {
	if (n == 1) return 1;
	if (n % 2 == 0) return func1(n / 2) + 1;
	return func1(3 * n + 1) + 1;
}

int num[10000000];

int func2(long long n) {
	if (n == 1) return 1;
	if (n < 10000000 && num[n]) return num[n];
	int t;
	if (n % 2 == 0) t = func2(n / 2) + 1;
	else t = func2(3 * n + 1) + 1;
	if (n < 10000000) num[n] = t;
	return t;
}

int main() {
	int ans = 1;
	for (int i = 2; i <= 1000000; i++) {
		
		if (func2(ans) < func2(i)) ans = i;
	}
	cout << ans << endl;

	return 0;
}

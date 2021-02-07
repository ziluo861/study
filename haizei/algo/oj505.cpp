/*************************************************************************
	> File Name: oj505.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 08 Nov 2020 06:35:58 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string num[100005];

bool cmp (const string &a, const string &b) { //保证连接后按顺序字典序最大
	return a + b > b + a;
}

int main() {
	cin >> n;
	for (int i = 0;  i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << num[i];
	}
	cout << endl;
	return 0;
}

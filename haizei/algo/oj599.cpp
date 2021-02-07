/*************************************************************************
	> File Name: oj599.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Nov 2020 08:30:43 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int n, t, num[1000005];

int main() {
	scanf("%d%d", &n, &t);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	int l = 0, r = n - 1;
	while(l < r) {
		if (num[l] + num[r] == t) {
			cout << l << " " << r << endl;
			return 0;
		}
		if (num[l] + num[r] > t) {
			r--;
		}else{
			l++;
		}
	}
	cout << "-1\n" << endl;
	return 0;
}

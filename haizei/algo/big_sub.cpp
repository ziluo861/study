/*************************************************************************
	> File Name: big_sub.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Oct 2020 08:24:24 AM CST
 ************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;

int num1[105], num2[105], sum[105];
char s1[105], s2[105], temp[105];

void big_sub(char arr1[], char arr2[], int n, int m) {
	for (int i = 0, j = n - 1; i < n; i++, j--) {
		num1[j] = arr1[i] - '0';
	}
	for (int i = 0, j = n - 1; i < m; i++, j--) {
		num2[j] = arr2[i] - '0';
	}

	for (int i = 0; i < n; i++) {
		sum[i] = arr1[i] - arr2[i];
	}

	for (int i = 0; i < n; i++) {
		if (sum[i] < 0) {
			sum[i + 1] -= 1;
			sum[i] += 10;
		}
	}
}

int main() {
	cin >> s1 >> s2;
	int n = strlen(s1);
	int m = strlen(s2);
	if (n > m) big_sub(s1, s2, n, m);
	else if (n < m) cout<<'-',big_sub(s2, s1, m, n);
	for (int i = max(n,m); i >= 0; i--) {
		cout << sum[i];
	}
	cout << endl;
	return 0;
}

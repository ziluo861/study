/*************************************************************************
	> File Name: oj485.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 08 Nov 2020 04:44:18 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int n, num[105], ans, sum;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		sum += num[i];
	}
	sum /= n;
	for (int i = 0; i < n - 1; i++) {
		if (num[i] != sum) {
			ans++;
			num[i + 1] += num[i] - sum;
			num[i] = sum;
		}
	}
	cout << ans << endl;
	return 0;
}

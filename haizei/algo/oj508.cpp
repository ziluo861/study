/*************************************************************************
	> File Name: oj508.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 08 Nov 2020 06:56:43 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, num[1005], ans;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}
	sort(num + 1, num + n + 1);
	for (int i = n; i > 0; i -= 2) {
		if (i == 1) {
			ans += num[1];
			break;
		} else if (i == 2) {
			ans += num[2];
			break;
		} else if (i == 3) {
			ans += num[3] + num[2] + num[1];
			break;
		} else {
			ans += min(num[i] + num[1] + num[i - 1] + num[1], num[2] + num[1] + num[i] + num[2]);
		}
	}
	cout << ans << endl;
	return 0;
}

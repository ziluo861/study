/*************************************************************************
	> File Name: pro22.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Nov 2020 06:16:38 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int n = 0;
	string name[6000];
	while (cin >> name[n]) {
		n++;
	}
	sort(name, name + n);
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		int t = 0;
		for (int j = 0; j < name[i].size(); j++) {
			t += name[i][j] - 'A' + 1;
		}
		ans += t * (i + 1);
	}
	cout << ans << endl;

	return 0;
}

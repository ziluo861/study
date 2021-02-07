/*************************************************************************
	> File Name: oj397.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Nov 2020 06:24:50 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int n, m, num[105][105], ans;
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

void func(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int xx = x + dir[i][0];
		int yy = y + dir[i][1];
		if (num[xx][yy] != 0) {
			num[xx][yy] = 0;
			func(xx, yy);
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> num[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m ; j++) {
			if (num[i][j] != 0) {
				ans++;
				num[i][j] = 0;
				func(i, j);
			}
		}
	}
	cout << ans << endl;
	return 0;
}

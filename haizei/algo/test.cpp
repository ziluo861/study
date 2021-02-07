/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Nov 2020 04:44:08 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int n, m, ans;
char mmap[105][105];
int dir[4][2] = {0, 1 ,1 ,0, 0, -1, -1, 0};

void func(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int xx = x + dir[i][0];
		int yy = y + dir[i][1];
		if (xx < 0 || yy < 0 || xx > n || yy > m || mmap[xx][yy] == '0') {
			continue;
		}
		if (mmap[xx][yy] == '1') {
			mmap[xx][yy] = '0';
			func(xx, yy);
		}
	}
}


int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mmap[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mmap[i][j] == '1') {
				func(i, j);
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

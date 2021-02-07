/*************************************************************************
	> File Name: oj404.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Nov 2020 07:26:27 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int n, m, ans, mark[3005][3005], sx, sy;
char mmap[3005][3005];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

void func(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int xx = x + dir[i][0];
		int yy = y + dir[i][1];
		if (xx < 1 || yy < 1 || xx > n || yy > m || mark[xx][yy] == 1) {
			continue;
		}
		if (mmap[xx][yy] != mmap[x][y]) {
			ans++;
			mark[xx][yy] = 1;
			func(xx, yy);
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> &mmap[i][1];
	}
	cin >> sx >> sy;
	ans = 1;
	mark[sx][sy] = 1;
	func(sx, sy);
	cout << ans << endl;


	return 0;
}

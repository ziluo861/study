/*************************************************************************
	> File Name: oj535.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Nov 2020 06:06:47 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int h, w, sx, sy, ans = 1;
char num[150][150];
int dir[4][2] = {0, 1, 1, 0, 0 , -1, -1, 0};

void func(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int xx = x + dir[i][0];
		int yy = y + dir[i][1];
		if (num[xx][yy] == '.') {
			num[xx][yy] = '#';
			ans += 1;
			func(xx, yy);
		}
	}
}

int main() {
	cin >> h >> w;
	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= h; j++) {
			cin >> num[i][j];
			if (num[i][j] == '@') {
				sx = i;
				sy = j;
			}
		}
	}
	func(sx, sy);
	cout << ans << endl;
	return 0;
}

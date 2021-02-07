/*************************************************************************
	> File Name: oj399.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Nov 2020 06:08:20 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
	int x, y, step;
};

int n, m, sx, sy;
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
char mmap[505][505];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mmap[i][j];
			if (mmap[i][j] == '2') {
				sx = i;
				sy = j;
			}
		}
	}
	
	queue<node> que;
	que.push((node){sx, sy, 0});
	while(!que.empty()) {
		node temp = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			int xx = temp.x + dir[i][0];
			int yy = temp.y + dir[i][1];
			if (mmap[xx][yy] == '3') {
				cout << temp.step + 1 << endl;
				return 0;
			}
			if (mmap[xx][yy] == '.') {
				mmap[xx][yy] = '0';
				que.push((node){xx, yy, temp.step + 1});
			}
		}
	}
	cout << -1 << endl;
	return 0;
}

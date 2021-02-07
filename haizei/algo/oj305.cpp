/*************************************************************************
	> File Name: oj305.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Nov 2020 07:41:34 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
	int x, y, step;
};

int n, m, sx, sy;
int dir[8][2] = {0, 1, 1, 0, 0, -1, -1, 0, 1, 1, 1, -1, -1, 1, -1, -1};
char mmap[105][105];
int main() {
	queue<node> que;
	cin >> m >> n >> sy >> sx;
	sx = n - sx + 1;
	for (int i = 1; i <= n; i++) {
		cin >> &mmap[i][1];
	}
	que.push((node){sx, sy, 0});
	mmap[sx][sy] = 0;
	int ans = 0;
	while(!que.empty()) {
		node temp = que.front();
		ans = temp.step;
		que.pop();
		for (int i = 0; i < 8; i++) {
			int x = temp.x + dir[i][0];
			int y = temp.y + dir[i][1];
			if (mmap[x][y] == '.') {
				mmap[x][y] = 'M';
				que.push(node{x, y, temp.step + 1});
			}
		}
	}
	
	cout << ans << endl;

	return 0;
}

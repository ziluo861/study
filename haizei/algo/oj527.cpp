/*************************************************************************
	> File Name: oj527.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Nov 2020 08:29:40 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
	int x, y, step, d;
};

int m, n, D, mark[105][105][105];
char mmap[105][105];
int dir[4][2] = {0, 1, 1, 0, 0 ,-1, -1, 0};


int main() {

	cin >> n >> m >> D;

	for (int i = 1; i <= n; i++) {
		cin >> &mmap[i][1];
	}
	queue<node> que;
	que.push((node){1, 1, 0, D});
	for (int i = 0; i <= D; i++) {
		mark[1][1][i] = 1;
	}
	while(!que.empty()) {
		node temp = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			for (int j = 2; j <= temp.d; j++) {
				int x = temp.x + dir[i][0] * j;
				int y = temp.y + dir[i][1] * j;
				if (x < 1 || y < 1 || x > n || y > m) {
					break;
				}
				if (x == n && y == m) {
					cout << temp.step + 1 << endl;
					return 0;
				}
				if (mmap[x][y] == 'P' && mark[x][y][temp.d - j] == 0) {
					que.push((node){x, y, temp.step + 1, temp.d- j});
					mark[x][y][temp.d - j] = 1;
				}
			}
			int x = temp.x + dir[i][0];
			int y = temp.y + dir[i][1];
			if (x == n && y == m) {
				cout << temp.step + 1 <<endl;
				return 0;
			}
			if (mmap[x][y] == 'P' && mark[x][y][temp.d] == 0) {
				que.push((node){x, y, temp.step + 1, temp.d});
				mark[x][y][temp.d] = 1;
			}
		}
	}
	cout << "impossible" << endl;
	return 0;
}

/*************************************************************************
	> File Name: oj398.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Nov 2020 06:38:51 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

struct node {
	int x, y, step;
};

int n, m, sx, sy, num[405][405];

int dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, 1,-2, -1 };
//int dir[8][2] = {1, 2, 1, -2, 2, 1, 2, -2, -1, 1, -1, -2, -2, -1, -2, 1};

int main() {
	memset(num, -1, sizeof(num));
	queue<node> que;
	cin >> n >> m >> sx >> sy;
	num[sx][sy] = 0;
	que.push((node){sx, sy, 0});
	while(!que.empty()) {
		node temp = que.front();
		que.pop();
		for (int i = 0; i < 8; i++) {
			int xx = temp.x + dir[i][0];
			int yy = temp.y + dir[i][1];
			if (xx < 1 || yy < 1 || xx > n || yy > m|| num[xx][yy] != - 1) {
				continue;
			}
			num[xx][yy] = temp.step + 1;
			que.push((node){xx, yy, num[xx][yy]});
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j != 1) {
				cout << " ";
			}
			cout << num[i][j];
		}
			cout << endl;
	}

	return 0;
}

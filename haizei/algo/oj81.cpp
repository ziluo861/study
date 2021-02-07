/*************************************************************************
	> File Name: oj81.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 28 Nov 2020 01:35:52 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
	int x, y;
	int step, flag;
};

int n, m, check[2005][2005];
char mmap[2005][2005];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

int main() {
	cin >> n >> m;
	queue<node> que;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mmap[i][j];
			if (mmap[i][j] == 'S') {
				que.push((node){i, j, 0, 0});
				check[i][j] = 1;
			}
		}
	}

	while(!que.empty()) {
		node temp = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			int x = temp.x + dir[i][0];
			int y = temp.y + dir[i][1];
			if ((check[x][y] & 1) && temp.flag == 0) {
				continue;
			}
			if ((check[x][y] & 2) && temp.flag == 1) {
				continue;
			}
			if (mmap[x][y] == 'T' && temp.flag == 1) {
				cout << temp.step + 1 << endl;
				return 0;
			}
			if (mmap[x][y] == '.' || mmap[x][y] == 'S' || mmap[x][y] == 'T') {
				que.push((node){x, y, temp.step + 1, temp.flag});
				check[x][y] += temp.flag + 1;
			}
			if (mmap[x][y] == 'P') {
				que.push((node){x, y, temp.step + 1, 1});
				check[x][y] = 3;
			}
		}
	}
	cout << -1 << endl;

	return 0;
}

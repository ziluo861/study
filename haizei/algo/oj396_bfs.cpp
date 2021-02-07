/*************************************************************************
	> File Name: oj396_bfs.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Nov 2020 08:45:31 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
	int x, y;
};

int n, mmap[35][35];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};


int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> mmap[i][j];
		}
	}
	queue<node> que;
	que.push((node){0, 0});
	mmap[0][0] = 3;
	while(!que.empty()) {
		node temp = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			int xx = temp.x + dir[i][0];
			int yy = temp.y + dir[i][1];
			if (xx < 0 || yy < 0 || xx > n + 1 || yy > n + 1 || mmap[xx][yy] == 3) {
				continue;
			}
			if(mmap[xx][yy] == 0) {
				mmap[xx][yy] = 3;
				que.push((node){xx, yy});
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j != 1) {
				cout << " ";
			}
			if (mmap[i][j] == 3) {
				cout << 0;
			} else if (mmap[i][j] == 0) {
				cout << 2;
			} else {
				cout << 1;
			}
		}
		cout << endl;
	}

	return 0;
}

/*************************************************************************
	> File Name: oj304.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Nov 2020 06:23:05 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
	int x, y, step;
};

int n, m;
int dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, 1,-2, -1 };
char mmap[200][200];

int main() {
	cin >> m >> n;
	queue<node> que;
	for (int i = 5; i < n + 5; i++) {
		for (int j = 5; j < m + 5; j++) {
			cin >> mmap[i][j];
			if (mmap[i][j] == 'K') {
				que.push((node){i, j, 0});
			}
		}
	}
	
	while(!que.empty()) {
		node temp = que.front();
		que.pop();
		for (int i = 0; i < 8; i++) {
			int xx = temp.x + dir[i][0];
			int yy = temp.y + dir[i][1];
			if (mmap[xx][yy] == 'H') {
				cout << temp.step + 1 << endl;
				return 0;
			}
			if (mmap[xx][yy] == '.') {
				mmap[xx][yy] = '*';
				que.push((node){xx, yy, temp.step + 1});
			}
		}
	}
	return 0;
}

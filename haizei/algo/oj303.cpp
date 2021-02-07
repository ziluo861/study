/*************************************************************************
	> File Name: oj303.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Nov 2020 07:20:34 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

struct node {
	int x, y, step;
};

int n, m, num[1005][1005];
char mmap[1005][1005];


int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

int main() {
	memset(num, -1, sizeof(num));
	cin >> n >> m;
	queue<node> que;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mmap[i][j];
			if (mmap[i][j] == '1') {
				que.push((node){i, j, 0});
				num[i][j] = 0;
			}
		}
	}
	while(!que.empty()) {
		node temp = que.front();
		que.pop();
		for (int i= 0; i < 4; i++) {
			int xx = temp.x + dir[i][0];
			int yy = temp.y + dir[i][1];
			if (mmap[xx][yy] != 0 && num[xx][yy] == -1) {
				num[xx][yy] = temp.step + 1;
				que.push((node){xx, yy, temp.step + 1});
			}
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
